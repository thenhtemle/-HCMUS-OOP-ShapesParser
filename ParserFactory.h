#pragma once

#include <tuple>
#include <map>
#include "Parser.h"

using std::tuple;
using std::unique_ptr;
using std::map;

class ParserFactory {
private:
    map<string, shared_ptr<Parser>> _container;
    static inline unique_ptr<ParserFactory> _instance;
    ParserFactory();
public:

    /// <summary>
    /// Destructor the factory
    /// </summary>
    ~ParserFactory() = default;

    /// <summary>
    /// Delete the copy func
    /// </summary>
    /// <param name="">CircleParser</param>
    ParserFactory(const ParserFactory&) = delete;

    /// <summary>
    /// Delete the copy func
    /// </summary>
    /// <param name="">CircleParser</param>
    void operator=(const ParserFactory&) = delete;

    static const unique_ptr<ParserFactory>& getInstance();
public:
    /// <summary>
    /// Selecting the pointer pointing to parser type equivalent to shape type
    /// </summary>
    /// <param name="">Type of shape</param>
    /// <returns>Pointer pointing to parser type</returns>
    shared_ptr<Parser> select(string); 
};
