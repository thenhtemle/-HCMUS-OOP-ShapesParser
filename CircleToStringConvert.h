#pragma once
#include <sstream>

#include "Shape.h"
#include "Circle.h"
#include "ShapeToStringConvert.h"

using std::stringstream;

class CircleToStringConvert : public ShapeToStringConvert {
public:
    CircleToStringConvert() = default;
public:
    string convertData(shared_ptr<Shape>) override;
    string convertDataCalculated(shared_ptr<Shape>) override;
};
