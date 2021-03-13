#include <iostream>
#include "MyClass.h"
using namespace std;
Pair Pair::operator+(int constant)
{
	return Pair(_INT + constant, _DOUBLE);
}
Pair Pair::operator+(double constant)
{
	return Pair(_INT, _DOUBLE + constant);
}
Pair Pair::operator-(Pair arg) 
{
	return Pair(_INT - arg._INT, _DOUBLE - arg._DOUBLE);
}
void Pair::operator-=(Pair arg) 
{
	_INT = _INT - arg._INT;
	_DOUBLE = _DOUBLE - arg._DOUBLE;
}
void Pair::operator +=(int constant) 
{
	_INT = _INT + constant;
}
void Pair::operator +=(double constant) 
{
	_DOUBLE = _DOUBLE + constant;
}