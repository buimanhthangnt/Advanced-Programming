#include <iostream>
using namespace std;
int main()
{
	long n;
	float boy[100], girl[100];
	cin >> n;
	for (int i=1; i<=n; i++) {
		cin >> boy[i] >> girl[i];
	}
	bool a = true;
	for (int i=1; i<=n; i++) {
		if (boy[i]<=girl[i]) {
			a = false;
			break;
		}
	}
	if (a) cout << endl << "YES";
	else {
		for (int i=n; i>=1; i--) {
			bool swapped = false;
			for (int j=1; j<=i-1; j++) {
				if (boy[j]>boy[j+1]) {
					swap(boy[j],boy[j+1]);
					swapped = true;
				}
			}
			if (!swapped) break;
		}
		for (int i=n; i>=1; i--) {
			bool swapped = false;
			for (int j=1; j<=i-1; j++) {
				if (girl[j]>girl[j+1]) {
					swap(girl[j],girl[j+1]);
					swapped = true;
				}
			}
			if (!swapped) break;
		}
		a = true;
		for (int i=1; i<=n; i++) {
			if (boy[i]<=girl[i]) {
				a = false;
			}
			if (a==false) break;
		}
		if (a==false) cout << endl << "NO";
		else cout << endl << "YES";
	}
}
