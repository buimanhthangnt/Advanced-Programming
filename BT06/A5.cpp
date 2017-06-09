#include <iostream>

using namespace std;

long fibonaci(int n) {
	if (n==0) return 0;
	if (n==1) return 1;
	return fibonaci(n-1) + fibonaci(n-2);
}

int main()
{
	int n;
	cin >> n;
	// su dung vong lap 
	cout << "Tinh fibonaci su dung vong lap voi n = " << n << ": ";
	long f0 = 0, f1 = 1, f2, i = 2;
	while (i<=n) {
		f2 = f0 + f1;
		if (f0<f1) f0 = f2;
		else f1 = f2;
		i++;
	}
	cout << f2 << endl << endl;

	cout << "Tinh fibonaci bang de quy voi n = " << n << ": ";
	cout << fibonaci(n) << endl;
}