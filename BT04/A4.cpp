#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	int *a, N;
	cin >> N;
	clock_t begin = clock();
	srand (time(NULL));
	a = new int[N+1];
	for (int i=0; i<N; i++) {
		a[i] = rand() + 1;
	}
//	cout << "Mang ban dau: ";
//	for (int i=0; i<=N-1; i++) {
//		cout << a[i] << " ";
//	}
//	cout << endl << endl;
	for (int i=N-1; i>=0; i--) {
		bool swapped = false;
		for (int j=0; j<=i-1; j++) {
			if (a[j]>a[j+1]) {
				swap(a[j],a[j+1]);
				swapped = true;
			}
		}
		if (!swapped) break;
	}
	clock_t end = clock();
	double elapsedSecs = double(end - begin) / CLOCKS_PER_SEC;
	cout << elapsedSecs;
//	cout << "Mang da sap xep: ";
//	for (int i=0; i<N; i++) {
//		cout << a[i] << " ";
//	}
}
