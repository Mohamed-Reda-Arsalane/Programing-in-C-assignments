#ifndef _SQUARE_H
#define _SQUARE_H
#include "Area.h"

class Square : public Area {
	public:
		Square(const char *n, double a);
		~Square();
		double calcArea() const;
		double calcPerm() const;
	private:
		double side;
	
};

#endif
