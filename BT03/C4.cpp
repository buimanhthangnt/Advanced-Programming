#include <iostream>
using namespace std;
int main()
{
	int m, n, count = 0;
	char c[10][10];
	cin >> m >> n;
	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			cin >> c[i][j];
			if (c[i][j]!='*') c[i][j] = 48;
		}
	}
	cout << endl << endl;
	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			if (c[i][j]=='*') {
				for (int k=j-1; k<=j+1; k++) {
					if (k>=0 && k<n && i-1>=0) {
						if (c[i-1][k]!='*') c[i-1][k]++;
					}
				}
				for (int k=j-1; k<=j+1; k++) {
					if (k>=0 && k<n && i+1<m) {
						if (c[i+1][k]!='*') c[i+1][k]++;
					}
				}
				if (j-1>=0) {
					if (c[i][j-1]!='*') c[i][j-1]++;
				}
				if (j+1<n) {
					if (c[i][j+1]!='*') c[i][j+1]++;
				}
			} 
		}
	}
	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}
