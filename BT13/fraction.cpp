#include <iostream>
#include <cassert>
#include "fraction.h"

using namespace std;

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



void Fraction::print() {
		assert (d!=0);
		cout << n << "/" << d;
	}
	Fraction Fraction::operator+ (const Fraction& other) {
		assert (d!=0 && other.d!=0);
		int nu = n*other.d + other.n*d;
		int de = d*other.d;
		int u = UCLN(nu,de);
		nu = nu/u; de = de/u;
		Fraction result = Fraction(nu,de);
		assert (de!=0);
		return result;
	}
	Fraction Fraction::operator- (const Fraction& other) {
		assert (d!=0 && other.d!=0);
		int nu = n*other.d - other.n*d;
		int de = d*other.d;
		int u = UCLN(nu,de);
		nu = nu/u; de = de/u;
		Fraction result = Fraction(nu,de);
		assert (de!=0);
		return result;
	}
	Fraction Fraction::operator* (const Fraction& other) {
		assert (d!=0 && other.d!=0);
		int nu = n*other.n;
		int de = d*other.d;
		int u = UCLN(nu,de);
		nu = nu/u; de = de/u;
		Fraction result = Fraction(nu,de);
		assert (de!=0);
		return result;
	}
	Fraction Fraction::operator/ (const Fraction& other) {
		assert (d!=0 && other.d!=0);
		int nu = n*other.d;
		int de = d*other.n;
		int u = UCLN(nu,de);
		nu = nu/u; de = de/u;
		Fraction result = Fraction(nu,de);
		assert (de!=0);
		return result;
	}
