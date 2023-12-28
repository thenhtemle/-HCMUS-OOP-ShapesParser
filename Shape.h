#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using std::to_string, std::stringstream;
using std::string;
using std::vector;

class Shape {
public:
    virtual vector<double> getAttribute() = 0;
    virtual double perimeter() = 0;
    virtual double area() = 0;
public:
    virtual string getShapeType() = 0;
    virtual void display() = 0;
};
