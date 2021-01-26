/*
CH-230-
a10 p3.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include "City.h"
#include <iostream>

using namespace std;

city::city(string n, string m, int nn, double ar) {
	name = n;
	mayor = m;
    n = nn;
    area = ar;
}

city::city() {// empty constructor
}

void city::setname(string& newname) {
	name = newname;
}

void city::setmayor(string& newmayor) {
	mayor = newmayor;
}

void city::setn(int newn) {
	n = newn;
}

void city::setarea(double newarea) {
	area = newarea;
}

void city::print() { // printing method
	cout << "city: " << name << " " << "mayor: " << mayor << " " << " " << "number of inhabitants : " << n << " " << "area : " << area << " " << endl;
}

std::string city::getname() {
	return name;
}
std::string city::getmayor() {
	return mayor;
}

	int city::getn() {
	return n;
}

double city::getarea(){
	return area;
}
									

