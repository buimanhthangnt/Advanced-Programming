#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

char **matrix;
int N;

void show() {
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void hadamard(int top, int bottom, int left, int right, int i) {
	if (top==bottom && left==right) {
		if (i>0) matrix[top][left] = 'o';
		else matrix[top][left] = '.';
		return;
	}
	hadamard(top, (bottom-top)/2+top, left, (right-left)/2+left, i);
	hadamard(top, (bottom-top)/2+top, (right-left)/2+1+left, right, i);
	hadamard((bottom-top)/2+1+top, bottom, left, (right-left)/2+left, i);
	hadamard((bottom-top)/2+1+top, bottom, (right-left)/2+1+left, right, -i);
}

int main()
{
	int n;
	cin >> n;
	N = pow(2,n);
	matrix = new char*[N];
	for (int i=0; i<N; i++) {
		matrix[i] = new char[N];
	}
	hadamard(0,N-1,0,N-1,1);
	show();
}