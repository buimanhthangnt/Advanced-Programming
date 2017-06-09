#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x[22], y[22];
	for (int i=1; i<=n; i++) {
		cin >> x[i] >> y[i];
	}
	bool valid = true;
	for (int i=1; i<n; i++) {
		for (int j=i+1; j<=n; j++) {
			if (x[i]==x[j] || y[i]==y[j] || (abs(x[i]-x[j])==abs(y[i]-y[j]))) {
				valid = false;
				break;
			}
		}
		if (!valid) break;
	}
	if (valid) cout << endl << "YES";
	else cout << endl << "NO";
}
