#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	std::cout << "calcArea of Rectangle...";
	return length*width;
}

double Rectangle::calcPerm() const {
	std::cout << "calcPerm of Rectangle...";
	return 2*length + 2*width;
}

