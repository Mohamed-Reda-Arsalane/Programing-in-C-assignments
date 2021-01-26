/*
CH-230-A
a12 p2.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "TournamentMember.h"

using namespace std;

int main(int argc, char **argv)
{
	Player member;
	member.print();
	member.pprint();

	char fname0[36] = "kaka";
	char lname0[36] = "Rebbec";
	char birthdate0[11] = "1987-01-03";
	char foot0[11] = "left";

	Player member_0(fname0, lname0, birthdate0, 207, 102, 3, 4, 5, foot0);
	member_0.print();
	member.pprint();

	Player member_1;
	char fname1[36] = "Diego";
	char lname1[36] = "Maradona";
	char location1[11] = "Argentina";
	char foot1[11] = "Right";
	member_1.setfname(fname1);
	member_1.setlname(lname1);
	member_1.setlocation(location1);
	member_1.setheight(162);
	member_1.setweight(70);
	member_1.setnumber(4);
	member_1.setposition(10);
	member_1.setnumber_goals(6);
	member_1.setfoot(foot1);
	member_1.print();
	member_1.pprint();

	char newloc[36] = "Hamburg";
	Player::setlocation(newloc);
	member.print();
	member.pprint();
	member_0.print();
	member_0.pprint();
	member_1.print();
	member_1.pprint();
	return 0;
}