/*
CH-230-A
a11 p4.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
using namespace std;

class Creature
{
public:
    Creature();
    ~Creature();
    void run() const;

protected:
    int distance;
};

class Wizard : public Creature
{
public:
    Wizard();
    ~Wizard();
    void hover() const;

private:
    int distFactor;
};

class Walker : public Creature
{
public:
    Walker();
    ~Walker();
    void walk() const;

private:
    double distFactor;
};

class Whale : public Creature
{
public:
    Whale();
    ~Whale();
    void swim() const;

private:
    int distFactor;
};