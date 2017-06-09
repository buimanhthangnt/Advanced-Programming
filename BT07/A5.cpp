#include <iostream>

using namespace std;

char* weird_string() {
	char c[] = "12345";
	return c;
}

int main()
{
	cout << weird_string();
}

// Loi: The process cannot access the file because it is being used by another process
// Chuong trinh canh bao tra ve mot dia chi dia phuong "local address"
//Output cua chuong trinh: The process cannot access the file because it is being used by another process
//Chuonng trinh truy cap vao bo nho dang duoc su dung boi mot chuong trinh khac