#pragma once
#include "figure.h"

class Circle :
    public Figure
{
private:
    int radius;
public:
    Circle(): radius(1){}
    Circle(int radius) : radius(radius > 0 ? radius : 1) {}

    int getRadius();
    void setRadius(int radius);

    double calculatePerimeter();
    double calculateSquare();
    string description();
    string draw();
};

