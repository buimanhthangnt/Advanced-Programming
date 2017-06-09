#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char letter[26];
	cin >> letter;
	int length = strlen(letter);
	for (int i=0; i<length; i++) {
		for (int j=0; j<length; j++) {
			cout << letter[i] << letter[j] << " ";
			for (int k=0; k<length; k++) {
				cout << letter[i] << letter[j] << letter[k] << " ";
			}
		}
	}
}
