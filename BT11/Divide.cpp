#include <iostream>

using namespace std;

int divide(int a, int b);

int main()
{
	int x = 4, y = 2;
	cout << divide(x,y);
	x = 3; y = 0;
	cout << divide(x,y);
	return 0;
}

int divide(int a, int b) {
	return a/b;
}