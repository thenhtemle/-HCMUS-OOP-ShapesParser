#include "HexagonToStringConvert.h"

string HexagonToStringConvert::convertData(shared_ptr<Shape> ShapePointer) {
	stringstream builder;
	vector<double> attribute = ShapePointer->getAttribute();

	builder << "Square: Side= " << attribute[0];
	return builder.str();
}

string HexagonToStringConvert::convertDataCalculated(shared_ptr<Shape> ShapePointer) {
	stringstream builder;

	stringstream buildPerimeter;
	buildPerimeter << "Perimeter = " << fixed << setprecision(1) << ShapePointer->perimeter();
	string perimeter = buildPerimeter.str();

	stringstream buildArea;
	buildArea << "Area=" << fixed << setprecision(2) << ShapePointer->area();
	string area = buildArea.str();

	builder << setw(_space) << std::left << "Equivalent Hexagon" << "| " << setw(_space) << std::left 
		<< perimeter << "| " << setw(_space) << std::left << area << "|";

	return builder.str();
}