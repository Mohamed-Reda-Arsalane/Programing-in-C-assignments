/*
CH-230-A
a11 p5.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape
{                     // base class
private:              // private access modifier: could also be protected
    std::string name; // every shape will have a name
public:
    Shape(const std::string &); // builds a shape with a name
    Shape();                    // empty shape
    Shape(const Shape &);       // copy constructor
    void printName() const;     // prints the name
                                //setter
    void setName(std::string n);
    //getter
    std::string getName();
};

class CenteredShape : public Shape
{ // inherits from Shape
private:
    double x, y; // the center of the shape
public:
    CenteredShape(const std::string &, double, double); // usual three constructors
    CenteredShape();
    CenteredShape(const CenteredShape &);
    void move(double, double); // moves the shape, i.e. it modifies it center
                               //setter
    void setX(double nx);
    void setY(double ny);
    //getters
    double getX();
    double getY();
};

class RegularPolygon : public CenteredShape
{ // a regular polygon is a centered_shape with a number of edges
private:
    int EdgesNumber;

public:
    RegularPolygon(const std::string &, double, double, int);
    RegularPolygon();
    RegularPolygon(const RegularPolygon &);
    //setter
    void setEdgesNumber(int nl);
    //getter
    int getEdgesNumber();
};

class Rectangle : public RegularPolygon
{ // a rectangle is a centered_shape with 4 edges and different lenght width
private:
    double length, width;

public:
    Rectangle(const std::string &, double, double, double, double);
    Rectangle();
    Rectangle(const Rectangle &);
    //setters
    void setWidth(double nwidth);
    void setLength(double nlenght);
    //getters
    double getWidth();
    double getLength();

    //Service Methods
    double area();
    double perimeter();
};

class Square : public Rectangle
{ // a rectangle where lenght = width
private:
    double side;

public:
    Square(const std::string &, double, double, int, double);
    Square();
    Square(const Square &);
    //setters
    void setnside(double si);
    //getter
    double getnside();
    double squarearea();
    double squareperimeter();
};

class Circle : public CenteredShape
{ // a Circle is a shape with a center and a radius
private:
    double Radius;

public:
    Circle(const std::string &, double, double, double);
    Circle();
    Circle(const Circle &);
    //setter
    void setRadius(double ra);
    //getter
    double getRadius();
    double area();
    double perimeter();
};

#endif