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
  TournamentMember member;
  member.print();

	char fname0[36] = "James";
	char lname0[36] = "Lebron";
	
	char birthdate0[11] = "1987-01-03";
	TournamentMember member_0(fname0, lname0, birthdate0, 207, 102);
	member_0.print();

	TournamentMember member_1;
	char fname1[36] = "Diego";
	char lname1[36] = "Maradona";
	char location1[11] = "Argentina";
	member_1.setfname(fname1);
	member_1.setlname(lname1);
	member_1.setlocation(location1);
	member_1.setheight(162);
	member_1.setweight(70);
	member_1.print();

	TournamentMember member_2;
	char fname2[36] = "Bill";
	char lname2[36] = "Russel";
	char birthdate2[11] = "1940-01-03";
	member_1.setfname(fname2);
	member_1.setlname(lname2);
	member_1.setdateofbirth(birthdate2);
	member_1.setheight(162);
	member_1.setweight(70);
	member_1.print();

TournamentMember member_3(member_1);
member_3.print();

	return 0;
}