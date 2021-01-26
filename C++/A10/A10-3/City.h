/*
CH-230-A
a10 p3.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <string> 
class city // city class
{
private: // data members are private
	std::string name;
    std::string mayor;
	int n;
	double area;

public: 
	// constructors
	city(std::string, std::string, int n, double area);
	city();
	// setter methods
	void setname(std::string& newname);
    void setmayor(std::string& newmayor);
	void setn(int newn);
	void setarea(double newarea);
	// getter method
	std::string getname();
	std::string getmayor();
	int getn();
    double getarea();
	// service method
	void print();
};