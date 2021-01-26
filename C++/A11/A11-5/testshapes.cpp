/*
CH-230-A
a11 p5.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

using namespace std;

int main(int argc, char **argv)
{

    Circle c;
  c.setName("A circle");
  c.setRadius(4);
  cout << c.getName() << endl;
  cout << "area: " << c.area() << endl;
  cout << "perimeter: " << c.perimeter() << endl;

    Rectangle re;
  re.setName("A rectangle");
  re.setLength(3);
  re.setWidth(6);
  cout << re.getName() << endl;
  cout << "area: " << re.area() << endl;
  cout << "perimeter: " << re.perimeter() << endl;
    Square s;
s.setName("A square");
  s.setnside(5);
  cout << s.getName() << endl;
  cout << "area: " << s.squarearea() << endl;
  cout << "perimeter: " << s.squareperimeter() << endl;

    return 0;     
}