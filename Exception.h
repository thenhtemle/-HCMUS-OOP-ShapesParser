#pragma once

#include <exception>
#include <sstream>
#include <string>
#include "Windows.h"
#include <memory>

using std::string, std::stringstream;
using std::endl;


class EmptyData {
private:
	string _message;

public:
	EmptyData(string message) : _message(message) {};
	~EmptyData() = default;

	string what() const throw();
};


class IncorrectFormat {
private:
	string _message;

public:
	IncorrectFormat(string message) : _message(message) {};
	~IncorrectFormat() = default;

	string what() const throw();
};


class InvalidDataRange {
private:
	string _message;

public:
	InvalidDataRange(string message) : _message(message) {};
	~InvalidDataRange() = default;

	string what() const throw();
};