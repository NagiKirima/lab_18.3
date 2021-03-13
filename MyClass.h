#pragma once
#include <iostream>
using namespace std;
class Pair
{
	int _INT;
	double _DOUBLE;
public:
	//constructors
	Pair()
	{
		_INT = 0;
		_DOUBLE = 0;
	}
	Pair(int _INT, double _DOUBLE)
	{
		this->_INT = _INT;
		this->_DOUBLE = _DOUBLE;
	}
	//methods
	void Show() 
	{
		cout << this->_INT << " : " << this->_DOUBLE << endl;
    }
	void Set_int(int a) 
	{
		_INT = a;
	}
	void Set_double(double a)
	{
		_DOUBLE = a;
	}
	//overloads
	Pair operator+(int constant);
	Pair operator+(double constant);
	Pair operator-(Pair arg);
	void operator-=(Pair arg1);
	void operator +=(int constant);
	void operator +=(double constant);
};