#include <iostream>

using namespace std;

int main()
{
	int a[4] = {0,1,2,3};
	int *cp = a;
	for (int i=0; i<4; i++) {
		cout << cp << " : " << *cp << endl;
		cp++;
	}
}

//Tinh duoc kich thuoc kieu int la 4 byte