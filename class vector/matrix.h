#pragma once
#include "Vector.h"
#include <iostream>
using namespace std;

template <class T>
class matrix {
	int size;
	Vector<T> *matr;
public:
	matrix(int n = 1);
	matrix<T>(const matrix<T> &b);
	~matrix<T>() { delete[] matr; }
	matrix<T>& operator = (const matrix<T> &b);
	Vector<T> operator [](int i) { return matr[i]; }

};