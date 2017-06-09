#include <iostream>
#include <cmath>
using namespace std;
int a[22];
int main()
{
	int n;
	cin >> n;
	int x, y;
	bool valid = true;
	for (int i=1; i<=n; i++) {
		cin >> x >> y;
		if (a[x]==1) valid = false;
		else a[x] = y;
	}
	if (!valid) cout << "NO";
	else {
		for (int i=1; i<n; i++) {
			for (int j=i+1; j<=n; j++) {
				if (a[i]==a[j]) {
					valid = false;
					break;
				}
				if (abs(i-j)==abs(a[i]-a[j])) {
					valid = false;
					break;
				}
			}
			if (!valid) break;
		}
		if (valid) cout << "YES";
		else cout << "NO";
	}
}
