#include <iostream>

using namespace std;

int strlen(char a[]) {
	int i=0;
	char *p = a;
	while (*(p+i)!='\0') {
		i++;
	}
	return i;
}

void reverse_char(char a[]) {
	char *p = a;
	for (int i=0; i<=(strlen(a)-1)/2; i++) {
		swap(*(p+i),*(p+strlen(a)-1-i));
	}
}

void delete_char(char a[], char c) {
	char *p = a;
	int count = 0;
	for (int i=0; i<=strlen(a); i++) {
		if (*(p+i)==c) count++;
		else {
			int j = i;
			while (j>i-count) {
				swap(*(p+j),*(p+j-1));
				j--;
			}
		}
	}
}

void pad_right(char a[], int n) {
	int length = strlen(a);
	char *p = a;
	for (int i=1; i<=n-length; i++) {
		*(p+length+i) = ' ';
		swap(*(p+length+i),*(p+length+i-1));
	}
}

void pad_left(char a[], int n) {
	int count = n - strlen(a);
	char* p = a;
	for (int i=strlen(a); i>=0; i--) {
		int j = 1;
		while (j<=count) {
			swap(*(p+i+j),*(p+i+j-1));
			j++;
		}
	}
	for (int i=0; i<count; i++)
		*(p+i) = ' ';
}

void truncate(char a[], int n) {
	char *p = a;
	if (n>=strlen(a)) return;
	else {
		*(p+n) = '\0';
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

void trim_left(char a[]) {
	char *p = a;
	int i = 0;
	while (*(p+i)==' ') i++;
	if (i==0) return;
	for (int j=i; j<=strlen(a); j++) {
		for (int k=0; k<i; k++)
			swap(*(p+j-k),*(p+j-k-1));
	}
	return;
}

void trim_right(char a[]) {
	char *p = a;
	int i=strlen(a);
	while (*(p+i-1)==' ') i--;
	a[i] = '\0';
	return;
}

void print(char a[]) {
	char *p = a;
	for (int i=0; i<strlen(a); i++) 
		cout << *(p+i);
	cout << endl;
	return;
}

int main()
{
	char a[32] = "sdggneirf erga eWgg";
	cout << "Mang ban dau: ";
	print(a);
	cout << endl;

	cout << "Reverse: ";
	reverse_char(a);
	print(a);
	cout << endl;

	cout << "Delete 'g': ";
	delete_char(a,'g');
	print(a); cout << endl;

	cout << "Pad right: ";
	pad_right(a,22);
	print(a);
	cout << "Kich thuoc mang a la: " << strlen(a) << endl << endl;

	cout << "Pad left: ";
	pad_left(a,25);
	print(a);
	cout << "Kich thuoc mang a la: " << strlen(a) << endl << endl;

	cout << "Truncate: ";
	truncate(a,20);
	print(a);
	cout << "Kich thuoc mang a la: " << strlen(a) << endl << endl;

	char b[12] = "abcddcba";
	cout << "Mang b: ";
	print(b);
	if (is_palindrome(b)) cout << "Mang b la mang doi xung" << endl << endl;
	else cout << "Mang b KHONG la mang doi xung" << endl << endl;

	cout << "Trim left: ";
	trim_left(a);
	print(a);
	cout << "Kich thuoc mang a la: " << strlen(a) << endl << endl;

	cout << "Trim right: ";
	trim_right(a);
	print(a);
	cout << "Kich thuoc mang a la: " << strlen(a) << endl << endl;
}