#include <iostream>
#include <cstring>
using namespace std;
const int SIZE = 100;
int main()
{
	char s[SIZE];
	cout << "Nhap mot chuoi ki tu co do dai khong vuot qua 100: ";
	cin >> s;
	bool b = true;
	int length = strlen(s);
	for (int i=0; i<=length/2-1; i++) {
		if (s[i]!=s[length-1-i]) {
			b = false;
			break;
		}
	}
	if (b==true) cout << "yes";
	else cout << "no";
}
