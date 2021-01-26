#include <iostream>
#include "fraction.h"

using namespace std;

int dd(int a, int b)
{
	 if (b == 0)
   return a;
   return dd(b, a % b);
}

int main(void)
{
    Fraction d;
    Fraction e;

    cout << "Enter a fraction D : " << endl;
    cin >> d;
    cout <<"D = " << d << endl;

    cout << "Enter a fraction E : " << endl;
    cin >> e;
    cout <<"E = " << e << endl;

    if (d > e)
    {
        cout << "D is greater than E.   D = " << d << endl;
    }
    else if (d < e)
    {
        cout << "E is greater than D.   E = " << e << endl;
    }
    else { cout << "E and D are equal" << endl;}


    cout << "D * E : " << d * e << endl;
    cout << "D / E :" << d / e << endl;
    cout << "D + E : " << d + e << endl;
    cout << "D - E : " << d - e << endl;

}