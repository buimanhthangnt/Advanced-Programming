#include <iostream>
using namespace std;
int main()
{
	int x, y, count = 0, temp = 0;
	int a[10][10];
	cin >> x >> y;
	int top = 1, right = y, bottom = x, left = 1;
	while (count!=x*y) {
		temp++;
		if (temp==1) {
			for (int i=left; i<=right; i++) {
				count++;
				a[top][i] = count;				
			}
			top++;
		}
		
		if (temp==2) {
			for (int i=top; i<=bottom; i++) {
				count++;
				a[i][right] = count;
			}
			right--;
		}
		if (temp==3) {
			for (int i=right; i>=left; i--) {
				count++;
				a[bottom][i] = count;
			}
			bottom--;
		}
		if (temp==4) {
			for (int i=bottom; i>=top; i--) {
				count++;
				a[i][left] = count;
			}
			left++;
			temp = 0;
		}
	}
	for (int i=1; i<=x; i++) {
		for (int j=1; j<=y; j++) {
			cout << a[i][j];
			if (a[i][j]<10) cout << "  ";
			else cout << " ";
		}
		cout << endl;
	}
}
