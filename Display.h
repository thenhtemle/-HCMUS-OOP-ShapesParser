#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include <iomanip>

#include "Shape.h"

using std::left, std::setprecision, std::setw, std::fixed;
using std::cout, std::endl;
using std::shared_ptr;

// Apply Startegy Design Pattern for Display Shape
class DisplayStrategy {
public:
    virtual void display(vector<shared_ptr<Shape>> shapes) = 0;
};

/// <summary>
/// In thong tin la cac thuoc tinh co ban cua tung loai hinh
/// </summary>
class DisplayBasicInfor : public DisplayStrategy {
public:
    void display(vector<shared_ptr<Shape>> shapes);
};

/// <summary>
/// In thong tin la cac thuoc tinh co ban , chu vi , dien tich cua tung loai hinh
/// </summary>
class DisplayFullInfor : public DisplayStrategy {
public:
    void display(vector<shared_ptr<Shape>> shapes);
};

class DisplayListShape {
private:
    shared_ptr<DisplayStrategy> _displayShapes;
public:
    /// <summary>
    /// Goi loai display tuong ung
    /// </summary>
    /// <param name="dpShape">Kieu display tuong ung</param>
    DisplayListShape(shared_ptr<DisplayStrategy> dpShape);

    /// <summary>
    /// Gan kieu display tuong ung
    /// </summary>
    /// <param name="dpShape">Kieu display tuong ung</param>
    void setTypeDisplay(shared_ptr<DisplayStrategy>dpShape);

    /// <summary>
    /// bieu dien phuong thuc display
    /// </summary>
    /// <param name="shapes">danh sach cac hinh </param>
    void performTypeOfDisplay(vector<shared_ptr<Shape>> shapes);

};