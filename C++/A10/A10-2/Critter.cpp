/*
CH-230-A
a10 p2.c
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include "Critter.h"
#include <iostream>

using namespace std;

Critter::Critter(string n, int hu, int bo, double he, int sh, int ag) { 
	name = n;
	hunger = hu;
	boredom = bo;
	height = he;
	shoesize = sh; 
	age = ag;
}


Critter::Critter() {
	
}

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setshoesize(int newshoesize) {
	shoesize = newshoesize;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl; // printing method
}

int Critter::getHunger() {
	return hunger;
}
	int Critter::getshoesize() {
	return shoesize;
}

int Critter::getage(){
	return age;
}

