#include "RectangleToStringConvert.h"

string RectangleToStringConvert::convertData(shared_ptr<Shape> ShapePointer) {
	stringstream builder;
	vector<double> attribute = ShapePointer->getAttribute();

	builder << "Rectangle: Width=" << attribute[0] << ", Height=" << attribute[1];
	return builder.str();
}

string RectangleToStringConvert::convertDataCalculated(shared_ptr<Shape> ShapePointer) {
	stringstream builder;

	stringstream buildPerimeter;
	buildPerimeter << "Perimeter=" << fixed << setprecision(1) << ShapePointer->perimeter();
	string perimeter = buildPerimeter.str();

	stringstream buildArea;
	buildArea << "Area=" << fixed << setprecision(2) << ShapePointer->area();
	string area = buildArea.str();

	builder << setw(_space) << left << "Rectangle" << "| " << setw(_space) << left << perimeter << "| " << setw(_space) << left << area << "|";

	return builder.str();
}
