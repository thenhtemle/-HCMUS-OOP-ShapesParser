#include "ShapesParser.h"

int main() {
	ShapesTextProvider provider;
	auto [expectedNum, shapes] = provider.next();

	cout << "Reading " << filename << "..." << endl;
	cout << "Find " << shapes.size() << "/" << expectedNum << " shape(s)" << endl;
	
    DisplayListShape displayShapes(make_shared<DisplayBasicInfor>());
    displayShapes.performTypeOfDisplay(shapes);

    // Sort the shape base on area
    sort(shapes.begin(), shapes.end(), [](const shared_ptr<Shape>a, const shared_ptr<Shape> b) {
        return a->area() < b->area();
        });

    displayShapes.setTypeDisplay(make_shared<DisplayFullInfor>());
    displayShapes.performTypeOfDisplay(shapes);
}