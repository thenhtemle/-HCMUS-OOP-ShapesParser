#include "Square.h"

Square::Square(double side)
{
    _side = side;
}

vector<double> Square::getAttribute()
{
    return { _side };
}

double Square::perimeter()
{
    return _side * 4;
}

double Square::area()
{
    return _side * _side;
}

string Square::getShapeType()
{
    return "Square";
}

void Square::display() {
    std::stringstream res;
    res << "Side=" << _side;
    std::cout << res.str();
}
