#include <iostream>
#include "MyClass.h"
using namespace std;
int main() 
{
	Pair a(1, 2.2);
	Pair b(5,5.5);
	a = a + 3;
	b = b + 4.5;
	
	cout << "A - ";
	a.Show();
	cout << "B - ";
	b.Show();
	b = b - a;
	cout << endl << "B - A:" << endl;
	b.Show();

	Pair c(10, 10);
	cout << endl << "C - B:" << endl;
	c -= b;
	c.Show();

	cout << endl << "D1 - D2:" << endl;
	Pair d1(1, 1), d2(1,1);
	d1 -= d2;
	d1.Show();
}