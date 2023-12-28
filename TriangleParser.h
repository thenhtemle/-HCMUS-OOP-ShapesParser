#pragma once

#include <memory>
#include <regex>

#include "Parser.h"
#include "ParserFactory.h"
#include "Triangle.h"
#include "Exception.h"


using std::shared_ptr, std::make_shared, std::regex;

class TriangleParser {
public:
    TriangleParser() = default;

    /// <summary>
    /// Parsing triangle
    /// </summary>
    /// <param name="">The given string line</param>
    /// <returns>Pointer pointing to the triangle parsing</returns>
    shared_ptr<Shape> parser(string);
};