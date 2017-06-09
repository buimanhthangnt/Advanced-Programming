#include <iostream>

using namespace std;

int N, K;
int existed[27];

void show() {
	char c;
	for (int i=1; i<=K; i++) {
		int j = 1;
		while (existed[j]!=i) j++;
		c = j + 96;
		cout << c;
	}
	cout << endl;
}

void list(int i) {
	if (i==K+1) {
		show();
		return;
	}
	for (int j=1; j<=N; j++) {
		if (existed[j]==0) {
			existed[j] = i;
			list(i+1);
			existed[j] = 0;
		}
	}
}

int main()
{
	cin >> N >> K;
	cout << endl;
	for (int i=1; i<=26; i++) {
		existed[i] = 0;
	}
	list(1);
}