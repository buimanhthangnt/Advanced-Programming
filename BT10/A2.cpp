#include <iostream>

using namespace std;

struct Point
{
	double x;
	double y;
};

void printR(const Point& p) {
	cout << "Dia chi cua point khi truyen bang tham chieu la: " << &p << endl;
}

void printV(Point p) {
	cout << "Dia chi cua point khi truyen bang tham tri la: " << &p << endl;
}

int main()
{
	Point A;
	A.x = 12;
	A.y = 29;
	cout << "Dia chi cua A la: " << &A << endl;
	printR(A);
	printV(A);
}

//Output
//Dia chi cua A la: 0x6ffe40
//Dia chi cua point khi truyen bang tham chieu la: 0x6ffe40
//Dia chi cua point khi truyen bang tham tri la: 0x6ffde0