#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
	Fraction a(2,3);
	cout << "a = "; a.print(); cout << endl;
	Fraction b(3,4);
	cout << "b = "; b.print(); cout << endl;

	cout << "a + b = ";
	(a+b).print(); cout << endl;
	cout << "a - b = ";
	(a-b).print(); cout << endl;
	cout << "a * b = ";
	(a*b).print(); cout << endl;
	cout << "a / b = ";
	(a/b).print(); cout << endl;
}