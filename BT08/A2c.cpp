#include <iostream>

using namespace std;

int main()
{
	double a[4] = {0,1,2,3};
	double *cp = a;
	for (int i=0; i<4; i++) {
		cout << cp << " : " << *cp << endl;
		cp++;
	}
}

//output la:
//0x6ffe10 : 0
//0x6ffe18 : 1
//0x6ffe20 : 2
//0x6ffe28 : 3
//Tinh duoc kich thuoc kieu double la 8 byte