#include "Hexagon.h"

Hexagon::Hexagon(double side)
{
    _side = side;
}

vector<double> Hexagon::getAttribute()
{
    return { _side };
}

double Hexagon::perimeter()
{
    return _side * 6;
}

double Hexagon::area()
{
    return  _side * _side * 3 * sqrt(3) / 2;
}

string Hexagon::getShapeType()
{
    return "Hexagon";
}

void Hexagon::display() {
    std::stringstream res;
    res << "Side=" << _side;
    std::cout << res.str();
}