#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Shape.h"

using std::exception;
using std::string;

class Triangle : public Shape {
private:
	double _side1;
	double _side2;
	double _side3;
public:
	Triangle() = default;

	/// <summary>
	/// Constructor the triangle
	/// </summary>
	/// <param name="">3 sides</param>
	Triangle(double, double, double);
public:
	/// <summary>
	/// Getting the attribute of the triangle and put it in the array
	/// </summary>
	/// <returns>The vector with 3 sides of the triangle</returns>
	vector<double> getAttribute() override;

	/// <summary>
	/// Calculate the perimeter of the triangle
	/// </summary>
	/// <returns>The perimeter</returns>
	double perimeter() override;

	/// <summary>
	/// Caculate the area of the triangle
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