#include <iostream>

using namespace std;

int main()
{
	int a, c;
	int &b = a;
	a = 12;
	c = 22;
	cout << "Dia chi cua &b ban dau: " << &b << endl;
	cout << "Dia chi cua a: " << &a << endl;

	cout << "Dia chi cua &b sau do: " << &b << endl;
	cout << "Dia chi cua c: " << &c << endl;
}

//bien tham chieu va bien no chieu toi la 1 bien trong bo nho
//khi khai bao mot bien tham chieu thi can phai chieu ngay den mot bien thuong
//khong the chieu mot tham chieu toi mot bien khac voi dich ban dau