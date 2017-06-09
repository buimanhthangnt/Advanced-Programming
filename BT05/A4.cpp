#include <iostream>
using namespace std;

void print(char m[], string n, string& p) {
	cout << "Dia chi cua m: " << &m << endl;
	cout << "Dia chi cua n: " << &n << endl;
	cout << "Dia chi cua p: " << &p << endl;
	return ;
}

int main()
{
	char a[12];
	string b, c;
	cin >> a;
	cin >> b >> c;
	cout << "Dia chi cua a: " << &a << endl;
	cout << "Dia chi cua b: " << &b << endl;
	cout << "Dia chi cua c: " << &c << endl;
	print(a,b,c);
}

//mang duoc truyen theo co che pass-by-value
//string co the duoc truyen theo ca hai co che pass-by-value va pass-by-reference
