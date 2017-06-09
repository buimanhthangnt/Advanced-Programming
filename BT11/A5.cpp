#include <iostream>

using namespace std;

int main()
{
	int *p, *r, a;
	a = 12;
	p = &a;
	r = p;
	delete p;
	cout << *r;
}