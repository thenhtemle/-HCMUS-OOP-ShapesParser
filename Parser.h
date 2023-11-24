#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <memory>

#include "Shape.h"

using std::shared_ptr;
using std::string, std::stringstream;

class Parser {
public:
    virtual shared_ptr<Shape> parser(string) = 0;
    string toString() { return "Parser"; }
};