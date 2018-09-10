#include <iostream>
#include "Rational.h"
using namespace std;


Rational::Rational(double a)
{
	m = 0;
	n = 1;
}

Rational::Rational(int _m, int _n) {
	m = _m;
	n = _n;
}

Rational::Rational() {
	m = 0;
	n = 1;
}

ostream & operator<<(ostream & os, const Rational & y)
{
		os << y.m <<"/" << y.n ;
	return os;
}

istream & operator>>(istream & is,Rational & y)
{	
	is >> y.m >> y.n;
	return is;
}

bool Rational::Sravn(Rational b) {
	if (m == b.m && n == b.n)
		return true;
	else
		return false;
}

void Rational::Sokr() {
	int tm, tn;
	tm = abs(m);
	tn = abs(n);
	if (tm != 0 && tn != 0) {
		while (tm != tn) {
			if (tm > tn)
				tm -= tn;
			else
				tn -= tm;
		}
		m /= tm;
		n /= tn;
	}
}

Rational Rational::operator+(Rational b) {
	Rational c;
	c.m = m * b.n + b.m*n;
	c.n = n * b.n;
	c.Sokr();
	return c;
}

Rational Rational::operator-(Rational b) {
	Rational c;
	c.m = m * b.n - b.m*n;
	c.n = n * b.n;
	c.Sokr();
	return c;
}

Rational Rational::operator*(Rational b) {
	Rational c;
	c.m = m * b.m;
	c.n = n * b.n;
	c.Sokr();
	return c;
}

Rational Rational::operator/(Rational b) {
	Rational c;
	c.m = m * b.n;
	c.n = n * b.m;
	c.Sokr();
	return c;
}

Rational Rational::operator+(int b) {
	Rational c;
	c.m = m + b * n;
	c.n = n;
	c.Sokr();
	return c;
}

Rational Rational::operator-(int b) {
	Rational c;
	c.m = m - b * n;
	c.n = n;
	c.Sokr();
	return c;
}

Rational Rational::operator*(int b) {
	Rational c;
	c.m = m * b;
	c.n = n;
	c.Sokr();
	return c;
}

Rational Rational::operator/(int b) {
	Rational c;
	c.m = m;
	c.n = n * b;
	c.Sokr();
	return c;
}

void Rational::operator+=(Rational b) {
	m = m * b.n + b.m*n;
	n = n * b.n;
	Sokr();
}

void Rational::operator-=(Rational b) {
	m = m * b.n - b.m*n;
	n = n * b.n;
	Sokr();
}

void Rational::operator*=(Rational b) {
	m = m * b.m;
	n = n * b.n;
	Sokr();
}

void Rational::operator/=(Rational b) {
	m = m * b.n;
	n = n * b.m;
	Sokr();
}

void Rational::operator+=(int b) {
	m = m + b * n;
	Sokr();
}

void Rational::operator-=(int b) {
	m = m - b * n;
	Sokr();
}

void Rational::operator*=(int b) {
	m = m * b;
	Sokr();
}

void Rational::operator/=(int b) {
	n = n * b;
	Sokr();
}

void Rational::operator=(Rational b) {
	m = b.m;
	n = b.n;
	Sokr();
}

void Rational::operator=(int b) {
	m = b;
	n = 1;
}

