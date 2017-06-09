#include <iostream>

using namespace std;

int main()
{
	char* a = new char[10];
	char* c = a + 3;
	for (int i = 0; i < 9; i++) a[i] = 'a'; 
	a[9] = '\0';
	cerr <<"a: " << "-" << a << "-" << endl;
	cerr <<"c: " << "-" << c << "-" << endl;
	delete c;
	cerr << "a after deleting c:" << "-" << a << "-" << endl;
}

//Lenh cerr cuoi cung khong in ra nhu mong muon

//Ta chi duoc phep xoa c khi c tro den a, khong duoc phep xoa c khi c tro den vi tri khac
//Chi xoa dc vung bo nho con tro tro den duoc khoi tao bang new, o day la a, do do khong the xoa duoc a+3