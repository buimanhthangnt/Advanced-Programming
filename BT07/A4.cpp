#include <iostream>

using namespace std;

void search(int key,int *p, int low, int high) {
	if (low>high) {
		cout << "Khong tim thay";
		return;
	}
	int mid = (low+high)/2;
	if (*(p+mid)==key) {
		cout << "Da tim thay";
		return;
	}
	if (*(p+mid)>key) search(key,p,low,mid-1);
	else search(key,p,mid+1,high);
}

int main()
{
	int n;
	int a[22];
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	cout << "Nhap cac phan tu: ";
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	cout << "Nhap phan tu de tim kiem: ";
	int key, *p;
	cin >> key;
	cout << endl;
	p = a;
	search(key,p,0,n-1);
}