#include "ParserFactory.h"

ParserFactory::ParserFactory(string type, shared_ptr<Parser> parser)
{
    _prototype = { type, parser };
} 

shared_ptr<Parser> ParserFactory::select(string type)
{
    shared_ptr<Parser> parser = nullptr;

    if (type == std::get<0>(_prototype))
    {
        parser = std::get<1>(_prototype);
    }

    return parser;
}