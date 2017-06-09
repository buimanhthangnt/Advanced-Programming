#include <iostream>

using namespace std;

int n;
bool b[222];

void show() {
	cout << "[";
	for (int i=1; i<=n; i++) {
		if (b[i]==true) {
			int trueRemain = 0;
			cout << i;
			for (int j=i; j<=n; j++) 
				if (b[j]==true) trueRemain++;
			if (trueRemain>1) cout << ",";
		}
	}
	cout << "]" << endl;
}

void subsets(int i) {
	if (i==n+1) {
		show();
		return;
	}
	b[i] = true;
	subsets(i+1);
	b[i] = false;
	subsets(i+1);
}

int main()
{
	cin >> n;
	cout << endl << endl;
	subsets(1);
}