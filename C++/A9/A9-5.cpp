/*
CH-230-A
a9 p5.c
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>
# include <cstdlib>
# include <ctime>
using namespace std;

int rando () { //function to get a ranndom number
 int die ;
 int count = 0;
 int randomNumber ;

 srand ( static_cast < unsigned int >( time (0) ) );
 while ( count < 10) {
 count ++;
 randomNumber = rand () ;
 die = ( randomNumber % 100) + 1; //between 100
 }
 return die;
 }


int main(int argc, char **argv){
    string name;
    int guess;
     cout << "enter your name: ";
    getline(cin,name);
    int randomNumber = rando(); //calling the function
    while (1)
    {
    cin >> guess;
    if (guess == randomNumber)// if the palyer guessed correctly
    {
        cout << "You have guessed correctly" << endl;
        return 0;
    }
    else if (guess < randomNumber) 
    {
        cout << "too low" << endl;
    }
    else if (guess > randomNumber)
    {
        cout << "too high";
    }
    
    
    }
    return 0;
    
}