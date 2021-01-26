/*
CH-230-A
a10 p8.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
	Complex c1;
    double c1r;
    double c1i;
    cout << "Real part:" << endl;
    cin >> c1r;
    cout << "Imaginary part:" << endl;
    cin >> c1i;
    c1.setReal(c1r);
    c1.setImg(c1i);
	Complex c2;
    double c2r;
    double c2i;
    cout << "Real part:" << endl;
    cin >> c2r;
    cout << "Imaginary part:" << endl;
    cin >> c2i;
    c2.setReal(c2r);
    c2.setImg(c2i);
     cout << "The two numbers are :" << endl;
	cout<<c1;
    cout << "and" << endl;
	cout<<c2;
     cout << endl;
    cout<<"The conjugate of first number is :"<<endl;
    c1.conj().print();
    cout<<"The Sum :"<<endl;
    c1.add(c2).print();
    cout<<"The difference"<<endl;
    c1.sub(c2).print();
    cout<<"The product"<<endl;
    c1.mul(c2).print();
    if(c1 < c2)
    cout<< "c1 is smaller";
    else
    cout<< "c2 is smaller";
	return 0;
}