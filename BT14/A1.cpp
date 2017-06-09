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
	void print() {
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
};

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

int main()
{
	Fraction f1(1,2), f2(1,1);
	Fraction sum = f1 + f2 + f1;  //Phep toan cong dau tien da lam thay doi f1, do do ket qua phep tinh sai
	sum.print(); cout << endl;
	testA1();
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