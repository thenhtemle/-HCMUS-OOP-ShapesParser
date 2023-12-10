#pragma once

#include <iostream>
#include <tuple>
#include <string>
#include <memory>
#include <map>

#include "ShapeToStringConvert.h"
#include "CircleToStringConvert.h"
#include "RectangleToStringConvert.h"
#include "SquareToStringConvert.h"

using std::map;
using std::string, std::tuple;
using std::shared_ptr, std::make_shared;

class StringConverterStrategy {
private:
    map<string, shared_ptr<ShapeToStringConvert>> _container;
public:
    StringConverterStrategy();
    ~StringConverterStrategy() = default;

    /// <summary>
    /// StringConverter's constructor
    /// </summary>
    /// <param name="">Shape type</param>
    /// <param name="">Pointer points to type of converter</param>
    StringConverterStrategy(string, shared_ptr<ShapeToStringConvert>);
public:

    /// <summary>
    /// Getting the converter type
    /// </summary>
    /// <param name="">ShapeType</param>
    /// <returns>Pointer points to type of converter</returns>
    shared_ptr<ShapeToStringConvert> setStrategy(string); 
};