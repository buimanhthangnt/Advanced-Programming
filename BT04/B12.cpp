#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	bool a[1000000];
	long n;
	float m;
	cin >> n;
	m = sqrt(n);
	for (int i=1; i<=n; i++) {
		a[i] = true;
	}
	for (int i=2; i<=m; i++) {
		if (a[i]!=false) {
			cout << i << " ";
			long count = 2;
			while (count*i<=n) {
				a[i*count] = false;
				count++;
			}
		}
	}
	long count = 0;
	for (int i=int(m)+1; i<=n; i++) {
		if (a[i]) cout << i << " ";
	}
}
