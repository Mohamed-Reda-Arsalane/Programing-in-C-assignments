/*
CH-230-A
a11 p5.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include "Shapes.h"

using namespace std;

//Shapes
Shape::Shape(const Shape &s)
{
    name = s.name;
}

Shape::Shape()
{

    name = "Shape";
}
Shape::Shape(const string &n) : name(n)
{
}

void Shape::printName() const
{
    cout << name << endl;
}

void Shape::setName(std::string n)
{
    name = n;
}

string Shape::getName()
{
    return name;
}

//censorShape
CenteredShape::CenteredShape() : Shape("Centered Shape")
{
    x = 0;
    y = 0;
}

CenteredShape::CenteredShape(const string &n, double nx, double ny) : Shape(n)
{
    x = nx;
    y = ny;
}
CenteredShape::CenteredShape(const CenteredShape &c)
{
    x = c.x;
    y = c.y;
}
void CenteredShape::setX(double nx)
{
    x = nx;
}
void CenteredShape::setY(double ny)
{
    y = ny;
}
double CenteredShape::getX()
{
    return x;
}
double CenteredShape::getY()
{
    return y;
}
//RegularPolygon
RegularPolygon::RegularPolygon() : CenteredShape("Regular Polygon", 0, 0)
{
    EdgesNumber = 0;
}

RegularPolygon::RegularPolygon(const string &n, double nx, double ny, int nl) : CenteredShape(n, nx, ny)
{
    EdgesNumber = nl;
}

RegularPolygon::RegularPolygon(const RegularPolygon &r)
{
    EdgesNumber = r.EdgesNumber;
}
void RegularPolygon::setEdgesNumber(int nl)
{
    EdgesNumber = nl;
}

int RegularPolygon::getEdgesNumber()
{
    return EdgesNumber;
}
//Rectangle
     
Rectangle::Rectangle() : RegularPolygon("Rectangle", 0, 0, 4)
{
    length = 0;
    width = 0;
}

Rectangle::Rectangle(const string &n, double nx, double ny, double le, double wi) : RegularPolygon(n, nx, ny, 4)
{
    length = le;
    width = wi;
}

Rectangle::Rectangle(const Rectangle &re)
{
    length = re.length;
    width = re.width;
}
//setter
void Rectangle::setWidth(double nwidth)
{
    width = nwidth;
}
void Rectangle::setLength(double nlenght)
{
    length = nlenght;
}
//getter
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::getLength()
{
    return length;
}
//Method for Area
double Rectangle::area()
{
    return width * length;
}
//Method for Perimeter
double Rectangle::perimeter()
{
    return 2 * (width + length);
}
//Square

Square::Square() : Rectangle("Square", 0, 0, 0, 0)
{
    side = 0;
}

Square::Square(const string &n, double nx, double ny, int nl, double si) : Rectangle(n, nx, ny, si, si)
{
    side = si;
}

Square::Square(const Square &sq)
{
    side = sq.side;
}

//setters
void Square::setnside(double si)
{
    side = si;
}
//getter
double Square::getnside()
{
    return side;
}
double Square::squarearea()
{
    return side * side;
}
//Method for Perimeter
double Square::squareperimeter()
{
    return 4*side;
}
//Cirle
Circle::Circle() : CenteredShape("Circle", 0, 0)
{
    Radius = 0;
}
Circle::Circle(const string &n, double nx, double ny, double r) : CenteredShape(n, nx, ny)
{
    Radius = r;
}

Circle::Circle(const Circle &v)
{
    Radius = v.Radius;
}
//setters
void Circle::setRadius(double ra)
{
    Radius = ra;
}
//getters
double Circle::getRadius()
{
    return Radius;
}
//Method for Area
double Circle::area()
{
    return M_PI * Radius * Radius;
}
//Method for Perimeter
double Circle::perimeter()
{
    return 2 * M_PI * Radius;
}