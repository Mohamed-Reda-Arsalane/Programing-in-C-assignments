/*
CH-230-A
a10 p4.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
   Critter a;
	a.setHunger(2); 
    a.print();

	Critter b("one");
	b.setHunger(2); 
    b.print();
	
	Critter c("two",2,4);
    c.print();

	Critter d("three",2,10,20);
	d.print();
	
    return 0;
}