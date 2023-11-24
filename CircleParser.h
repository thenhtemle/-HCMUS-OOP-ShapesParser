#pragma once

#include <memory>
#include <regex>

#include "Parser.h"
#include "Shape.h"
#include "Circle.h"
#include "Exception.h"

using std::shared_ptr, std::make_shared, std::regex;

class CircleParser : public Parser {
public:
    CircleParser() = default;

    /// <summary>
    /// Parsing rectangle
    /// </summary>
    /// <param name="">The given string line</param>
    /// <returns>Pointer pointing to the rectangle parsing</returns>
    shared_ptr<Shape> parser(string) override;
};