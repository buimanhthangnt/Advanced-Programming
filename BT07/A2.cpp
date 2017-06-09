#include <iostream>

using namespace std;

void sum(int b[12]) {
	cout << "Kich thuoc cua mang b: " << sizeof(b) << endl;
	return;
}

int main()
{
	int a[12];
	for (int i=0; i<=11; i++) {
		a[i] = i;
	}
	cout << "Kich thuoc cua mang a: " << sizeof(a) << endl;
	sum(a);
}

//Mang co kich thuoc xac dinh hay khong xac dinh thi kich thuoc
// cua no deu la 8 byte, mang duoc truyen vao ham o dang con tro