#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <memory>

#include "Shape.h"

using std::string;
using std::shared_ptr;

class ShapeToStringConvert {
public:
    ShapeToStringConvert() = default;
public:
    virtual string convertData(shared_ptr<Shape>) = 0;
    virtual string convertDataCalculated(shared_ptr<Shape>) = 0;
    virtual string toString() = 0;
};