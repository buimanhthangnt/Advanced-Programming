#include <iostream>

using namespace std;

int main()
{
	int a = 12;
	int *p = &a;
	cout << *p;
	delete p;
}

//Chuong trinh bien dich van dung
//Nhung khi chay thi chuong trinh bi loi

//Khong duoc phep xoa vung bo nho khong do nguoi lap trinh tao ra