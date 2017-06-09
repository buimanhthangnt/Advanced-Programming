#include <iostream>
using namespace std;
int main()
{
	int* a;
	int n;
	bool like = false;
	cin >> n;
	a = new int[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (a[i]==a[j]) {
				like = true;
				break;
			}
		}
		if (like==true) break;
	}
	if (like==true) cout << "yes";
	else cout << "no";
}
