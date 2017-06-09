#include <iostream>
using namespace std;
int main()
{
	int a[2][12] = {
  		31,28,31,30,31,30,31,31,30,31,30,31,
  		31,29,31,30,31,30,31,31,30,31,30,31
	};
	int b[2][12] = {
		{31,28,31,30,31,30,31,31,30,31,30,31},
  		{31,29,31,30,31,30,31,31,30,31,30,31}
	};
	int c[2][12] = {
		{31,28,31,30,31,30,31,31,30,31,30,31},
  		{31,29,31,30,31,30,31,31,30}
	};
	int d[2][12] = {
  		31,28,31,30,31,30,31,31,30,31,30,31,
  		31,29,31,30
	};
	int e[][12] = {
  		{31,28,31,30,31,30,31,31,30,31,30,31},
  		{31,29,31,30,31,30,31,31,30,31,30,31}
	};
//	int g[][] = {
//  		31,28,31,30,31,30,31,31,30,31,30,31,       loi bien dich
//  		31,29,31,30
//	};
//	int h[2][] = {
//  		31,28,31,30,31,30,31,31,30,31,30,31,       loi bien dich
//  		31,29,31,30
//	};
	cout << "mang a: " << endl;
	for (int i=0; i<=1; i++) {
		for (int j=0; j<=11; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	
	cout << "mang b: " << endl;
	for (int i=0; i<2; i++) {
		for (int j=0; j<=11; j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	
	cout << "mang c: " << endl;
	for (int i=0; i<2; i++) {
		for (int j=0; j<=11; j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	
	cout << "mang d: " << endl;
	for (int i=0; i<2; i++) {
		for (int j=0; j<=11; j++) {
			cout << d[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	
	cout << "mang e: " << endl;
	for (int i=0; i<2; i++) {
		for (int j=0; j<=11; j++) {
			cout << e[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
}
