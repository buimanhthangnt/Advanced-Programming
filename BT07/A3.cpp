#include <iostream>
using namespace std;

int count_even(int *array, int size) {
	int count = 0;
	for (int i=0; i<size; i++) {
		if (array[i]%2==0) count++;
	}
	return count;
}

int main()
{
	int a[10];
	for (int i=0; i<10; i++) {
		a[i] = i;
	}
	cout << "So luong so chan trong 5 phan tu dau tien la: " << count_even(a,5) << endl;
	cout << "So luong so chan trong 5 phan tu cuoi cung la: " << count_even(a+5,5) << endl;
}