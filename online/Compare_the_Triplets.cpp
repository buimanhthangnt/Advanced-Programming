#include <iostream>

using namespace std;

int main()
{
    int a[3], b[3];
    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];
    int ascore = 0, bscore = 0;
    for (int i=0; i<3; i++) {
        if (a[i]>b[i]) ascore++;
        else {
            if (b[i]>a[i]) bscore++;
        }
    }
    cout << ascore << " " << bscore;
}