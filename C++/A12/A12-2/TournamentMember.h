/*
CH-230-A
a12 p2.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>
#include <cstring>

class TournamentMember
{
private: //data members are private

	char lname[36];
	char fname[36];
	char dateofbirth[11];
	static char location[36];
	int height;
	int weight;

public:
	TournamentMember();
	TournamentMember(const TournamentMember &);
	TournamentMember(char ln[], char fn[], char da[], int he, int we);
   ~TournamentMember();

	//setter method
	inline void setlname(char newlname[]) { strcpy(lname,newlname); };
	inline void setfname(char newfname[]) { strcpy(fname,newfname); };
	inline static void setlocation(char newlocation[]) { strcpy(location, newlocation); };
	inline void setheight(int newheight) { height = newheight; };
	inline void setweight(int newweight) { weight = newweight; };
	inline void setdateofbirth(char newbirthdate[]) { strcpy(dateofbirth,newbirthdate); };

	// getter method
	inline int getheight() { return height; };
	inline int getweight() { return weight; };
	inline char *getlname() { return lname; };
	inline char *getfname() { return fname; };
	inline char *getlocation() { return location; };

	// service method
	inline void print()
	{
		std ::cout << "First name: " << fname << std ::endl
				   << "Last name " << lname
				   << std ::endl
				   << "date of birth: " << dateofbirth << std ::endl
				   << "location :" << location << std ::endl
				   << "height: " << height << std ::endl
				   << "weight: " << weight << std ::endl<< std ::endl;
	};
};
