#pragma once

#include <iostream>
#include <vector>

using std::vector;

class Shape {
public:
    virtual vector<double> getAttribute() = 0;
    virtual double perimeter() = 0;
    virtual double area() = 0;
public:
    virtual string getShapeType() { return "Shape"; };
};
