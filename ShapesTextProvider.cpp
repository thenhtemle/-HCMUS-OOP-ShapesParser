#include "ShapesTextProvider.h"
#include "Exception.h"

tuple<int, vector<shared_ptr<Shape>>> ShapesTextProvider::next() {
	std::ifstream f;
	f.open(filename, std::ios::in);

	if (!f.is_open()) {
		std::cout << "Cannot open file!!" << std::endl;
		return { 0, {} };
	}
	
	vector<shared_ptr<Shape>> shapes;
	string tmp;
	getline(f, tmp);
	int expectedNumber = stoi(tmp);

	const auto& factory = ParserFactory::getInstance();

	
	while (getline(f, tmp)) {
		std::stringstream ss(tmp);
		string info;
		getline(ss, info, ':');

		auto shapeParser = factory->select(info);
		if (shapeParser == 0) continue;

		getline(ss, info);
		try {
			auto shape = shapeParser->parser(info);
			shapes.push_back(shape);
		}
		catch (Exception* ex)
		{
			delete ex;
		}
	}

	return { expectedNumber, shapes };
}
