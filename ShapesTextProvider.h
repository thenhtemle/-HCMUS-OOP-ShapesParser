#pragma once

#include <sstream>
#include <fstream>
#include <string>

#include "ParserFactory.h"
#include "Shape.h"

using std::getline;
using std::string;

const string filename = "shapes.txt";

class ShapesTextProvider {
public:
	static tuple<int, vector<shared_ptr<Shape>>> next();
};