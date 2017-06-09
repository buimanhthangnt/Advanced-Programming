#include <iostream>

using namespace std;

int N, K;
bool existed[27];

void show() {
	char c;
	for (int i=1; i<=N; i++) {
		if (existed[i]==true) {
			c = i + 96;
			cout << c;
		}
	}
	cout << endl;
}

void list(int i, int low) {
	if (i==K+1) {
		show();
		return;
	}
	for (int j=low+1; j<=N-K+i; j++) {
		existed[j] = true;
		list(i+1,j);
		existed[j] = false;
	}
}

int main()
{
	cin >> N >> K;
	cout << endl;
	for (int i=1; i<=26; i++) {
		existed[i] = false;
	}
	list(1,0);
}