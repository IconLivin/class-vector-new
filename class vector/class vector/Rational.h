#pragma once
#include <iostream>
using namespace std;

class Rational {
	int m;
	int n;
public:
	Rational(int _m, int _n);
	Rational();
	Rational(double a);
	friend ostream & operator<<(ostream & os, const Rational & y);
	friend istream & operator>>(istream & is,Rational & y);
	bool Sravn(Rational b);
	Rational operator + (Rational b);
	Rational operator + (int b);
	Rational operator - (int b);
	Rational operator - (Rational b);
	Rational operator * (Rational b);
	Rational operator * (int b);
	Rational operator / (Rational b);
	Rational operator / (int b);
	void operator = (Rational b);
	void operator = (int b);
	void operator += (int b);
	void operator += (Rational b);
	void operator -= (int b);
	void operator -= (Rational b);
	void operator *= (int b);
	void operator *= (Rational b);
	void operator /= (int b);
	void operator /= (Rational b);
private:
	void Sokr();
};
