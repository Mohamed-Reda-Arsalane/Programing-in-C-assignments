/*
CH-230-A
a11 p4.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{

    string name;

    while (1) // endless loop
    {
        getline(cin, name); 
        if (name == "wisard")
        {

            cout << "\nCreating a Wizard.\n";
            Wizard *wi = new Wizard; //dynamic allocation
            wi->run();
            wi->hover();
            delete wi;
            cout << endl;
        }
        else if (name == "whale")
        {

            cout << "\nCreating a Whale.\n";
            Whale *wh = new Whale;//dynamic allocation
            wh->run();
            wh->swim();
            delete wh;
            cout << endl;
        }
        else if (name == "walker")
        {

            cout << "\nCreating a Walker.\n";
            Walker *wa = new Walker;//dynamic allocation
            wa->run();
            wa->walk();
            delete wa;
            cout << endl;
        }

        else if (name == "quit") // breaks if "quit" entered
        {
            break;
        }
    }

    return 0;
}