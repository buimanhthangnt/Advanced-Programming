#include <iostream>

using namespace std;

int main()
{
	char *s;
	char foo[] = "Hello World";
	s = foo;
	printf("s is %s\n",s);
	s[0] = foo[0];
	printf("s[0] is %c\n",s[0]);
	return 0;
}


//Chuong trinh ban dau(loi duoc ghi ben canh)

// #include <iostream>

// using namespace std;

// int main()
// {
// 	char **s;      su dung con tro tro toi con tro khong hop li
// 	char foo[] = "Hello World";
// 	*s = foo;		chua khoi tao con tro s
// 	printf("s is %s\n",s);
// 	s[0] = foo;
// 	printf("s[0] is %s\n",s[0]);		s[0] la mot ki tu, khong phai mot xau nen thay %s bang %c
// 	return 0;
// }