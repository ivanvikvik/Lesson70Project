#pragma once
#include "main.h"

class Figure
{
public:
	virtual double calculatePerimeter();
	virtual double calculateSquare();
	virtual string description();
	virtual string draw() = 0;
};

