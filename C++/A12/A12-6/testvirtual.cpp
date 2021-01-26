#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 
const int num_obj = 7;
int main() {
	Area *list[num_obj];						// (1) Creating a list of instances of the class Area or derived classes it is empty now.
	int index = 0;								// (2) declaring a variable of type integer equal to zero to use as index for the list of instances
	double sum_area = 0.0;	
	double sum_Perm = 0.0;						// (3) declaring a double variable and setting it to zero to calculate later the total area of all the shapes in the list
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)Creating an instance of class Ring
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout << "Creating Square: ";
	Square  magenta_square("Magenta", 10);
	list[0] = &blue_ring;						// (5) setting the instance bleu_ring as the first instance in the list
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &magenta_square;
	while (index < num_obj) {					// (7) while loop that stops when index is equal or greater than 6 which is the number of elements in the list
		(list[index])->getColor();				
		double area = list[index++]->calcArea();// (8) delclaring a double variable that will equal the area of the element in position index + 1
		sum_area += area;
		

	}
  	cout <<endl;
  	cout << "\nThe total area is " // (9) Printing the sum of all areas
  << sum_area << " units " << endl;
  
  index = 0;
while (index < num_obj) {				
		(list[index])->getColor();	
     double Perm = list[index++]->calcPerm();			
		sum_Perm += Perm;

	}
 
  cout <<endl;	


  cout << "\nThe total perimeter is "
  << sum_Perm << " units " << endl;	
	return 0;
}


/*                                  +---------------------+                                                                   
                                    |                     |                                                                   
                                    |        AREA         |                                                                   
                                    |                     |                                                                   
                                    |                     |                                                                   
                                    +-----^----^-----^----+                                                                   
                                          |    |     |                                                                        
            ^-----------------------------+    |     |                                                                        
            |                                  |     +---------------------------------^                                      
            |                                  |                                       |                                      
+-----------------------+                      |                             +---------------------+                          
|                       |                      |                             |                     |                          
|                       |                      |                             |      Rectangle      |                          
|        CIRCLE         |                      |                             |                    ^|                          
|                       |                      |                             |                     |                          
|                       |                      |                             +---------------------+                          
+-----------^-----------+                      |                                                                              
            |                     +-------------------------+                                                                
            |                     |                         |                                                                 
            |                     |         Square          |                                                                 
            |                     |                         |                                                                 
            |                     |                         |                                                                
+-------------------------+       +-------------------------+                                                                 
|                         |                                                                                                   
|                         |                                                                                                   
|          RING           |                                                                                                   
|                         |                                                                                                   
|                         |                                                                                                   
+-------------------------+                                                                                                                                                          
*/