#include "Vector.h"
#include <iostream>

using namespace std;

template <class T>
Vector<T>::Vector<T>(int n)
{
	size=n;
	mas=new T[size];
	for(int i=0;i<n;i++)
		mas[i]=0;
}

template <class T>
Vector<T>::~Vector<T>()
{
	delete[] mas;
}

template <class T>
Vector<T>::Vector<T>(const Vector<T> &b)
{
	size = b.size;
	mas=new T[size];
	for(int i=0;i<size;i++)
		mas[i]=b.mas[i];
}

template <class T>
void Vector<T>::SetVector(){
	for(int i=0;i<size;i++)
	{
		cout<<"Insert "<<i+1<<" number of Vector:";
		cin>>mas[i];
	}
	cout<<"----------------------------"<<endl;
}

template <class T>
void Vector<T>::printVector()
{
	for(int i=0;i<size;i++)
		cout<<mas[i]<<endl;
}

template <class T>
Vector<T> Vector<T>::operator + (Vector<T> y)
{
	Vector<T> res(size);
	for(int i=0;i<size;i++)
		res.mas[i]=mas[i]+y.mas[i];
	return res;
}

template <class T>
void Vector<T>::operator+=(const Vector<T> &y)
{
	for(int i=0;i<size;i++)
		mas[i]=mas[i]+y.mas[i];
}

template <class T>
Vector<T> Vector<T>::operator-(Vector<T> y)
{
	Vector<T> res(size);
	for(int i=0;i<size;i++)
		res.mas[i]= mas[i] - y.mas[i];
	return res;
}

template <class T>
void Vector<T>::operator-=(const Vector<T> &y)
{
	for(int i=0;i<size;i++)
		mas[i]=mas[i]-y.mas[i];
}

template <class T>
Vector<T> Vector<T>::operator*(int b)
{
	Vector<T> res(size);
	for(int i=0;i<size;i++)
		res.mas[i]= mas[i]*b;
	return res;
}

template <class T>
void Vector<T>:: operator *=(int b)
{	
	for(int i=0;i<size;i++)
		mas[i]= mas[i]*b;
}

template <class T>
void Vector<T>::operator=(const Vector<T> &y)
{
	if (size != y.size)
	{
		delete[]  mas;
		size = y.size;
		mas = new T[size];
	}
	for(int i=0;i<size;i++)
		mas[i] = y.mas[i]; 
}

template <class T>
 T Vector<T>::operator*(Vector<T> y)
{
	T res=0;
	for(int i=0;i<y.size;i++)
		res += mas[i]*y.mas[i];
	return res;
}

 template <class T>
ostream & operator<<(ostream & os, const Vector<T> & y)
{  
		for (int i = 0; i <y.size; i++)
			os << y.mas[i] << " ";
		os << endl;
		return os;

}

template <class T>
istream & operator>>(istream & is, const Vector<T> & v)
{
	for (int i = 0; i < v.size; i++)
		is >> v.mas[i];
	return is;
}

template <class T>
void Vector<T>::resize(int nwsz)
{
	if (size != nwsz)
	{
		T *tmp;
		tmp = new T[nwsz];
		if (nwsz > size)
		{
			for (int i = 0; i < nwsz; i++)
				tmp[i] = 0;
			for (int i = 0; i < size; i++)
				tmp[i] = mas[i];
		}
		else
			for (int i = 0; i < nwsz; i++)
				tmp[i] = mas[i];
		delete[] mas;
		size = nwsz;
		mas = new T[size];
		for (int i = 0; i < size; i++)
			mas[i] = tmp[i];
		delete[] tmp;
	}
}

template <class T>
Vector<T> operator*(Vector<T> y,int b)
{
	Vector<T> res(y.size);
	for(int i=0;i<y.size;i++)
		res.mas[i]=y.mas[i]*b;
	return res;
}