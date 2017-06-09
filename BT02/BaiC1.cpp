#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, check = 1;
	cin >> n;
	if (n<2) cout << "No";
	else {
		for (int i=2; i<=sqrt(n); i++) {
			if (n%i==0) {
				check = 0;
				break;
			}
		}
		if (check==0) cout << "No";
		else cout << "Yes";
	}
}
