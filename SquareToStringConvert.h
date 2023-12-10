#pragma once

#include <sstream>

#include "Shape.h"
#include "Square.h"
#include "ShapeToStringConvert.h"

using std::stringstream;

class SquareToStringConvert : public ShapeToStringConvert {
public:
    SquareToStringConvert() = default;
public:
    string convertData(shared_ptr<Shape>) override;
    string convertDataCalculated(shared_ptr<Shape>) override;
};