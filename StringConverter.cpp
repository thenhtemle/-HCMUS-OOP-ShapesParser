#include "StringConverter.h"

StringConverter::StringConverter(string type, shared_ptr<ShapeToStringConvert> converter)
{
    _prototype.insert(std::make_pair(type, converter));
}

shared_ptr<ShapeToStringConvert> StringConverter::converterType(string type)
{
    shared_ptr<ShapeToStringConvert> converter = nullptr;

    if (_prototype.contains(type))
    {
        converter = _prototype[type];
    }

    return converter;
}