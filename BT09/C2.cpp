#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

#define s ' '
#define m '#'
#define CHAR_W 6
#define CHAR_H 6
#define N 26

char font[N][CHAR_W][CHAR_H] = {
                        {s,s,m,m,s,s,
				   		 s,m,s,s,m,s,
				   		 m,m,m,m,m,m,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m},
				   	    {m,m,m,m,m,s,
				   		 m,s,s,s,s,m,
				   		 m,m,m,m,m,s,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 m,m,m,m,m,s},
				   	    {s,m,m,m,m,s,
				   	     m,s,s,s,s,m,
				   		 m,s,s,s,s,s,
				   		 m,s,s,s,s,s,
				   		 m,s,s,s,s,m,
				   		 s,m,m,m,m,s},
				   		{m,m,m,m,s,s,
				   		 m,s,s,s,m,s,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,m,s,
				   		 m,m,m,m,s,s},
				   		{m,m,m,m,m,m,
				   		 m,s,s,s,s,s,
				   		 m,m,m,m,m,s,
				   		 m,s,s,s,s,s,
				   		 m,s,s,s,s,s,
					   	 m,m,m,m,m,m},
				  		{m,m,m,m,m,m,
				  		 m,s,s,s,s,s,
				   		 m,m,m,m,m,s,
				   		 m,s,s,s,s,s,
				   		 m,s,s,s,s,s,
					   	 m,s,s,s,s,s},
					  	{s,m,m,m,m,s,
				 		 m,s,s,s,s,m,
				   		 m,s,s,s,s,s,
				   		 m,s,s,m,m,m,
				   		 m,s,s,s,s,m,
				   		 s,m,m,m,m,s},
					   	{m,s,s,s,s,m,
						 m,s,s,s,s,m,
				   		 m,m,m,m,m,m,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m},
				   		{s,m,m,m,s,s,
				   		 s,s,m,s,s,s,
				   		 s,s,m,s,s,s,
				   		 s,s,m,s,s,s,
				   		 s,s,m,s,s,s,
					   	 s,m,m,m,s,s},
						{s,s,m,m,m,s,
				   		 s,s,s,m,s,s,
				   		 s,s,s,m,s,s,
				   		 s,s,s,m,s,s,
				   		 s,m,s,m,s,s,
				   		 s,s,m,m,s,s},
				   		{m,s,s,s,s,m,
				   		 m,s,s,s,m,s,
				   		 m,m,m,m,s,s,
				   		 m,s,s,m,s,s,
					   	 m,s,s,s,m,s,
						 m,s,s,s,s,m},
				   		{s,m,s,s,s,s,
				   		 s,m,s,s,s,s,
				   		 s,m,s,s,s,s,
				   		 s,m,s,s,s,s,
				   		 s,m,s,s,s,s,
				   		 s,m,m,m,m,m},
				   		{m,s,s,s,s,m,
				   		 m,m,s,s,m,m,
				   		 m,s,m,m,s,m,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m},
				   		{m,s,s,s,s,m,
				   		 m,m,s,s,s,m,
				   		 m,s,m,s,s,m,
				   		 m,s,s,m,s,m,
				   		 m,s,s,s,m,m,
				   		 m,s,s,s,s,m},
				   		{s,m,m,m,m,s,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 s,m,m,m,m,s},
				   		{m,m,m,m,m,s,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 m,m,m,m,m,s,
				   		 m,s,s,s,s,s,
				   		 m,s,s,s,s,s},
				   		{s,m,m,m,m,s,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 m,s,m,m,s,m,
				   		 m,s,s,s,m,m,
				   		 s,m,m,m,m,s},
				   		{m,m,m,m,m,s,
				   		 m,s,s,s,s,m,
				   		 m,m,m,m,m,s,
				   		 m,s,m,s,s,s,
				   		 m,s,s,m,s,s,
				   		 m,s,s,s,m,s},
				   		{s,m,m,m,m,m,
				   		 m,s,s,s,s,s,
				   		 s,m,m,m,m,s,
				   		 s,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 s,m,m,m,m,s},
				   		{m,m,m,m,m,m,
				   		 s,s,m,m,s,s,
				   		 s,s,m,m,s,s,
				   		 s,s,m,m,s,s,
				   		 s,s,m,m,s,s,
				   		 s,s,m,m,s,s},
				   		{m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 s,m,m,m,m,s},
				   		{m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 s,m,s,s,m,s,
				   		 s,s,m,m,s,s},
				   		{m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 m,s,m,m,s,m,
				   		 m,s,m,m,s,m,
				   		 m,m,s,s,m,m},
				   		{m,s,s,s,s,m,
				   		 s,m,s,s,m,s,
				   		 s,s,m,m,s,s,
				   		 s,m,s,s,m,s,
				   		 m,s,s,s,s,m,
				   		 m,s,s,s,s,m},
				   		{m,s,s,s,s,m,
				   		 m,s,s,s,s,m,
				   		 s,m,s,s,m,s,
				   		 s,s,m,m,s,s,
				   		 s,m,s,s,s,s,
				   		 m,s,s,s,s,s},
				   		{m,m,m,m,m,m,
				   		 s,s,s,s,m,s,
				   		 s,s,s,m,s,s,
				   		 s,s,m,s,s,s,
				   		 s,m,s,s,s,s,
				   		 m,m,m,m,m,m}};

void draw(char c, int x, int y, char** screen, int SCREEN_H, int SCREEN_W);
void draw(const char st[], int x, int y, char** screen, int SCREEN_H, int SCREEN_W);
void display(char** screen, int SCREEN_H, int SCREEN_W);
void fill_screen(char c, char** screen, int SCREEN_H, int SCREEN_W);

int calculate(const char a[]) {
	int result = 0;
	int i=0;
	while (a[i]!='\0') {
		result = result + (a[i]-48)*pow(10,strlen(a)-1-i);
		i++;
	}
	return result;
}

int main(int argc, char* argv[]) {
	int r = calculate(argv[1]);
	int c = calculate(argv[2]);
	char **screen;
	screen = new char*[r+1];
	for (int i=0; i<=r; i++) {
		screen[i] = new char[c+1];
	}
	fill_screen('.',screen,r,c);
	draw("abcdegh", 2, 2, screen, r, c);
	display(screen,r,c);
	return 0;
}

void draw(char c, int x0, int y0, char** screen, int SCREEN_H, int SCREEN_W) {
	int index = tolower(c) - 'a';
	if ( index < 0 || index >= N) return;
	for (int row = 0, y = y0; row < CHAR_H && y < SCREEN_H; row++, y++)
		for (int col = 0, x = x0; col < CHAR_W && x < SCREEN_W; col++, x++)
			if (x >= 0 && y >= 0)
				*(*(screen+y)+x) = *(*(*(font+index)+row)+col);
}

void draw(const char st[], int x, int y, char** screen, int SCREEN_H, int SCREEN_W){
	for (int i = 0; *(st+i) != '\0'; i++, x += CHAR_W+2)
		draw(*(st+i), x ,y,screen,SCREEN_H,SCREEN_W);
}

void display(char** screen, int SCREEN_H, int SCREEN_W) {
	for (int row = 0; row < SCREEN_H; row ++)
		cout << *(screen+row) << endl;
}

void fill_screen(char c, char** screen, int SCREEN_H, int SCREEN_W) {
	for (int row = 0; row < SCREEN_H; row ++)
		for (int col = 0; col < SCREEN_W; col ++)
			*(*(screen+row)+col) = c;
}
