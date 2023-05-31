#include "figureEditor.h"
#include "triangle.h"
#include "circle.h"


int main() {
	//Figure* f1 = new Figure();
	Triangle* triangle1 = new Triangle(3, 4);
	Circle* circle1 = new Circle(5);

	//cout << FigureEditor::get_info(f1) << endl << endl;
	cout << FigureEditor::get_info(triangle1) << endl << endl;
	cout << FigureEditor::get_info(circle1) << endl << endl;

	return 0;
}

