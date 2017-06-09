#include <iostream>

using namespace std;

struct Vector
{
	int x;
	int y;
};

struct Point
{
	double x;
	double C[12];
	Vector v;
};

int main()
{
	Point A, B;
	A.x = 12;
	for (int i=0; i<12; i++) {
		A.C[i] = i;
	}
	A.v.x = 22;
	A.v.y = 29;

	B = A;
	cout << "Mang C: ";
	for (int i=0; i<12; i++) {
		cout << B.C[i] << " ";
	}
	cout << endl;
	cout << "B.v.x = " << B.v.x << ",  B.v.y = " << B.v.y << endl;
	cout << "Dia chi C[1] cua A la: " << &A.C[1] << endl;
	cout << "Dia chi C[1] cua B la: " << &B.C[1] << endl;
	cout << "Dia chi truong x vector v cua A la: " << &A.v.x << endl;
	cout << "Dia chi truong x vector v cua B la: " << &B.v.x << endl;
}


//Cac du lieu cua B giong het cua A, dia chi cac truong cua A khac voi B
//Chung to A duoc copy hoan toan
