#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
#include "Parser.h"
#include "RectangleParser.h"
#include "CircleParser.h"
#include "SquareParser.h"

#include "Display.h"
#include "Exception.h"
#include "ParserFactory.h"
#include "ShapeToStringConvert.h"
#include "ShapesTextProvider.h"

using std::cin, std::cout, std::endl;
using std::string;
using std::vector;
using std::shared_ptr, std::make_shared;