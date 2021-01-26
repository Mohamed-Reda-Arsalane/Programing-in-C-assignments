
#include <iostream>
#include "Box.h"

using namespace std;

int main(int arc, char **argv)
{

    int n;
    double height;
    double width;
    double depth;

    cout << "The number of Boxes " << endl;
    cin >> n;
    Box *box = new Box[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Box " << (i + 1) << " :" << endl;

        cout << "Height: ";
        cin >> height;
        box[i].setHeight(height);

        cout << "Width: ";
        cin >> width;
        box[i].setWidth(width);

        cout << "Depth: ";
        cin >> depth;
        box[i].setDepth(depth);
    }

   for(int i=0;i<n;i++){
       box[n+i]=box[i];
   }
    for (int i = 0; i < 2*n; i++)
    {
        cout << "Volume of box " << (i + 1) << " :" << box[i].volume() << endl;
       
    }
  

    delete[] box;

    return 0;
}
