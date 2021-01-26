/*
CH-230-A
a9 p4.c
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>
#include <algorithm>
using namespace std;

int mycount (int a, int b){// function that returns the difference
    return b-a;
}
int mycount(char a, string b){
    int n = count(b.begin(), b.end(), a); // finds the number of occurance of the char in the string
    return n;
}

int main(){
cout << mycount(7,3) << endl;
cout << mycount('i', "this is a string");
return 0;
}