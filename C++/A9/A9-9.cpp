/*
CH-230-A
a9 p9.c
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>
# include <cstdlib>
# include <ctime>
using namespace std;

int rando () { //function to get a random number smaller than 17
 int die ;
 int count = 0;
 int randomNumber ;

 srand ( static_cast < unsigned int >( time (0) ) );
 while ( count < 10) {
 count ++;
 randomNumber = rand () ;
 die = ( randomNumber % 17) + 1;
 }
 return die;
 }

string under(string arr){ // function to compare a string and replace each vowels by underscore
    string allvowels = "aouei";
    for (int i = 0; arr[i] != '\0'; i++){
        for (int j = 0; j < 5 ; j++){
            if (arr[i] == allvowels[j]){
                arr[i] = '_';
            }
        }
    }
    return arr;
}
int main(){
 string* wordslist = new string[17]; // the list of words
 string guess; //the guess from the palyer
 string toquit;
 int count;
 wordslist[0] = "computer"; 
 wordslist[1] = "television";
wordslist[2] = "keyboard";
wordslist[3] = "laptop"; 
wordslist[4] ="mouse";
wordslist[5] = "blue";
wordslist[6] = "red";
wordslist[7] = "orange";
wordslist[8] = "yellow"; 
wordslist[9] ="black";
wordslist[10] = "white"; 
wordslist[11] ="brown";
wordslist[12] = "purple";
wordslist[13] = "royal";
wordslist[14] = "silver"; 
wordslist[15] = "gold";
wordslist[16] ="marine";

while(1){
count = 0; //count = 0 inside the while loop if the player plays more than once
int randomnumber = rando(); //calling the random function
cout<<under(wordslist[randomnumber])<<endl;
while (wordslist[randomnumber] != guess){
            cin>>guess;
            count++;
            
        }
        cout<<"You have guessed correctly, it took you ";
        cout<<count;
        cout<<" tries"<<endl;
        cout<<"Enter ""quit"" to end: ";
cin >> toquit;
if (toquit.compare("quit") == 0) // comparing the string entered with quit
    break;
}
return 0;
}

