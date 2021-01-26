#include <string> 

class Critter
{
private: // Private data members 

	std::string name;
	double hunger;
	int boredom;
	double height;
	double thirst; //adding thirst

    double dHunger(double hunger);
    int dHunger();

public:
	
	Critter();
	Critter(std::string name);
    Critter(std::string name,int hunger,int boredom, double height=10);
	Critter(std::string name,int hunger,int boredom, double height, double thirst); // adding constroctor with 5 parametres
  //setter method
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHeight(double newheight);
	void setThirst(double newthirst);
	// getter method
	int getHunger();
	int getThirst();
	
	// service method
	void print();
};
