#include <iostream>
#include <cmath>

using namespace std;

int a[5];
int show[5];
static int count = 0;

int cxor(int x, int y) {
    int res = 0;
    int bit;
    if (x>y) bit = log2(x) + 1;
    else bit = log2(y) + 1;
    for (int i=0; i<=bit; i++) {
        res += pow(2,i)*(((int)(x/pow(2,i))%2 + (int)(y/pow(2,i))%2)%2);
    }
    return res;
}

bool check() {
    if (show[1]==show[2] && show[3]==show[4]) return false;
    int res = cxor(show[1],show[2]);
    res = cxor(res,show[3]);
    res = cxor(res,show[4]);
    if (res==0) return false;
    else return true;
}

int main()
{
    cin >> a[1] >> a[2] >> a[3] >> a[4];
    for (int i=1; i<4; i++) {
        for (int j=i+1; j<=4; j++) {
            if (a[i]>a[j]) swap(a[i],a[j]);
        }
    }
    
    for (int i=1; i<=a[1]; i++) {
        show[1] = i;
        for (int j=i; j<=a[2]; j++) {
            show[2] = j;
            for (int k=j; k<=a[3]; k++) {
                show[3] = k;
                for (int l=k; l<=a[4]; l++) {
                    show[4] = l;
                    if (check()) count++;
                }
            }
        }
    }
    cout << count;
}