#include <iostream>
using namespace std;
int main()
{
	int m;
	int a[3];
	int n;
	char b[3];
	int p;
	cout << "Dia chi cua m: " << &m << endl;
	cout << "Mang a: " << &a[0] << " " << &a[1] << " " << &a[2] << endl;
	cout << "Dia chi cua n: " << &n << endl;
	cout << "Mang b: " << &b << endl;
	cout << "Dia chi cua p: " << &p;
}
//Dia chi 3 phan tu cua mang a la 12 o nho lien nhau
//moi phan tu 4 o nho

//Chuong trinh khong cho phep in ra dia chi tung phan tu cua mang b
//chi in ra duoc dia chi cua mang b
//3 phan tu cua b nam o 3 o nho lien nhau

//cac bien m, n, p co dia chi gan giong nhau, nam gan nhau
//m: 0x6ffe4c, n: 0x6ffe3c, p: 0x6ffe2c