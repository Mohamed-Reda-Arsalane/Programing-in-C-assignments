/*
CH-230-A
a11 p2.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard wi;
    wi.run();
    wi.hover();

    cout << "\nCreating a Walker.\n";
    Walker wa;
    wa.run();
    wa.walk();

    cout << "\nCreating a Whale.\n";
    Whale wh;
    wh.run();
    wh.swim();

    cout << endl;

    return 0;
}