#ifndef RECTANGLE1_H
#define RECTANGLE1_H

#include <iostream>
#include "Shape.h"

using namespace std;

class Rectangle1 : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle1(double length, double width)
    {
        this->length = length;
        this->width = width;
    }

    double calculateArea() override
    {
        return length * width;
    }
};

#endif
