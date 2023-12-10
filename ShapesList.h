#pragma once

#include <iostream>
#include <memory>
#include <iomanip>

#include "Shape.h"
#include "StringConverterStrategy.h"

class ShapesList {
private:
    /// <summary>
    /// Storing shapes
    /// </summary>
    vector<shared_ptr<Shape>> _shapes;

    /// <summary>
    /// Strategy convert
    /// </summary>
    StringConverterStrategy _strategy;
public:
    ShapesList() = default;

    /// <summary>
    /// Constructor with vector of pointers and StringConvert given 
    /// </summary>
    /// <param name="">Vector of pointers pointing to shapes</param>
    /// <param name="">StringConverter</param>
    ShapesList(vector<shared_ptr<Shape>>&, StringConverterStrategy&);

    /// <summary>
    /// Print list of shapes with attributes
    /// </summary>
    void printShapeWithAttribute();

    /// <summary>
    /// Sorting the shapes based on the areas (Bubble Sort)
    /// </summary>
    void sortArea();

    /// <summary>
    /// Print list of shapes with attributes, perimeter and area 
    /// </summary>
    void printShapeWithCalculated(); 
};