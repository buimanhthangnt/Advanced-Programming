#include <iostream>
using namespace std;
int a[5];
int c[5] = {1,2,3,4};
int e[] = {1,2,3,4};
//int d[3] = {1,2,3,4};    bi loi bien dich
int main()
{
	int b[5];
	int d[5] = {1,2,3,4};
	int g[] = {1,2,3,4};
	cout << "mang a: ";
	for (int i=0; i<=4; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "mang b: ";
	for (int i=0; i<=4; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	cout << "mang c: ";
	for (int i=0; i<=4; i++) {
		cout << c[i] << " ";
	}
	cout << endl;
	cout << "mang d: ";
	for (int i=0; i<=4; i++) {
		cout << d[i] << " ";
	}
	cout << endl;
	cout << "mang e: ";
	for (int i=0; i<=4; i++) {
		cout << e[i] << " ";
	}
	cout << endl;
	cout << "mang g: ";
	for (int i=0; i<=4; i++) {
		cout << g[i] << " ";
	}
	cout << endl;
}
