#include <iostream>

using namespace std;

void f(int xval) {
	int x;
	x = xval;
	cout << "Dia chi cua x: " << &x << endl;
}

void g(int yval) {
	int  y;
	cout << "Dia chi cua y: " << &y << endl;
}

int main()
{
	f(7);
	g(11);
	return 0;
}

//Hai bien co dia chi giong nhau
//Giai thich: sau khi goi ham f(7) bo nho cap phat cho bien x dc giai phong
//ma hai ham, hai bien co cung kieu du lieu, hai bien deu nam dau tien cua ham
//nen bien y dc khoi tao ngay tai vi tri cua bien x
//vi the chung co dia chi giong nhau