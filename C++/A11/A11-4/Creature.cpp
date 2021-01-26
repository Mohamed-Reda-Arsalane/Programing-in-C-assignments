/*
CH-230-A
a11 p4.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"

using namespace std;

Creature::Creature() : distance(10)
{
    cout << "Creature constructor called" << endl;
}

Creature::~Creature()
{
    cout << "Creature destructor called" << endl;
}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

Wizard::Wizard() : distFactor(3)
{
    cout << "Wizard constructor called" << endl;
}

Wizard::~Wizard()
{
    cout << "Wizard destructor called" << endl;
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Whale::Whale() : distFactor(10)
{
    cout << "Whale constructor called" << endl;
}

Whale::~Whale()
{
    cout << "Whale destructor called" << endl;
}

void Whale::swim() const
{
    cout << "swiming " << (distFactor * distance) << " meters!\n";
}

Walker::Walker() : distFactor(0.34)
{
    cout << "Walker constructor called" << endl;
}

Walker::~Walker()
{
    cout << "Walker destructor called" << endl;
}

void Walker::walk() const
{
    cout << "walking " << (distFactor * distance) << " meters!\n";
}