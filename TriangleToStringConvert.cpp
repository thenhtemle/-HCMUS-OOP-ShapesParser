#include "TriangleToStringConvert.h"

string TriangleToStringConvert::convertData(shared_ptr<Shape> ShapePointer) {
	stringstream builder;
	vector<double> attribute = ShapePointer->getAttribute();

	builder << "Square: a=" << attribute[0] << ", b=" << attribute[1] << ", c=" << attribute[2];
	return builder.str();
}

string TriangleToStringConvert::convertDataCalculated(shared_ptr<Shape> ShapePointer) {
	stringstream builder;

	stringstream buildPerimeter;
	buildPerimeter << "Perimeter=" << fixed << setprecision(1) << ShapePointer->perimeter();
	string perimeter = buildPerimeter.str();

	stringstream buildArea;
	buildArea << "Area=" << fixed << setprecision(2) << ShapePointer->area();
	string area = buildArea.str();

	builder << setw(_space) << left << "Triangle" << "| " << setw(_space) << left << perimeter << "| " 
		<< setw(_space) << left << area << "|";

	return builder.str();
}
