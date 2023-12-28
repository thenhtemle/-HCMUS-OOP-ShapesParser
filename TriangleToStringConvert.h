#pragma once
#include <sstream>

#include "Shape.h"
#include "Triangle.h"
#include "ShapeToStringConvert.h"

using std::stringstream;

class TriangleToStringConvert : public ShapeToStringConvert {
public:
    TriangleToStringConvert() = default;
public:
    string convertData(shared_ptr<Shape>) override;
    string convertDataCalculated(shared_ptr<Shape>) override;
};
