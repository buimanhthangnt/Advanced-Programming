#include <iostream>

using namespace std;

struct Point
{
	double x;
	double y;
};

int main()
{
	Point A;
	A.x = 12;
	A.y = 29;
	cout << "Dia chi cua A la: " << &A << endl;
	cout << "Dia chi truong x cua A la: " << &A.x << endl;
	cout << "Dia chi truong y cua A la: " << &A.y << endl;
}

//Dia chi cua bien A giong voi dia chi cua truong x
//Dia chi cua truong y cach dia chi truong x la 8 o nho, tuong duong voi kich thuoc cua kieu double