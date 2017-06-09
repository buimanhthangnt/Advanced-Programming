#include <iostream>

using namespace std;

void swap_pointers(char* &x, char* &y) {
	char *tmp;
	tmp = x;
	x = y;
	y = tmp;
}

int main()
{
	char a[] = "I should print second";
	char b[] = "I should print first";
	char *s1 = a;
	char *s2 = b;
	swap_pointers(s1,s2);
	cout << "s1 is " << s1 << endl;
	cout << "s2 is " << s2 << endl;
	return 0;
}

//Chuong trinh chay khong dung boi vi
//con tro dc truyen vao ham theo kieu pass-by-value
//nen khi co thay doi x vs y trong ham swap_pointers 
//thi con tro s1 va s2 o ham main khong anh huong

//De chuong trinh chay dung thi ta sua tham so o ham swap_pointers
//bang cach them &, de tham so dc truyen vao duoi dang tham chieu

//Mot cach khac la su dung con tro toi con tro de swap dia chi cua hai con tro