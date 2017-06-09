#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	bool b;
	cout << "Nhap 3 so nguyen x, y, z: ";
	cin >> x >> y >> z;
	b = ((x>y && y>z) || (x<y && y<z));
	if (b) {
		cout << "true";
	}
	else {
		cout << "false";
	}
}
