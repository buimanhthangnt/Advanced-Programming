#include <iostream>
using namespace std;
long factory(int x) {
	cout << "x = " << x << " at " << &x << endl;
	if (x==1) return 1;
	else return x*factory(x-1);
}

int main()
{
	int n;
	cin >> n;
	cout << factory(n);
}

// de tinh x!, chuong trinh chay lan luot tu x = 5 den x = 1 qua ham de quy
// x o trong ham factory(5) khac voi x trong ham factory(4)

// khi chay xong ham factory(5) trang thai chuong trinh
// duoc luu trong 1 ngan xep, sau do chay den ham factory(4), 
//lan luot nhu vay cho den khi gap dieu kien ket thuc de quy

//kich thuoc cua mot stack frame la (n-1)*sizeof(int)