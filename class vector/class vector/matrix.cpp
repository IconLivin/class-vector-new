#include "matrix.h"
#include <iostream>
using namespace std;

template<class T>
matrix<T>::matrix(int n) {
	size = n;
	matr = new Vector<T>[size];
	Vector<T> temp[size];
	for (int i = 0; i < size; i++)
		matr[i] = temp;
}

template<class T>
matrix<T>::matrix(const matrix<T> &b) {
	size = b.size;
	matr = new Vector<T>[size];
	for (int i = 0; i < size; i++)
		matr[i] = b.matr[i];
}

template<class T>
matrix<T>& matrix<T>::operator=(const matrix<T> &b){
	if(size != b.size)
	{
		delete[] matr;
		size = b.size;
		matr = new Vector<T>[size];
	}

	for (int i = 0; i < size; i++)
		matr[i] = b.matr[i];
	return *this;
}