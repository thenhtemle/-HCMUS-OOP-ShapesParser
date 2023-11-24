#pragma once

#include <iostream>
#include <string>
#include "Shape.h"

using std::string;

class Rectangle : public Shape {
private:
	double _width;
	double _height;
public:
	Rectangle() = default;

	/// <summary>
	/// Constructor the rectangle
	/// </summary>
	/// <param name="">width</param>
	/// <param name="">height</param>
	Rectangle(double, double);

	/// <summary>
	/// Getting the attribute of the rectangle and put it in the array
	/// </summary>
	/// <returns>The vector with the width and height of the rectangle</returns>
	vector<double> getAttribute() override;

	/// <summary>
	/// Calculate the perimeter of the rectangle
	/// </summary>
	/// <returns>The perimeter</returns>
	double perimeter() override;

	/// <summary>
	/// Calculate the area of the rectangle
	/// </summary>
	/// <returns>The area</returns>
	double area() override;
public:
	/// <summary>
	/// Define the type of shape
	/// </summary>
	/// <returns>Shape Type</returns>
	string getShapeType() override;
};