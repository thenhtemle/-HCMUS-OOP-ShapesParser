#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Shape.h"

using std::exception;
using std::string;

class Circle : public Shape {
private:
	double _radius;
	const double PI = 3.14;
public:
	Circle() = default;

	/// <summary>
	/// Constructor the circle
	/// </summary>
	/// <param name="">radius</param>
	Circle(double);
public:
	/// <summary>
	/// Getting the attribute of the circle and put it in the array
	/// </summary>
	/// <returns>The vector with radius of the circle</returns>
	vector<double> getAttribute() override;

	/// <summary>
	/// Calculate the perimeter of the circle
	/// </summary>
	/// <returns>The perimeter</returns>
	double perimeter() override;

	/// <summary>
	/// Calculate the area of the circle
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