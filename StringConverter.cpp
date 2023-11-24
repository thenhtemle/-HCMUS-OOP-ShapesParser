#include "StringConverter.h"

StringConverter::StringConverter(string type, shared_ptr<ShapeToStringConvert> converter)
{
    _prototype = { type, converter };
}

shared_ptr<ShapeToStringConvert> StringConverter::converterType(string type)
{
    shared_ptr<ShapeToStringConvert> converter = nullptr;

    if (type == std::get<0>(_prototype))
    {
        converter = std::get<1>(_prototype);
    }

    return converter;
}