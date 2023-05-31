#include "triangle.h"

int Triangle::getA() {
	return a;
}

void Triangle::setA(int a) {
	this->a = a > 0 ? a : 1;
}

int Triangle::getB() {
	return b;
}

void Triangle::setB(int b) {
	this->b = b > 0 ? b : 1;
}

double Triangle::calculatePerimeter() {
	return a + b + sqrt(a * a + b * b);
}

double Triangle::calculateSquare() {
	return a * b;
}

string Triangle::description() {
	return "This is TRIANGLE.";
}

string Triangle::draw() {
	return "Triangle is been drawing...";
}

