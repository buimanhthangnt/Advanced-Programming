#include <iostream>
using namespace std;
int main()
{
	char a[12] = "12345678901";
	char b[2];
	cin >> b;
	cout << "mang b: " << b << endl;
	cout << a[-1] << endl;
	cout << a[13] << endl;
}
