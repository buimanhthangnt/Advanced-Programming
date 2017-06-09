#include <iostream>
#include <cassert>
#include <algorithm>

using namespace std;

int UCLN(int x, int y);

class Fraction
{
public:
	int n;
	int d;
	Fraction(int nu, int de): n(nu), d(de) {}
	void print() const {
		assert (d!=0);
		cout << n << "/" << d;
	}
	Fraction operator+ (const Fraction& other) {
		assert (d!=0 && other.d!=0);
		int nu = n*other.d + other.n*d;
		int de = d*other.d;
		int u = UCLN(nu,de);
		nu = nu/u; de = de/u;
		n = nu; d = de;
		assert (de!=0);
		return *this;
	}
	Fraction operator- (const Fraction& other) {
		assert (d!=0 && other.d!=0);
		int nu = n*other.d - other.n*d;
		int de = d*other.d;
		int u = UCLN(nu,de);
		nu = nu/u; de = de/u;
		n = nu; d = de;
		assert (de!=0);
		return *this;
	}
	Fraction operator* (const Fraction& other) {
		assert (d!=0 && other.d!=0);
		int nu = n*other.n;
		int de = d*other.d;
		int u = UCLN(nu,de);
		nu = nu/u; de = de/u;
		n = nu; d = de;
		assert (de!=0);
		return *this;
	}
	Fraction operator/ (const Fraction& other) {
		assert (d!=0 && other.d!=0);
		int nu = n*other.d;
		int de = d*other.n;
		int u = UCLN(nu,de);
		nu = nu/u; de = de/u;
		n = nu; d = de;
		assert (de!=0);
		return *this;
	}
	bool operator> (const Fraction& p) const {
		return (n*p.d>p.n*d);
	}
	bool operator< (const Fraction& p) const {
		return (n*p.d<p.n*d);
	}
};

template <class T>
T get_Max (const T& p1, const T& p2) {
	if (p1>p2) return p1;
	else return p2;
}

void testA1() {
	cout << "Test A1: " << endl;
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
	(a/b).print(); cout << endl << endl;
}
void testA2() {
	cout << "Test A2: " << endl;
	Fraction a(2,3);
	cout << "a = "; a.print(); cout << endl;
	Fraction b(3,4);
	cout << "b = "; b.print(); cout << endl;
	cout << "Bigger Fraction is "; get_Max(a,b).print();
	cout << endl << endl;
}

void testA3() {
	cout << "Test A3: " << endl;
	Fraction a(2,3);
	cout << "a = "; a.print(); cout << endl;
	Fraction b(3,4);
	cout << "b = "; b.print(); cout << endl;
	cout << "Bigger Fraction is ";
	if (a>b) a.print();
	else b.print();
	cout << endl;
	cout << "Smaller Fraction is ";
	if (a<b) a.print();
	else b.print();
	cout << endl << endl;
}

void testA5() {
	cout << "Test A5: " << endl;
	int a = 4, b = 3;
	char c = 'a', d = 'c';
	double e = 1.0, f = 2.2;
	Fraction p(2,3);
	Fraction q(3,4);
	cout << "Max number in pairs is: ";
	cout << max(a,b) << ", " << max(c,d) << ", " << max(e,f) << ", ";
	max(p,q).print();
	cout << endl << endl; 
}

int main()
{
	testA1();
	testA2();
	testA3();
	testA5();
}

int UCLN(int x, int y) {
	int a, b;
	if (x<0) a = -x;
	else a = x;
	if (y<0) b = -y;
	else b = y;
	if (a<b) {
		a = a+b;
		b = a-b;
		a = a-b;
	}
	while (b!=0) {
		int c = b;
		b = a % b;
		a = c;
	}
	return a;	
}