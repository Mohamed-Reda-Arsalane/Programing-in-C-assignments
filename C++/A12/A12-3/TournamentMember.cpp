/*
CH-230-A
a12 p2.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include "TournamentMember.h"

using namespace std;

char TournamentMember::location[36] = "bahamas";

TournamentMember::TournamentMember()
{ // empty constroctor
    strcpy(fname,"default_first_name");
    strcpy(lname,"default_last_name");
    strcpy(dateofbirth, "0000-00-00");
    height = 0;
    weight = 0;
    cout << "Empty Constructor is being called" << endl;
}

TournamentMember::TournamentMember(char ln[], char fn[], char da[], int he,int we)
{ //Constructors with all parameters
    strcpy(lname,ln);
    strcpy(fname,fn);
    strcpy(dateofbirth,da);
    height = he;
    weight = we;
    cout << "Parametric Constructor is being Called" << endl;
}

TournamentMember::TournamentMember(const TournamentMember& x){
    strcpy(lname,x.lname);
    strcpy(fname,x.fname);
    strcpy(dateofbirth,x.dateofbirth);
    height = x.height;
    weight = x.weight;
    cout << "Copy Constructor is being Called" << endl;
}

TournamentMember::~TournamentMember(){
    cout << "Destructor is being Called" << endl;
}

Player::Player() :TournamentMember(){
    number = 0;
    position = 0;
    number_goals = 0;
    strcpy(foot,"left");
    cout << "Player Empty Constructor is being called" << endl;
}

Player::Player(char ln[], char fn[], char da[], int he, int we, int n, int p, int ng, char f[]) : TournamentMember(ln,fn,da,he,we){
    number = n;
    position = p;
    number_goals = ng;
    strcpy(foot,f);
    cout << "Player Parametric Constructor is being Called" << endl;
}

Player::Player(const Player& x){
    number = x.number;
    position = x.position;
    number_goals = x.number_goals;
    strcpy(foot ,x.foot);
    cout << "Player Copy Constructor is being Called" << endl;
}

Player::~Player(){
     cout << "Player Destructor is being Called" << endl;
}