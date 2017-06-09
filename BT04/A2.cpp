#include <iostream>
using namespace std;
int main()
{
	int x, n, a[3001];
	bool found = false;
	cin >> x >> n;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
	}
	if (n==0) cout << "Day so khong co phan tu nao";
	else {
		for (int i=1; i<=n; i++) {
			if (a[i]==x) {
				found = true;
				break;
			}
		}
		if (found==true) cout << "Da tim thay";
		else cout << "Khong co phan tu " << x << " trong day";
	}
}
