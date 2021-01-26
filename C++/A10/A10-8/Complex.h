/*
CH-230-A
a10 p8.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <string> 
#include <cmath> 

class Complex {

private:  // internal implementation is hidden
	double real;  // real part
	double img;  // imaginary part

public:
	Complex();                 // empty constructor
	Complex(double, double); // constructor taking values for real and imaginary parts
    Complex(Complex &copy);
    ~Complex();// copy constructor 
    void setReal(double);
    void setImg(double); 
    double getReal();
    double getImg();
	void print();   // prints it to the screen
    Complex conj();
    Complex add(Complex);
    Complex sub(Complex);
    Complex mul(Complex);
    inline double magnitude(Complex x){
       double result = x.real*x.real + x.img*x.img;
       return sqrt(result);
    };


    friend std::ostream &operator<<(std::ostream &cout, Complex &term);
  
    
	bool operator>(Complex x);
	bool operator<(Complex x);
};    