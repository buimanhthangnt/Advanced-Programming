#include <iostream>
using namespace std;
int main()
{
	int n;
	int a[100];
	long temp = 0, sum = 0;
	cin >> n;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
	}
	for (int i=n; i>=1; i--) {
		bool swapped = false;
		for (int j=1; j<=n-1; j++) {
			if (a[j]>a[j+1]) {
				swap(a[j],a[j+1]);
				swapped = true;
			}
		}
		if (!swapped) break;
	}
	for (int i=2; i<=n; i++) {
		temp = temp + a[i-1];
		sum = sum + temp;
	}
	cout << endl << endl;
	cout << sum;
}
