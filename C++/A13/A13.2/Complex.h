/*
CH-230-A
a10 p8.cpp
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#ifndef Complex_h
#define Complex_h
#include <iostream>
/*"The class declaration has to be placed into
Complex.h,"*/
class Complex {
  private:
      double real;
      double imaginary;
  public:
      Complex();
      Complex(double r, double i = 0);
      //copy constructor
      Complex(const Complex&);
      //empty destructor
      ~Complex();
      //setter methods
      void setReal(double re);
      void setImaginary(double im);
      //getter methods
      double getReal();
      double getImaginary();
//finds conjugate
      void conjugate();
      //prints a + bi
      void print();
//adds two complex
      Complex add(Complex);
      //subtracts
      Complex subtract(Complex);
      //multiplies
      Complex multiply(Complex);
      //divides
      Complex divide(Complex);
      Complex operator+(const Complex&);
      Complex operator-(const Complex&);
      Complex operator*(const Complex&);
      Complex operator/(const Complex&);
      Complex& operator= (const Complex&);
      friend std::ostream& operator<<(std::ostream &out, const Complex& c);
      friend std::istream& operator>>(std::istream&in, Complex& c);

};


#endif /* Complex_h */