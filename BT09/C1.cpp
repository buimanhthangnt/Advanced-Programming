#include <iostream>

using namespace std;

int strlen(const char a[]) {
	int i=0;
	const char *p = a;
	while (*(p+i)!='\0') {
		i++;
	}
	return i;
}

char* reverse_char(const char a[]) {
	char *p = new char[strlen(a)+1];
	int j = 0;
	for (int i=(strlen(a)-1); i>=0; i--) {
		*(p+j) = a[i];
		j++;
	}
	*(p+j) = '\0';
	return p;
}

char* delete_char(const char a[], const char &c) {
	char *p = new char[strlen(a)+1];
	int j=0;
	for (int i=0; i<=strlen(a); i++) {
		if (a[i]!=c) {
			*(p+j) = a[i];
			j++;
		}
	}
	return p;
}

char* pad_right(const char a[], const int n) {
	char *p;
	if (n<strlen(a)) p = new char[strlen(a)+1];
	else p = new char[n+1];
	int max = (strlen(a)>n)? strlen(a):n;
	for (int i=0; i<max; i++) {
		if (i<strlen(a)) *(p+i) = a[i];
		else *(p+i) = ' ';
	}
	*(p+max) = '\0';
	return p;
}

char* pad_left(const char a[], const int n) {
	char *p;
	int max = (strlen(a)>n)? strlen(a):n;
	p = new char[max+1];
	int j = 0;
	for (int i=1; i<=n-strlen(a); i++) {
		*(p+j) = ' ';
		j++;
	}
	for (int i=j; i<max; i++) {
		*(p+i) = a[i-j];
	}
	*(p+max) = '\0';
	return p;
}

char* truncate(const char a[], const int n) {
	if (strlen(a)>n) {
		char *p = new char[n+1];
		for (int i=0; i<n; i++) *(p+i) = a[i];
		*(p+n) = '\0';
		return p;
	}
	else {
		char *p = new char[strlen(a)+1];
		for (int i=0; i<=strlen(a); i++) *(p+i) = a[i];
		return p;
	}
}

bool is_palindrome(char a[]) {
	bool b = true;
	char *p = a;
	for (int i=0; i<=(strlen(a)-1)/2; i++) {
		if (*(p+i)!=*(p+strlen(a)-1-i)) b = false;
	}
	return b;
}

char* trim_left(const char a[]) {
	char *p = new char[strlen(a)+1];
	int j=0;
	while (a[j]==' ') j++;
	for (int i=j; i<=strlen(a); i++) {
		*(p+i-j) = a[i];
	}
	return p;
}

char* trim_right(const char a[]) {
	char *p = new char[strlen(a)+1];
	int j=strlen(a)-1;
	while (a[j]==' ') j--;
	for (int i=0; i<=j; i++) {
		*(p+i) = a[i];
	}
	*(p+j+1) = '\0';
	return p;
}

void print(const char a[]) {
	const char *p = a;
	for (int i=0; i<strlen(a); i++) 
		cout << *(p+i);
	cout << endl;
	return;
}

int main()
{
	char a[32] = "We are friends";
	cout << "Mang ban dau: ";
	print(a);
	cout << endl;

	cout << "Reverse: " << reverse_char(a) ;
	cout << endl << endl;;

	cout << "Delete 'e': " << delete_char(a,'e');
	cout << endl << endl;

	cout << "Pad right: " << pad_right(a,22) << endl;
	cout << "Kich thuoc mang a sau khi pad la: " << strlen(pad_right(a,22)) << endl << endl;

	cout << "Pad left: " << pad_left(a,25) << endl;
	cout << "Kich thuoc mang a sau khi pad la: " << strlen(pad_left(a,25)) << endl << endl;

	cout << "Truncate: " << truncate(a,8) << endl;;
	cout << "Kich thuoc mang a sau khi cat la: " << strlen(truncate(a,8)) << endl << endl;

	char b[12] = "abcddcba";
	cout << "Mang b: ";
	print(b);
	if (is_palindrome(b)) cout << "Mang b la mang doi xung" << endl << endl;
	else cout << "Mang b KHONG la mang doi xung" << endl << endl;

	char c[22] = "    Hello World      ";
	cout << "Mang c: ";
	print(c);
	cout << "Kich thuoc mang c la: " << strlen(c) << endl<< endl;
	cout << "Trim left: " << trim_left(c) << endl;
	cout << "Kich thuoc mang c sau ham trim_left la: " << strlen(trim_left(c)) << endl << endl;

	cout << "Trim right: " << trim_right(c) << endl;
	cout << "Kich thuoc mang c sau ham trim_right la: " << strlen(trim_right(c)) << endl << endl;
}