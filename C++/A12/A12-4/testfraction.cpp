#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    Fraction a(4, 2);
    Fraction b(17, 11);
    Fraction c(5);
    Fraction d;
    Fraction e;

    cout << "Enter a fraction D : " << endl;
    cin >> d;
    cout << d << endl;

    cout << "Enter a fraction E : " << endl;
    cin >> e;
    cout << e << endl;

    cout << "D * E : " << endl;
    cout << d * e << endl;

    cout << "D / E :" << endl;
    cout << d / e << endl;

    cout << "D * D : " << d * d << endl;
    cout << "D / D : " << d / d << endl;

    cout << endl;
    cout << "a = ";
    cout << a << endl;
    cout << "b = ";
    cout << b << endl;
    cout << "c = ";
    cout << c << endl;
}