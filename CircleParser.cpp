#include "CircleParser.h"
#include "Circle.h"

shared_ptr<Shape> CircleParser::parser(string data)
{
    if (data.empty()) {
        throw new EmptyData("Rectangle empty line!!");
    }

    //Checking the valid format of the circle
    regex circlePattern("( r=)\?([0-9]*[.])?[0-9]+");
    bool matched = regex_match(data, circlePattern);

    //Throw exception if unmatched
    if (!matched) {
        throw new IncorrectFormat(data);
    }

    //Convert the radius from string to double
    data = data.substr(data.find("=") + 1);
    double radius = stod(data);

    if (radius <= 0) throw new InvalidDataRange(data);

    //Constructor the circle from radius
    shared_ptr<Shape> res = std::make_shared<Circle>(radius);

    return res;
}
