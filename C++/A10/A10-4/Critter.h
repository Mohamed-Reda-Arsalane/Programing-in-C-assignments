/*
CH-230-A
a10 p4.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <string> 

class Critter
{
private: //data members ARE PRIVATE

	std::string name;
	int hunger;
	int boredom;
	double height;

public:
	
	Critter();
	Critter(std::string name);
    Critter(std::string name,int hunger,int boredom,double height=10);
	
  //setter method
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHeight(double newheight);
	// getter method
	int getHunger();
	
	// service method
	void print();
};
