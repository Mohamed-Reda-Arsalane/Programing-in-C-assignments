/*
CH-230-A
a10 p5.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;



Critter ::Critter(){  
	name = "default_critter";
    height = 5;
    boredom = hunger = 0;
	cout << "Constructor one is being called" << endl;
}
Critter::Critter(string newName) : name(newName){
    cout<<"Constructor two Called"<<endl;
    hunger=0;
    boredom=0;
    height=5;
}

Critter::Critter(string newName,int newHunger,int newBoredom,double newHeight) : name(newName){ 
    cout<<"Constructor Three Called"<<endl;
    hunger=dHunger(newHunger); //calling the method
    boredom=newBoredom;
    height=newHeight;

}
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = dHunger(newhunger); //calling the method
}

void Critter::setBoredom(int newboredom){
	boredom = newboredom;
}

void Critter::setHeight(double newheight){
	height = newheight;
}

double Critter::dHunger(double hunger){ // converting 
    return(double)(hunger/10);
}

//converting the double to int
int Critter::dHunger(){ // back to int
    return (int)(hunger*10);
}

int Critter::getHunger() {
	return dHunger(); // return the int value
}

void Critter::print() {
	cout << "I am " << name << endl;
   cout << "My height " << height << endl;
  cout <<"My hunger level is " << getHunger() << endl; // printing the int value
    cout << "My boredeom " << boredom << endl;
}

