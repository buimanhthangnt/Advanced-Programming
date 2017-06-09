#include <iostream>
using namespace std;
int main()
{
	int N, count = 1;
	int i, j;
	cin >> N;
	int **a;
	a = new int*[N+1];
	for (i=1; i<=N; i++) {
		a[i] = new int[N+1];
		for (j=1; j<=N; j++) {
			a[i][j] = 0;
		}
	}
	i = 1;
	j = N/2 + 1;
	a[i][j] = 1;
	while (count!=N*N) {
		i--;
		j++;
		if (i==0) i = N;
		if (j==N+1) j = 1;
		if (a[i][j]!=0) {
			i = i + 2;
			j--;
			if (i==N+2) i = 2;
			if (j==0) j = N;
		}
		count++;
		a[i][j] = count;
	}
	for (i=1; i<=N; i++) {
		for (j=1; j<=N; j++) {
			cout << a[i][j];
			if (a[i][j]<10) cout << "  ";
			else cout << " ";
		}
		cout << endl;
	}
}
