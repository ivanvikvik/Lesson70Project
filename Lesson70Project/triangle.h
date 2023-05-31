#pragma once
#include "figure.h"

class Triangle : public Figure
{
private:
	int a;
	int b;
public:
	Triangle() : a(1), b(1) {}
	Triangle(int a, int b) 
		: a(a > 0 ? a : 1), b(b > 0 ? b : 1) {}

	double calculatePerimeter();
	double calculateSquare();
	string description();
	string draw();

	int getA();
	void setA(int a);
	int getB();
	void setB(int b);
};


