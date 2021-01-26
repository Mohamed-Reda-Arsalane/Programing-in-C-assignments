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
    boredom = hunger = thirst = 0;
	cout << "Constructor one is being called" << endl;
}
Critter::Critter(string newName) : name(newName){
    cout<<"Constructor two Called"<<endl;
    hunger=0;
    thirst = 0;
    boredom=0;
    height=5;
}

Critter::Critter(string newName,int newHunger,int newBoredom,double newHeight) : name(newName){ 
    cout<<"Constructor Three Called"<<endl;
    hunger=dHunger(newHunger);
    thirst = newHunger;
    boredom=newBoredom;
    height=newHeight;

}

Critter::Critter(string newName,int newHunger,int newBoredom,double newHeight, double newThirst) : name(newName){ 
    cout<<"Constructor four Called"<<endl;
    hunger=dHunger(newHunger);
    thirst = newHunger;
    boredom=newBoredom;
    height=newHeight;
    thirst = newThirst;

}

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = dHunger(newhunger);
}

void Critter::setBoredom(int newboredom){
	boredom = newboredom;
}

void Critter::setHeight(double newheight){
	height = newheight;
}

void Critter::setThirst(double newthirst){
	thirst = newthirst;
}

double Critter::dHunger(double hunger){
    return(double)(hunger/10);
}

//converting the double to int
int Critter::dHunger(){
    return (int)(hunger*10);
}

int Critter::getHunger() {
	return dHunger();
}

int Critter::getThirst() {
	return thirst;
}
void Critter::print() {
	cout << "I am " << name << endl;
   cout << "My height " << height << endl;
  cout <<"My hunger level is " << getHunger() << endl;
    cout << "My boredeom " << boredom << endl;
     cout << "My thirst " << thirst << endl;
}

