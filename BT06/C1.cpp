#include <iostream>
#include <conio.h>

using namespace std;

char map[88][88];
int N;

bool checkThreat(int x, int y) {
	bool threat = false;
	for (int i=1; i<=N; i++) {
		if (map[x][i]=='*' && i!=y) threat = true;
		if (map[i][y]=='*' && i!=x) threat =  true;
	}
	for (int i=-N; i<=N; i++) {
		if (x+i>0 && x+i<=N && y+i>0 && y+i<=N) 
			if (map[x+i][y+i]=='*' && i!=0) threat = true;
		if (x-i>0 && x-i<=N && y+i>0 && y+i<=N) 
			if (map[x-i][y+i]=='*' && i!=0) threat = true;
	}
	return threat;
}

void showMap() {
	for (int i=1; i<=N; i++) {
		for (int j=1; j<=N; j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void arrange(int i) {
	if (i==N+1) {
		showMap();
		return ;
	}
	for (int j=1; j<=N; j++) {
		if (!checkThreat(i,j)) {
			map[i][j] = '*';
			arrange(i+1);
			map[i][j] = '.';
		}
	}
}

int main()
{
	cin >> N;
	cout << endl;
	for (int i=1; i<88; i++) {
		for (int j=1; j<88; j++) {
			map[i][j] = '.';
		}
	}
	arrange(1);
}