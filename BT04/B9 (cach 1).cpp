#include <iostream>
using namespace std;
int a[22][22];
int main()
{
	int n;
	cin >> n;
	int x, y;
	bool valid = true;
	for (int i=1; i<=n; i++) {
		cin >> x >> y;
		a[x][y] = 1;
		for (int j=-n; j<=n; j++) {
			if (x+j>0 && x+j<=n) {
				if (a[x+j][y]==1 && j!=0) {
					valid = false;
					break;
				}
			}
		}
		
		for (int j=-n; j<=n; j++) {
			if (y+j>0 && y+j<=n) {
				if (a[x][y+j]==1 && j!=0) {
					valid = false;
					break;
				}
			}
		}
		
		for (int j=-n; j<=n; j++) {
			if (x+j>0 && x+j<=n && y+j>0 && y+j<=n) {
				if (a[x+j][y+j]==1 && j!=0) {
					valid = false;
					break;
				}
			}
		}
		
		for (int j=-n; j<=n; j++) {
			if (x+j>0 && x+j<=n && y-j>0 && y-j<=n) {
				if (a[x+j][y-j]==1 && j!=0) {
					valid = false;
					break;
				}
			}
		}
		
	}
	if (valid) cout << "YES";
	else cout << "NO";
}
