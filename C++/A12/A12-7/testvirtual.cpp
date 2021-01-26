
 #include <iostream>
 #include <cstdlib>
    #include <ctime>

        
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 

int main() {
srand(static_cast <unsigned int> (time(0)));
const char *colors[4]= {"RED", "BLACK", "VIOLET", "BLUE"};
Area *list[25];
int index = 0;				
	double sum_area = 0.0;	
	double sum_Perm = 0.0;					

	
  while (index < 25) 
  {
	int randNum1 = rand()%(4) + 0;
	int randNum2 = rand()%(96) + 5;
	int randNum3 = rand()%(96) + 5;
	int randNum4 = rand()%(4) + 0;
	if (randNum1 == 0)
	{
		
		list[index] = new Circle (colors[randNum4],randNum2);
    
	}
	else if (randNum1 == 1)
	{
list[index] = new Ring (colors[randNum4],randNum2,randNum3);
	}
	else if (randNum1 == 2)
	{
		list[index] = new Rectangle (colors[randNum4],randNum2, randNum3);
	}
	else if (randNum1 == 3)
	{
		list[index] = new Square (colors[randNum4],randNum3);
	}
	index++;
  cout<<"Object number: "<<index<<endl;
  cout<<"Area: "<<list[index-1]->calcArea()<<endl;
  cout<<"Perimeter: "<<list[index-1]->calcPerm()<<endl<<endl;
  }
  

	return 0;
}
