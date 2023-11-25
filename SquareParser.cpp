#include "SquareParser.h"

shared_ptr<Shape> SquareParser::parser(string data)
{
    if (data.empty()) {
        throw new EmptyData("Square empty line!!");
    }

    //Checking the valid format of the square
    regex squarePattern("( a=)\?([0-9]*[.])?[0-9]+");
    bool matched = regex_match(data, squarePattern);

    //Throw exception if unmatched
    if (!matched) {
        throw new IncorrectFormat(data);
    }

    //Convert the side from string to double
    data = data.substr(data.find("=") + 1);
    double side = stod(data);

    if (side <= 0) throw new InvalidDataRange(data);

    //Constructor the square from side
    shared_ptr<Shape> res = make_shared<Square>(side);

    return res;
}