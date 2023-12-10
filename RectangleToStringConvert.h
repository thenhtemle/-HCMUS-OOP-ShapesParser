#pragma once
#include <sstream>

#include "Shape.h"
#include "Rectangle.h"
#include "ShapeToStringConvert.h"

using std::stringstream;

class RectangleToStringConvert : public ShapeToStringConvert {
public:
    RectangleToStringConvert() = default;
public:
    string convertData(shared_ptr<Shape>) override;
    string convertDataCalculated(shared_ptr<Shape>) override;
};