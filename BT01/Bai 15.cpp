#include <iostream>
using namespace std;
int main()
{
	string f0 = "a", f1 = "b", f2;
	int i;
	cout << "f0 = " << f0 << endl;
	cout << "f1 = " << f1 << endl;
	for (i=2; i<=10; i++) {
		if (i%2==0) {
			f2 = f1 + f0;
		}
		else {
			f2 = f0 + f1;
		}
		cout << "f" << i << " = " << f2 << endl;
		if (i%2==0) {
			f0 = f2;
		}
		else {
			f1 = f2;
		}
	}
}
