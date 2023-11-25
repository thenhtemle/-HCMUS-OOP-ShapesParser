#include "RectangleParser.h"
#include "Rectangle.h"

shared_ptr<Shape> RectangleParser::parser(string data)
{
    if (data.empty()) {
        throw new EmptyData("Rectangle empty line!!");
    }

    //Checking the valid format of the rectangle
    regex rectanglePattern("( w=)\?([0-9]*[.])?[0-9]+\(, h=)\?([0-9]*[.])?[0-9]+");
    bool matched = regex_match(data, rectanglePattern);

    //Throw exception if unmatched
    if (!matched) {
        throw new IncorrectFormat(data);
    }

    stringstream ss(data);
    string buffer;

    getline(ss, buffer, '=');
    getline(ss, buffer, ',');

    //Convert the weight and height from string to double
    double width = stod(buffer);
    getline(ss, buffer, '=');
    getline(ss, buffer);
    double height = stod(buffer);

    if (width <= 0 || height <= 0) {
        throw new InvalidDataRange(data);
    }

    //Constructor the rectangle from weight and height
    shared_ptr<Shape> res = make_shared<Rectangle>(width, height);
    return res;
}
