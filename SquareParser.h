#pragma once

#include <memory>
#include <regex>

#include "Parser.h"
#include "Shape.h"
#include "Square.h"
#include "Exception.h"

using std::shared_ptr, std::make_shared, std::regex;

class SquareParser : public Parser {
public:
    SquareParser() = default;

    /// <summary>
    /// Parsing square 
    /// </summary>
    /// <param name="">The given string line</param>
    /// <returns>Pointer pointing to the square parsing</returns>
    shared_ptr<Shape> parser(string) override;
};