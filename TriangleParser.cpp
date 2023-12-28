#include <exception>

#include "TriangleParser.h"
#include "Triangle.h"

using std::exception;

shared_ptr<Shape> TriangleParser::parser(string data)
{
    if (data.empty()) {
        throw new EmptyData("Rectangle empty line!!");
    }

    //Checking the valid format of the triangle
    regex trianglePattern("( a=)\?([0-9]*[.])?[0-9]+, (b=)\?([0-9]*[.])?[0-9]+, (c=)\?([0-9]*[.])?[0-9]+)");
    bool matched = regex_match(data, trianglePattern);

    //Return NULL pointer if unmatched
    if (!matched) {
        throw new IncorrectFormat(data);
    }

    stringstream ss(data);
    string buffer;

    //Convert the 3 sides from string to double
    getline(ss, buffer, '=');
    getline(ss, buffer, ',');
    double side1 = stod(buffer);

    getline(ss, buffer, '=');
    getline(ss, buffer, ',');
    double side2 = stod(buffer);

    getline(ss, buffer, '=');
    getline(ss, buffer);
    double side3 = stod(buffer);

    //Check if the sides are negative
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        throw new InvalidDataRange(data);
    }

    //Check if the values are not suitable
    if (side1 + side2 <= side3 || side2 + side3 <= side1 || side1 + side3 <= side2) {
        throw exception("Triangle is not exist!!!");
    }

    //Constructor the triangle from 3 sides
    shared_ptr<Shape> res = std::make_shared<Triangle>(side1, side2, side3);

    return res;
}