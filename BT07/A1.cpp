Loi con tro chua khoi tao
#include <iostream>

using namespace std;

int main()
{
	int *px;
	cout << px << endl;;
	cout << *px << endl;
	*px = 0;
}


Loi con truy cap con tro NULL
#include <iostream>

using namespace std;

int main()
{
	int *px = NULL;
	cout << px << endl;;
	cout << *px << endl;
	*px = 0;
}


Truy cap bo nho khong con hop le
#include <iostream>

using namespace std;

int* product(int m, int n) {
	int pro;
	pro = m*n;
	return &pro;
}

int main()
{
	int m = 2, n = 12;
	cout << *product(m,n);
}


Hang con tro
#include <iostream>
using namespace std;
int main()
{
	int a = 15, b = 20, c = 25;
	const int* pa = &a;
	int* const pb = &b;
	const int* const pc = &c;

	*pa += 1;   //loi
	*pb += 1;   //khong loi
	*pc += 1;   //loi

	pa = NULL;  //khong loi
	pb = NULL;  //loi
	pc = NULL;  //loi
}


Bien mang khong phai la con tro
#include <iostream>
using namespace std;
int main()
{
	int a[12];
	for (int i=0; i<12; i++) {
		a[i] = i;
	}
	int *p;
	p = NULL;
	a = NULL;   //loi
}