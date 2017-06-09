#include <iostream>
using namespace std;

int fx(int x) {
	cout << "Dia chi cua tham tri la " << &x;
	return x*x+2*x+1;
}

int gx(int& x) {
	cout << "Dia chi cua tham bien la " << &x;
	return x*x+2*x+1;
}

int main()
{
	int a;
	cin >> a;
	cout << "Truyen bang gia tri " << endl;
	cout << "Dia chi cua doi so la: " << &a << endl;
	fx(a);
	cout << endl << endl;

	cout << "Truyen bang tham chieu: " << endl;
	cout << "Dia chi cua doi so la: " << &a << endl;
	gx(a);
}

//dia chi cua doi so la 0x6ffe4c
//dia chi cua tham tri la 0x6ffe20
//dia chi cua tham bien la 0x6ffe4c