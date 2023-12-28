#pragma once

#include <iostream>
#include <string>
#include <sstream>

#include "Shape.h"

using std::exception;
using std::stringstream;
using std::string;

class Hexagon : public Shape {
private:
    double _side;
public:
    Hexagon() = default;

    /// <summary>
    /// Constructor the euqivalent hexagon
    /// </summary>
    /// <param name="">side</param>
    Hexagon(double);
public:
    /// <summary>
    /// Getting the attribute of the equivalent hexagon and put it in the array
    /// </summary>
    /// <returns>The vector with side of the equivalent hexagon</returns>
    vector<double> getAttribute() override;

    /// <summary>
    /// Caculate the perimeter of the equivalent hexagon
    /// </summary>
    /// <returns>The perimeter</returns>
    double perimeter() override;

    /// <summary>
    /// Caculate the area of the equivalent hexagon
    /// </summary>
    /// <returns>The area</returns>
    double area() override;
public:
    /// <summary>
    /// Define the type of shape
    /// </summary>
    /// <returns>Shape Type</returns>
    string getShapeType() override;

    /// <summary>
    /// Print the attributes
    /// </summary>
    void display() override;
};