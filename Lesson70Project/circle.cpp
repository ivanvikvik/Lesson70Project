#include "circle.h"


int Circle::getRadius() {
	return radius;
}

void Circle::setRadius(int radius) {
	this->radius = radius > 0 ? radius : 1;
}

double Circle::calculatePerimeter() {
	return radius * 2 * 3.1416;
}

double Circle::calculateSquare() {
	return radius * radius * 3.1416;
}

string Circle::description() {
	return "This is CIRCLE.";
}

string Circle::draw() {
	return "Circle is been drawing...";
}