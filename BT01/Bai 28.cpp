#include <iostream>
using namespace std;
int main()
{
	int i;
	for (i=0; i<24; i++) {
		if (i==0) cout << "12 midnight";
		if (i==12) cout << "12 noon";
		if (i>0 && i<12) cout << i << "am";
		if (i>12) cout << i-12 << "pm";
		if (i!=23) cout << endl;
	}
}
