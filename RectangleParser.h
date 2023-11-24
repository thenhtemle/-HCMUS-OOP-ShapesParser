#pragma once

#include <memory>
#include <regex>

#include "Parser.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Exception.h"

using std::shared_ptr, std::make_shared, std::regex;

class RectangleParser : public Parser {
public:
    RectangleParser() = default;

    /// <summary>
    /// Parsing rectangle
    /// </summary>
    /// <param name="">The given string line</param>
    /// <returns>Pointer pointing to the rectangle parsing</returns>
    shared_ptr<Shape> parser(string) override;
};