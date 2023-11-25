#include "ShapesList.h"

using std::fixed, std::setprecision;
using std::cout;

ShapesList::ShapesList(vector<shared_ptr<Shape>> shapes, StringConverter converter)
{
    _shapes = shapes;
    _converter = converter;
}

void ShapesList::printShapeWithAttribute()
{
    for (int i = 0; i < _shapes.size(); i++)
    {
        shared_ptr<ShapeToStringConvert> converter = _converter.converterType(_shapes[i]->getShapeType());
        if (converter == nullptr)
            continue;
        cout << i + 1 << ". " << converter->convertData(_shapes[i]) << "\n";
    }
} 

void ShapesList::sortArea()
{
    if (_shapes.size() == 0) return;

    for (int i = 0; i < _shapes.size() - 1; i++)
    {
        for (int j = i + 1; j < _shapes.size(); j++)
        {
            if (_shapes[j]->area() < _shapes[i]->area())
            {
                swap(_shapes[j], _shapes[i]);
            }
        }
    }
}

void ShapesList::printShapeWithCalculated()
{
    for (int i = 0; i < _shapes.size(); i++)
    {
        cout << "| " << i + 1 << " | ";
        shared_ptr<ShapeToStringConvert> converter = _converter.converterType(_shapes[i]->getShapeType());

        if (converter == nullptr)
            continue;

        string info = converter->convertDataCalculated(_shapes[i]);
        cout << info << "\n";
    }
}