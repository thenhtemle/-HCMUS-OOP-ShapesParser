#include "ShapesParser.h"

int main() {
	ShapesTextProvider provider;
	auto [expectedNum, shapes] = provider.next();

	StringConverter converter;
	ShapesList list(shapes, converter);

	cout << "Reading " << filename << "..." << endl;
	cout << "Find " << shapes.size() << "/" << expectedNum << " shape(s)" << endl;

	list.printShapeWithAttribute();

}