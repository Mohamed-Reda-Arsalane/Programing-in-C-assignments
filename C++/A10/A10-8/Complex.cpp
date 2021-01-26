/*
CH-230-A
a10 p8.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>
#include "Complex.h"

using namespace std;  

Complex::Complex() {  // sets everything to 0
	real = img = 0;
}
Complex::Complex(double r, double i) { 
    real = r;
	img = i;
}

Complex::Complex(Complex &copy) { 
    real = copy.real;
    img = copy.img;
}

Complex::~Complex(){
}

void Complex::setReal(double newReal){
    real=newReal;
}
void Complex::setImg(double newImg){
    img=newImg;
}

double Complex::getReal(){
    return real;
}

double Complex::getImg(){
    return img;
}

void Complex::print(){
    if (img){
        if (img>0){
	  cout<<"("<<real<<"+"<<img<<"i"<<")"<<endl;
        }else{ 
	  cout<<"("<<real<<img<<"i"<<")"<<endl;
        }
    }else{
        cout<<real<<endl;
    }
}

Complex Complex::conj(){
    Complex res(real,-img);
    return res;
}


Complex Complex::add(Complex x) {               // prints data to screen via cout
Complex res(real + x.getReal(),img + x.getImg());
return res;
}

Complex Complex::sub(Complex x) {               // prints data to screen via cout
Complex res(real - x.getReal(),img - x.getImg());
return res;
}

Complex Complex::mul(Complex x) {               // prints data to screen via cout
Complex res(real*x.getReal() -img*x.getImg(),img*x.getReal() -real*x.getImg());
return res;
}

ostream &operator<<(ostream &cout, Complex &term){

	cout << term.real << " + " << term.img<< "i"<< endl;
    
	return cout;
}

bool Complex::operator<(Complex term)
{
	if (magnitude(*this) < magnitude(term))
	{
		return true;
	}
	else
	{
		return false;
	}
}

