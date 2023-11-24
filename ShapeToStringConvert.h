#pragma once

#include <sstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <memory>

#include "Shape.h"

using std::string;
using std::shared_ptr;
using std::stringstream;
using std::fixed, std::setprecision;
using std::setw, std::left;

class ShapeToStringConvert {
protected:
    int _space = 25;
public:
    ShapeToStringConvert() = default;
public:
    virtual string convertData(shared_ptr<Shape>) = 0;
    virtual string convertDataCalculated(shared_ptr<Shape>) = 0;
    virtual string toString() = 0;
};