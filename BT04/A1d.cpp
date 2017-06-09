#include <iostream>
#include <ctime>
#include <cstdlib>
const int N = 100;
using namespace std;
int main()
{
	srand (time(NULL));
	int a[N];
	for (int i=0; i<N; i++) {
		a[i] = rand() %100 + 1;
	}
	cout << "Mang ban dau: ";
	for (int i=0; i<=N-1; i++) {
		cout << a[i] << " ";
	}
	cout << endl << endl;
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
	cout << "Mang da sap xep: ";
	for (int i=0; i<N; i++) {
		cout << a[i] << " ";
	}
}
