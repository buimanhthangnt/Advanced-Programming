#include <iostream>
using namespace std;
int main()
{
	long n;
	cin >> n;
	bool found = false;
	int a[222];
	for (int i=1; i<=n; i++) {
		cin >> a[i];
	}
	for (int i=1; i<=n-2; i++) {
		for (int j=i+1; j<=n-1; j++) {
			for (int k=j+1; k<=n; k++) {
				if (a[i]+a[j]+a[k]==0) {
					cout << a[i] << " " << a[j] << " " << a[k];
					found = true;
					break;
				}
			}
			if (found==true) break;
		}
		if (found==true) break;
	}
	if (!found) cout << "Khong tim thay";
}
