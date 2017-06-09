#include <iostream>
using namespace std;
int main()
{
	int N;
	while (1)
	{
		cout << "Nhap N: ";
		cin >> N;
		if (N>=0 && N%5==0) {
			cout << "N / 5 = " << N/5 << endl;
		}
		else {
			cout << -1 << endl;
			break;
		}
	}
	cout << "Bye";
}
