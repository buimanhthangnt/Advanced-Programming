#include <iostream>

using namespace std;

struct String
{
	long n;
	char *str;
	String(const char* a) {
		int i=0;
		while (*(a+i)!='\0') i++;
		n = i;
		str = new char[n+1];
		for (int j=0; j<=n; j++) str[j] = *(a+j);
	}
	~String() {            // Ham destructor tu dong duoc goi khi bien struct khong con su dung nua
		delete [] str;     // Khong can phai goi lenh delete, va cung khong the goi lenh delete khi bien String khong phai con tro
		cout << "Da giai phong bo nho";
	}
	void print() const {
		for (int i=0; i<n; i++) {
			cout << str[i];
		}
	}
	void append(const char* a) {
		char *tmp;
		int j = 0;
		while (*(a+j)!='\0') j++;
		tmp = new char[n+j+1];
		for (int i=0; i<n; i++) {
			*(tmp+i) = str[i];
		}
		for (int i=n; i<=n+j; i++) {
			*(tmp+i) = *(a+i-n);
		}
		delete [] str;
		str = tmp;
		n = n + j;
	}
};

int main()
{
	String s("Hello");
	s.print();
	cout << endl;
	s.append(" World");
	s.print();
	cout << endl;
}

//Output

//Hello
//Hello World
//Da giai phong bo nho