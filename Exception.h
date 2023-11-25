#pragma once

#include <exception>
#include <sstream>
#include <string>

#include <memory>

using std::string, std::stringstream;
using std::endl;


class Exception
{
protected:
	string _message;

public:
	Exception(string message);
	virtual ~Exception() = default;

	virtual string what() const noexcept;
};


class EmptyData : public Exception {
public:
	EmptyData(string message) : Exception(message) {};
	~EmptyData() = default;

	string what() const noexcept;
};


class IncorrectFormat : public Exception {
public:
	IncorrectFormat(string message) : Exception(message) {};
	~IncorrectFormat() = default;

	string what() const noexcept;
};


class InvalidDataRange : public Exception {
public:
	InvalidDataRange(string message) : Exception(message) {};
	~InvalidDataRange() = default;

	string what() const noexcept;
};