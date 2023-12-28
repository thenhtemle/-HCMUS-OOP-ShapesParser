#pragma once

#include <memory>
#include <regex>

#include "Parser.h"
#include "Shape.h"
#include "Hexagon.h"
#include "Exception.h"

using std::shared_ptr, std::make_shared, std::regex;

class HexagonParser : public Parser {
public:
    HexagonParser() = default;

    /// <summary>
    /// Parsing equivalent hexagon 
    /// </summary>
    /// <param name="">The given string line</param>
    /// <returns>Pointer pointing to the equivalent hexagon parsing</returns>
    shared_ptr<Shape> parser(string) override;
};