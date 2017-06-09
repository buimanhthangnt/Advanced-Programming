#include <iostream>
using namespace std;
int a[6][6];
int main()
{
	int x, y;
	for (int i=1; i<=5; i++) {
		x = 1;
		y = i;
		while (a[x][y]!=0) {
			x++;
			if (x>5) x = x % 5;
		}
		a[x][y] = 2;
		for (int j=1; j<=5; j++) {
			if (i!=x && a[j][y]!=2) a[j][y] = 1;
		}
		for (int j=1; j<=5; j++) {
			if (j!=y && a[x][j]!=2) a[x][j] = 1;
		}
		for (int j=-5; j<=5; j++) {
			if (x+j>0 && x+j<=5 && y+j>0 && y+j<=5 && j!=0 && a[x+j][y+j]!=2) {
				a[x+j][y+j] = 1;
			}
		}
		for (int j=-5; j<=5; j++) {
			if (x+j>0 && x+j<=5 && y-j>0 && y-j<=5 && j!=0 && a[x+j][y-j]!=2) {
				a[x+j][y-j] = 1;
			}
		}
	}
	for (int i=1; i<=5; i++) {
		for (int j=1; j<=5; j++) {
			if (a[i][j]==2) cout << "H ";
			else cout << "* ";
		}
		cout << endl;
	}
}
