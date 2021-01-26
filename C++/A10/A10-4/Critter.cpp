/*
CH-230-A
a10 p4.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;


Critter::Critter(){  // empty constroctor
	name = "default_critter";
    height = 5;
    boredom = hunger = 0;
	cout << "Constructor one is being called" << endl;
}
Critter::Critter(string newName) : name(newName){ //second constroctor
    cout<<"Constructor two Called"<<endl;
    hunger=0;
    boredom=0;
    height=5;
}

Critter::Critter(string newName,int newHunger,int newBoredom,double newHeight) : name(newName){ //Constructors with all parameters
    cout<<"Constructor Three Called"<<endl;
    hunger=newHunger;
    boredom=newBoredom;
    height=newHeight;

}

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setBoredom(int newboredom){
	boredom = newboredom;
}

void Critter::setHeight(double newheight){
	height = newheight;
}

void Critter::print() {  // PRINTING METHOD
	cout << "I am " << name << endl;
   cout << "My height " << height << endl;
  cout <<"My hunger level is " << hunger << endl;
    cout << "My boredeom " << boredom << endl;
}

int Critter::getHunger() {
	return hunger;
}