#include <iostream>
#include "Square.h"

Square::Square(const char *n, double s) : Area(n) {
    side = s;
}

Square::~Square() {
}

double Square::calcArea() const {
	std::cout << "calcArea of Square...";
	return side*side;
}

double Square::calcPerm() const {
	std::cout << "calcPerm of Rectangle...";
	return 4*side;
}

