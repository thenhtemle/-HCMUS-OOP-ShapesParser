#include "Triangle.h"
using std::sqrt;

Triangle::Triangle(double a, double b, double c) {
	_side1 = a;
	_side2 = b;
	_side3 = c;
}

vector<double> Triangle::getAttribute() {
	return { _side1, _side2, _side3 };
}

double Triangle::perimeter() {
	return _side1 + _side2 + _side3;
}

double Triangle::area() {
	float p = perimeter() / 2;
	return sqrt(p * (p - _side1) * (p - _side2) * (p - _side3));
}

string Triangle::getShapeType() {
	return "Triangle";
}

void Triangle::display() {
	std::stringstream res;
	res << "Side1= " << _side1 << ", Side2=" << _side2  << ", Side3=" <<_side3;
	std::cout << res.str();
}
