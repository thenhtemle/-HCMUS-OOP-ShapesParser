#include "HexagonParser.h"


shared_ptr<Shape> HexagonParser::parser(string data) {
    if (data.empty()) {
        throw new EmptyData("Square empty line!!");
    }

    //Checking the valid format of the hexagon
    regex hexagonPattern("( a=)\?([0-9]*[.])?[0-9]+");
    bool matched = regex_match(data, hexagonPattern);

    //Throw exception if unmatched
    if (!matched) {
        throw new IncorrectFormat(data);
    }

    //Convert the side from string to double
    data = data.substr(data.find("=") + 1);
    double side = stod(data);

    if (side <= 0) throw new InvalidDataRange(data);

    //Constructor the square from side
    shared_ptr<Shape> res = make_shared<Hexagon>(side);

    return res;
}