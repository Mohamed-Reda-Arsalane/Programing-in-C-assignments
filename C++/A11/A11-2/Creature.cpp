/*
CH-230-A
a11 p2.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>

using namespace std;

class Creature
{
public:
    Creature();
    ~Creature(); //destructor
    void run() const;

protected:
    int distance;
};

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

class Wizard : public Creature
{
public:
    Wizard();
    ~Wizard(); //destructor 
    void hover() const;

private:
    int distFactor;
};

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

class Walker : public Creature //new class
{
public:
    Walker(); //empty constructor
    ~Walker(); //destructor
    void walk() const;

private:
    double distFactor;
};
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

class Whale : public Creature //new class
{
public:
    Whale();
    ~Whale();
    void swim() const;

private:
    int distFactor;
};
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