#include <iostream>

using namespace std;

struct Point
{
	double x;
	double y;
	Point mid_point(const Point& A) const {
		Point result;
		result.x = (x + A.x)/2;
		result.y = (y + A.y)/2;
		return result;
	}
};

void print(const Point& p) {
	cout << "(" << p.x << "," << p.y << ")";
}

int main()
{
	Point A, B;
	A.x = 12;
	A.y = 29;
	B.x = 22;
	B.y = 5;
	cout << "Toa do trung diem cua A va B la: ";
	print(B.mid_point(A));
}