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
{
	cout << term.num << "/" << term.den;

	return cout;
}

istream &operator>>(istream &cin, Fraction &term)
{
	int denominator;
	cout << "Enter Numerator  : ";
	cin >> denominator;
	cout << "Enter Denominator  : ";
	cin >> term.num;
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