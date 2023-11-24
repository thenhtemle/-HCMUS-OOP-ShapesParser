#include "Exception.h"

string EmptyData::what() const throw()
{
    stringstream builder;
    builder << "[!] No Data Exception." << endl;
    builder << "\t+ Exception cause when parsing string to shape" << endl;
    builder << "\t+ Detail: [" << string(_message) << "]" << endl;

    return builder.str();
}


string IncorrectFormat::what() const throw()
{
    stringstream builder;
    builder << "[!] Incorrect format." << endl;
    builder << "\t+ Exception cause when parsing string to shape" << endl;
    builder << "\t+ Detail: [" << string(_message) << "]" << endl;

    return builder.str();
}

string InvalidDataRange::what() const throw()
{
    stringstream builder;
    builder << "[!] Invalid data range." << endl;
    builder << "\t+ Exception cause when parsing string to shape" << endl;
    builder << "\t+ Detail: [" << string(_message) << "]" << endl;
    builder << "\t+ Expected greater than zero value." << endl;

    return builder.str();
}