/*
CH-230-A
a9 p3.c
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>

using namespace std;

float absv(float x){ 
    if (x>0) // if the number is positive return it
    {
    return x;
    }
    else //if not return - that numben
    {
        return -x;
    }
}

int main(void)
{
   float x;
   cin >> x;
cout << absv(x)<< endl;
   return 0;
}