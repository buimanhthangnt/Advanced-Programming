#include <iostream>

using namespace std;

int main()
{
	double a[4] = {0,1,2,3};
	double *cp = a;
	for (int i=0; i<4; i++) {
		cout << cp << " : " << *cp << endl;
		cp = cp + 2;
	}
}

//Khoang cach hai dia chi la 16, tuc la bang kich thuoc cua hai bien double
//output: 
//0x6ffe10 : 0
//0x6ffe20 : 2
//0x6ffe30 : 4.24399e-314
//0x6ffe40 : 0
//Do chenh lech gia tri cua hai con tro la 16 = 8*2