#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int count;
	char s1[88], s2[88];
	char *p = s2;
	cout << "Nhap hai xau ki tu: ";
	cin >> s1 >> s2;
	int length1 = strlen(s1);
	int length2 = strlen(s2);
	if (length1>length2) count = 0;
	else {
		count = 0;
		for (int i=length1; i<=length2; i++) {
			char c = s2[i];
			s2[i] = '\0';
			if (strcmp(s1,p+i-length1)==0) count++;
			s2[i] = c;
		}
	}
	cout << "Xau thu nhat xuat hien " << count << " lan trong xau thu hai" << endl;
}