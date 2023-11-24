#pragma once

#include <iostream>
#include <tuple>
#include <string>
#include <memory>

#include "ShapeToStringConvert.h"

using std::string, std::tuple, std::shared_ptr;

class StringConverter {
private:
    tuple<string, shared_ptr<ShapeToStringConvert>> _prototype;
public:
    StringConverter() = default;
    ~StringConverter() = default;

    /// <summary>
    /// StringConverter's constructor
    /// </summary>
    /// <param name="">Shape type</param>
    /// <param name="">Pointer points to type of converter</param>
    StringConverter(string, shared_ptr<ShapeToStringConvert>); 
public:

    /// <summary>
    /// Getting the converter type
    /// </summary>
    /// <param name="">ShapeType</param>
    /// <returns>Pointer points to type of converter</returns>
    shared_ptr<ShapeToStringConvert> converterType(string); 
};