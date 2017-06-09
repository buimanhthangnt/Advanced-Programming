#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

bool searchUseLoops(int key, int a[], int low, int high) {
	int mid;
	bool found = false;
	while (low<=high) {
		mid = (low+high)/2;
		if (a[mid] == key) {
			found = true;
			break;
		}
		else {
			if (a[mid]>key) high = a[mid-1];
			else low = a[mid+1];
		}
		if (found==true) break;
	}
	if (found==true) return true;
	else return false;
}

bool searchUseRecursion(int key, int a[], int low, int high) {
	if (low>high) return false;
	int mid = (low + high)/2;
	if (a[mid]==key) return true;
	if (a[mid]>key) high = a[mid-1];
	if (a[mid]<key) low = a[mid+1];
	return searchUseRecursion(key,a,low,high);
}

int main()
{
	int a[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int k1 = 1, k2 = 6, k3 = 12, k4 = 10, k5 = 22;
	if (searchUseRecursion(k1,a,0,11)) cout << "Da tim thay" << endl;
	if (searchUseRecursion(k2,a,0,11)) cout << "Da tim thay" << endl;
	if (searchUseRecursion(k3,a,0,11)) cout << "Da tim thay" << endl;
	if (searchUseRecursion(k4,a,0,11)) cout << "Da tim thay" << endl;
	if (searchUseRecursion(k5,a,0,11)) cout << "Da tim thay" << endl;

	if (searchUseLoops(k1,a,0,11)) cout << "Da tim thay" << endl;
	if (searchUseLoops(k2,a,0,11)) cout << "Da tim thay" << endl;
	if (searchUseLoops(k3,a,0,11)) cout << "Da tim thay" << endl;
	if (searchUseLoops(k4,a,0,11)) cout << "Da tim thay" << endl;
	if (searchUseLoops(k5,a,0,11)) cout << "Da tim thay" << endl;
}