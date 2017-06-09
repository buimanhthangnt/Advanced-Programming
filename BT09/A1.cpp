#include <iostream>
#include <cstring>

using namespace std;

char* concat(const char* s1, const char* s2) {
	char* s;
	s = new char[strlen(s1)+strlen(s2)];
	strcpy(s,s1);
	for (int i=0; i<=strlen(s2); i++) {
		s[i+strlen(s1)] = s2[i];
	}
	return s;
}

int main()
{
	char s1[6] = "Hello", s2[7] = " World";
	cout << concat(s1,s2);
}