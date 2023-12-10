#include "StringConverterStrategy.h"


StringConverterStrategy::StringConverterStrategy() 
{
    _container = {
        {"Circle", make_shared<CircleToStringConvert>()},
        {"Square" , make_shared<SquareToStringConvert>()},
        {"Rectangle", make_shared<RectangleToStringConvert>()},
    };
}

StringConverterStrategy::StringConverterStrategy(string type, shared_ptr<ShapeToStringConvert> converter)
{
    _container.insert(std::make_pair(type, converter));
}

shared_ptr<ShapeToStringConvert> StringConverterStrategy::setStrategy(string type)
{
    shared_ptr<ShapeToStringConvert> converter = nullptr;

    if (_container.contains(type))
    {
        converter = _container[type];
    }

    return converter;
}