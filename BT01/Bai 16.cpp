#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Nhap 3 so a, b, c: ";
	cin >> a >> b >> c;
	if (a==b && b==c) {
		cout << "true";
	}
	else {
		cout << "false";
	}
}
