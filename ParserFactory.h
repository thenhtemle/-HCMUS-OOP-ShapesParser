#pragma once

#include <tuple>

#include "Parser.h"

using std::tuple;

class ParserFactory {
private:
    tuple<string, shared_ptr<Parser>> _prototype;
public:
    ParserFactory() = default;

    /// <summary>
    /// Constructor the parser factory
    /// </summary>
    /// <param name="">Type of shape</param>
    /// <param name="">Pointer pointing to parser type equivalent to shape type</param>
    ParserFactory(string, shared_ptr<Parser>);

    ~ParserFactory() = default;
public:
    /// <summary>
    /// Selecting the pointer pointing to parser type equivalent to shape type
    /// </summary>
    /// <param name="">Type of shape</param>
    /// <returns>Pointer pointing to parser type</returns>
    shared_ptr<Parser> select(string); 
};