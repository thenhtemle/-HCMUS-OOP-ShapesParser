#include "ShapesParser.h"

int main() {
	ShapesTextProvider provider;
	auto [expectedNum, shapes] = provider.next();

	StringConverterStrategy strategy;
	ShapesList list(shapes, strategy);

	cout << "Reading " << filename << "..." << endl;
	cout << "Find " << shapes.size() << "/" << expectedNum << " shape(s)" << endl;

	list.printShapeWithAttribute();
	cout << "\n";

	list.printShapeWithCalculated();
}