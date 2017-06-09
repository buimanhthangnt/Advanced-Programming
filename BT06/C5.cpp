#include <iostream>

using namespace std;

int *a;
int n;

void show() {
	for (int i=n; i>=1; i--) {
		for (int j=1; j<=a[i]; j++) {
			cout << i << " ";
		}
	}
	cout << endl;
}

void partition(int n, int max) {
	if (n==0) {
		show();
		return;
	}
	for (int i=max; i>=1; i--) {
		if (i<=n) {
			a[i] += 1;
			partition(n-i,i);
			a[i] -= 1;
		}
	}
}

int main()
{
	cin >> n;
	cout << endl;
	a = new int[n+1];
	for (int i=1; i<=n; i++) a[i] = 0;
	partition(n,n);
}