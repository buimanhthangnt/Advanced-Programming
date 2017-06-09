#include <iostream>

using namespace std;

#define s ' '
#define m '#'
#define CHAR_W 6
#define CHAR_H 6
#define SCREEN_W 70
#define SCREEN_H 20
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
char screen[SCREEN_H+1][SCREEN_W+1];

void draw(char c, int x, int y);
void draw(const char st[], int x, int y);
void display();
void fill_screen(char c);

int main() {
	fill_screen('.');
	draw("abcdegh", 2, 2);
	display();
	return 0;
}

void draw(char c, int x0, int y0) {
	int index = tolower(c) - 'a';
	if ( index < 0 || index >= N) return;
	for (int row = 0, y = y0; row < CHAR_H && y < SCREEN_H; row++, y++)
		for (int col = 0, x = x0; col < CHAR_W && x < SCREEN_W; col++, x++)
			if (x >= 0 && y >= 0)
				*(*(screen+y)+x) = *(*(*(font+index)+row)+col);
}

void draw(const char *st, int x, int y) {
	for (int i = 0; *(st+i) != '\0'; i++, x += CHAR_W+2)
		draw(*(st+i), x ,y);
}

void display() {
	for (int row = 0; row < SCREEN_H; row ++)
		cout << *(screen+row) << endl;
}

void fill_screen(char c) {
	for (int row = 0; row < SCREEN_H; row ++)
		for (int col = 0; col < SCREEN_W; col ++)
			*(*(screen+row)+col) = c;
}
