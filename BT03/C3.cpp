#include <iostream> 

using namespace std;

bool test(long N) {
	int element[7];
	int i= 0;
	bool check = true;
	while (N>0) {
		i++;
		element[i] = N % 10;
		N = N / 10;
	}
	for (int j=1; j<=i/2; j++) {
		if (element[j]!=element[i+1-j]) {
			check = false;
			break;
		}
	}
	if (check==true) return true;
	else return false;
}

int main()
{
	int T;
	long *A, *B;
	cin >> T;
	A = new long[T];
	B = new long[T];
	for (int i=0; i<T; i++) {
		cin >> A[i] >> B[i];
	}
	cout << endl;
	for (int i=0; i<T; i++) {
		long count = 0;
		for (int j=A[i]; j<=B[i]; j++) {
			if (test(j)) count ++;
		}
		cout << count << endl;
	}
}
