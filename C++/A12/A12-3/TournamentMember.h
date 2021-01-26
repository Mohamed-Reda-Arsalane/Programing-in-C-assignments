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
	inline void setlname(char newlname[]) { strcpy(lname, newlname); };
	inline void setfname(char newfname[]) { strcpy(fname, newfname); };

	inline void setheight(int newheight) { height = newheight; };
	inline void setweight(int newweight) { weight = newweight; };
	inline void setdateofbirth(char newbirthdate[]) { strcpy(dateofbirth, newbirthdate); };
	inline static void setlocation(char newlocation[])
	{
		strcpy(location, newlocation);
	}
	// getter method
	inline int getheight() { return height; };
	inline int getweight() { return weight; };
	inline char *getlname() { return lname; };
	inline char *getfname() { return fname; };
	inline char *getlocation() { return location; };

	// service method
	inline void print()
	{
		std ::cout << std ::endl
				   << "First name: " << fname << std ::endl
				   << "Last name " << lname
				   << std ::endl
				   << "date of birth: " << dateofbirth << std ::endl
				   << "location :" << location << std ::endl
				   << "height: " << height << std ::endl
				   << "weight: " << weight << std ::endl
				   << std ::endl;
	};
};

class Player : public TournamentMember
{
private:
	int number;
	int position;
	int number_goals;
	char foot[11];

public:
	Player();
	Player(const Player &);
	Player(char[], char[], char[], int, int, int, int, int, char[]);
	~Player();
	//setter method
	inline void setnumber(int newnumber) { number = newnumber; };
	inline void setposition(char newposition) { position = newposition; };
	inline void setnumber_goals(int newnumber_goals) { number_goals = newnumber_goals; };
	inline void setplus1() { number_goals = number_goals + 1; };
	inline void setfoot(char newfoot[]) { strcpy(foot, newfoot); };
	// getter method
	inline int getnumber() { return number; };
	inline int getposition() { return position; };
	inline int getnumber_goals() { return number_goals; };
	inline char *getfoot() { return foot; };

	inline void pprint()
	{
		std ::cout << "Number: " << number << std ::endl
				   << "Position:  " << position
				   << std ::endl
				   << "Number of goals: " << number_goals << std ::endl
				   << "Power foot:" << foot << std ::endl
				   << std ::endl;
	};
};