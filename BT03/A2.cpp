#include <iostream>
using namespace std;
char a[4];
//char c[4] = "abcd";     loi bien dich
//char d[3] = "abcd";     loi bien dich
char e[5] = "abcd";
char k[] = "abcd";
int main()
{
	char b[4];
	//char g[4] = "abcd"; loi bien dich
	char h[5] = "abcd";
	char l[] = "abcd";
	cout << "mang a: ";
	for (int i=0; i<=3; i++) {
		cout << a[i];
	}
	cout << "    " << a << endl << endl;
	
	cout << "mang b: ";
	for (int i=0; i<=3; i++) {
		cout << b[i];
	}
	cout << "    " << b << endl << endl;
	
	cout << "mang e: ";
	for (int i=0; i<=3; i++) {
		cout << e[i];
	}
	cout << "    " << e << endl << endl;
	
	cout << "mang h: ";
	for (int i=0; i<=3; i++) {
		cout << h[i];
	}
	cout << "    " << h << endl << endl;
	
	cout << "mang k: ";
	for (int i=0; i<=3; i++) {
		cout << k[i];
	}
	cout << "    " << k << endl;
	cout << "size of k: " << sizeof(k) << endl << endl;
	
	cout << "mang l: ";
	for (int i=0; i<=3; i++) {
		cout << l[i];
	}
	cout << "    " << l << endl;
	cout << "size of l: " << sizeof(l) << endl << endl;
}
