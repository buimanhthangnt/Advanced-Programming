#include <iostream>

using namespace std;

struct Point
{
	double x;
	double y;
};

void print(const Point& p) {
	cout << "(" << p.x << "," << p.y << ")";
}

int main()
{
	Point A;
	A.x = 12;
	A.y = 29;
	cout << "Toa do cua A la: ";
	print(A);
}