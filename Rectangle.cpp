#include "Rectangle.h"

Rectangle::Rectangle(double width, double height) {
    _width = width;
    _height = height;
}

vector<double> Rectangle::getAttribute() {
    return { _width, _height };
}

double Rectangle::perimeter() {
    return 2 * (_width + _height);
}

double Rectangle::area() {
    return _width * _height;
}

string Rectangle::getShapeType() {
    return "Rectangle";
}

void Rectangle::display() {
    std::stringstream res;
    res << "Width= " << _width << ", Height=" << _height;
    std::cout << res.str();
}