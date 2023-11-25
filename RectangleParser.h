#pragma once

#include <memory>
#include <regex>

#include "Parser.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Exception.h"

using std::shared_ptr, std::make_shared, std::regex;

class RectangleParser : public Parser {
private:
    inline static shared_ptr<RectangleParser> _instance = 0;
    RectangleParser() = default;
public:
	/// <summary>
	/// Delete the copy func
	/// </summary>
	/// <param name="">CircleParser</param>
	RectangleParser(const RectangleParser&) = delete;

	/// <summary>
	/// Delete the copy func
	/// </summary>
	/// <param name="">CircleParser</param>
	void operator=(const RectangleParser&) = delete;

	/// <summary>
	/// Singleton
	/// </summary>
	/// <returns>Getting instance</returns>
	static shared_ptr<RectangleParser> getInstance() {
		if (_instance == 0) {
			_instance.reset(new RectangleParser());
		}
		return _instance;
	}

    /// <summary>
    /// Parsing rectangle
    /// </summary>
    /// <param name="">The given string line</param>
    /// <returns>Pointer pointing to the rectangle parsing</returns>
    shared_ptr<Shape> parser(string) override;
};