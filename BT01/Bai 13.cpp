#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, y;
	float distance;
	cout << "Enter x, y: ";
	cin >> x >> y;
	distance = sqrt(x*x+y*y);
	cout << "The distance from (x,y) to (0,0) is "<< distance;
}
