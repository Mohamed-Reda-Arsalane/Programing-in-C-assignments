#include <iostream>
#include "fraction.h"

using namespace std;

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	 if (b == 0)
   return a;
   return gcd(b, a % b);
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
}

ostream &operator<<(ostream &cout, const Fraction &term)
{if (term.den ==1){
		cout<<term.num;
	}else{
	cout << term.num << "/" << term.den;
}
	return cout;
}

istream &operator>>(istream &cin, Fraction &term)
{
	int denominator;
	cout << "Enter Numerator  : ";
  cin >> term.num;
	
	cout << "Enter Denominator  : ";
	cin >> denominator;
	while (denominator == 0)
	{
		cout << "Invalid" << endl;
		cout << "Enter Denominator  : ";
		cin >> denominator;
	}
	term.den = denominator;
	return cin;
}

Fraction Fraction::operator*(Fraction frac)
{
	Fraction result;
	result.num = num * frac.num;
	result.den = den * frac.den;
	int n = gcd(result.num, result.den);
	result.num = result.num / n;
	result.den = result.den / n;
	return result;
}

Fraction Fraction::operator/(Fraction frac)
{

	Fraction result;
	result.num = num * frac.den;
	result.den = den * frac.num;
	int n = gcd(result.num, result.den);
	result.num = result.num / n;
	result.den = result.den / n;
	return result;
}

Fraction Fraction ::operator+(Fraction &f){
 int n=lcm(den,f.den);
	Fraction a(num * n/den +(n*f.num)/f.den , n);



	return a; 
}

Fraction Fraction ::operator-(Fraction &f){
  int n=lcm(den,f.den);
	Fraction a(num * n/den -(n*f.num)/f.den , n);



	return a; 
}


Fraction Fraction ::operator=(Fraction &frac)
{
	num = frac.num;
	den = frac.den;
	return *this;
}

bool Fraction::operator<(Fraction frac)
{
	if (((double)num / (double)den) < ((double)frac.num / (double)frac.den))
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool Fraction::operator>(Fraction frac_in)
{

	if (((double)num / (double)den) > ((double)frac_in.num / (double)frac_in.den))
	{
		return true;
	}
	else
	{
		return false;
	}
}


