#include <iostream>
using namespace std;
int main()
{
	int n, a[101];
	cin >> n;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
	}
	if (n==0) cout << "Mang khong co phan tu nao";
	else {
		if (n==1) cout << a[1];
		else {
			for (int i=n; i>=1; i--) {
				bool swapped = false;
				for (int j=1; j<=i-1; j++) {
					if (a[j]>a[j+1]) {
						swap(a[j],a[j+1]);
						swapped = true;
					}
				}
				if (swapped==false) break;
			}
			for (int i=1; i<=n; i++) {
				cout << a[i] << " ";
			}
		}
	}
}
