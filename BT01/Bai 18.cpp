#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x1, y1, x2, y2, dt;
	cout << "Nhap toa do (x1,y1): ";
	cin >> x1 >> y1;
	cout << "Nhap toa do (x2,y2): ";
	cin >> x2 >> y2;
	dt = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	cout << "Khoang cach tu (x1,y1) den (x2,y2) la: " << dt;
}
