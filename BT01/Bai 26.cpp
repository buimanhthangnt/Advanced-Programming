#include <iostream>
using namespace std;
int main()
{
	int n, min, max, i, sum = 0;
	int *a;
	float average;
	cout << "Nhap so n: ";
	cin >> n;
	cout << "Nhap " << n << " so nguyen: ";
	a = new int[n];
	cin >> a[0];
	max = a[0];
	min = a[0];
	sum = a[0];
	for (i=1; i<=n-1; i++) {
		cin >> a[i];
		sum += a[i];
		if (a[i]>max) {
			max = a[i];
		}
		if (a[i]<min) {
			min = a[i];
		}
	}
	average = (float)sum/n;
	cout << "Average = " << average << endl;
	cout << "Max = " << max << endl;
	cout << "Min = " << min;
}
