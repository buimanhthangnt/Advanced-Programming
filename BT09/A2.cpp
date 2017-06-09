#include <iostream>

using namespace std;

int main()
{
	int *p = new int;
	int *p2 = p;
	*p = 10;
	delete p;
	cout << *p2;   //Con tro p da duoc giai phong nen p2 cung khong con hop le ( loi truy cap vao vung bo nho khong con hop le)
	delete p2;    // Con tro tro toi vung bo nho k con ton tai (loi giai phong con tro da duoc giai phong)
}