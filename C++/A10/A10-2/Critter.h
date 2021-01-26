/*
CH-230-A
a10 p2.c
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <string> 
class Critter
{
private:  // data  private
	std::string name;
	int hunger;
	int boredom;
	double height;
	int shoesize; // new data
	int age; // new data

public: 
	// constructors
	Critter(std::string, int hunger, int boredom, double height, int shoesize, int age); // adding the new data 
	Critter();
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setshoesize(int newshoesize);
	void setage(int newage);
	// getter method
	int getHunger();
	int getshoesize();
	int getage();
	

	void print();
};