#include <iostream>
using namespace std;
void f(int b[]) {
	cout << "Dia chi cua mang a in ra trong ham f: " << &b << endl;
	cout << "Dia chi cua phan tu dau tien in ra trong ham f: " << (void*)&b[0];
}

int main()
{
	int a[3];
	a[0] = 1;
	cout << "Dia chi mang a in trong ham main: " << &a << endl;
	cout << "Dia chi phan tu dau tien in trong ham main: " << (void*)&a[0];
	cout << endl << endl;
	f(a);
}

//mang duoc truyen vao ham theo co che truyen tham chieu
//dia chi cua mang a va b khac nhau
//tuy nhien dia chi cac phan tu tuong ung cua chung la giong nhau
