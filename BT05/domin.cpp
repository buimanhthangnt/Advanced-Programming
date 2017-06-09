#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int m, n, k;
int map[88][88];
bool show[88][88];

void spread(int x, int y) {
	show[x][y] = true;
	if (map[x][y]!=0) return ;
	if (x-1>0) if (show[x-1][y]==false) spread(x-1,y);
	if (x+1<=m) if (show[x+1][y]==false) spread(x+1,y);
	if (y-1>0) if (show[x][y-1]==false) spread(x,y-1);
	if (y+1<=n) if (show[x][y+1]==false) spread(x,y+1);
	if (y+1<=n && x+1<=m) if (show[x+1][y+1]==false) spread(x+1,y+1);
	if (y+1<=n && x-1>0) if (show[x-1][y+1]==false) spread(x-1,y+1);
	if (y-1>0 && x+1<=m) if (show[x+1][y-1]==false) spread(x+1,y-1);
	if (y-1>0 && x-1>0) if (show[x-1][y-1]==false) spread(x-1,y-1);
}

void showGame() {
	cout << "     ";
	for (int i=1; i<=n; i++) 
		(i<10)? cout << i << "  " : cout << i << " ";
	cout << endl << endl;
	for (int i=1; i<=m; i++) {
		(i<10)? cout << i << "    " : cout << i << "   ";
		for (int j=1; j<=n; j++) {
			if (show[i][j]==false) cout << "#  ";
			else {
				if (map[i][j]==0) cout << ".  ";
				else cout << map[i][j] << "  ";
			}
		} cout << endl;
	} cout << endl << endl;
}

bool endCondition() {
	int count = 0;
	for (int i=1; i<=m; i++) {
		for (int j=1; j<=n; j++) {
			if (show[i][j]==true && map[i][j]!=-1) count++;
		}
	}
	if (count==m*n-k) return true;
	else return false;
}

void printMap() {
	cout << "     ";
	for (int i=1; i<=n; i++) 
		(i<10)? cout << i << "  " : cout << i << " ";
	cout << endl << endl;
	for (int i=1; i<=m; i++) {
		(i<10)? cout << i << "    " : cout << i << "   ";
		for (int j=1; j<=n; j++) {
			if (map[i][j]==-1) cout << "*  ";
			else cout << map[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl << endl;
}


int main()
{
	srand (time(NULL));
	cin >> m >> n >> k;
	if (k>=m*n || m>80 || n>80 || m<1 || n<1 || k<1) {
		while (k>=m*n || m>80 || n>80 || m<1 || n<1 || k<1) {
			cout << "Input is invalid, reenter: ";
			cin >> m >> n >> k;
		}
	}
	int probability = (m*n)/k+8;
	int count = k;
	while (count>0) {
		for (int i=1; i<=m && count>0; i++) {
			for (int j=1; j<=n && count>0; j++) {
				if (rand()%probability==0 && map[i][j]!=-1) {
					map[i][j] = -1;
					count--;
				}
			}
		}
	}
	for (int i=1; i<=m; i++) {
		for (int j=1; j<=n; j++) {
			if (map[i][j]==-1) {
				if (i-1>0 && j-1>0) if (map[i-1][j-1]!=-1) map[i-1][j-1]++;
				if (i-1>0 && j+1<=n) if (map[i-1][j+1]!=-1) map[i-1][j+1]++;
				if (i-1>0) if (map[i-1][j]!=-1) map[i-1][j]++;
				if (j-1>0) if (map[i][j-1]!=-1) map[i][j-1]++;
				if (j+1<=n) if (map[i][j+1]!=-1) map[i][j+1]++;
				if (i+1<=m && j-1>0) if (map[i+1][j-1]!=-1) map[i+1][j-1]++;
				if (i+1<=m) if (map[i+1][j]!=-1) map[i+1][j]++;
				if (i+1<=m && j+1<=n) if (map[i+1][j+1]!=-1) map[i+1][j+1]++;
			} 
		}
	}
	for (int i=1; i<=m; i++) {
		for (int j=1; j<=n; j++) {
			show[i][j] = false;
		}
	}
	int x, y;
	bool pass = true;
	while (endCondition()==false) {
		showGame();
		cin >> x >> y;
		if (x<1 || y<1 || x>m || y>n) {
			while (x<1 || y<1 || x>m || y>n) {
				cout << "Input is invalid, reenter: ";
				cin >> x >> y;
			}
		}
		if (map[x][y]==-1) {
			pass = false;
			printMap();
			pass = false;
		}
		if (pass==false) break;
		else {
			if (show[x][y]==false) {
				spread(x,y);
			}

		}
	}
	if (pass==false) cout << "YOU ARE DEAD!";
	else {
		printMap();
		cout << "YOU WIN!";
	}
}
