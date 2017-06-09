#include <iostream>

using namespace std;

string a;
int size;

void show() {
	for (int i=0; i<size; i++) {
		cout << a[i];
	}
	cout << endl;
}

void hoanvi(int i) {
	if (i==0) {
		show();
		return;
	}
	for (int j=0; j<i; j++) {
		swap(a[i-1],a[j]);
		hoanvi(i-1);
		swap(a[i-1],a[j]);
	}
}

int main()
{
	cin >> a;
	cout << endl << endl;
	while (a[size]!='\0') size++;
	hoanvi(size);
}