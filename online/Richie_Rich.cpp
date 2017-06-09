#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    long n, k;
    char *s;
    cin >> n >> k;
    bool *mark;
    s = new char[n+2];
    mark = new bool[n+2];
    for (int i=0; i<=n; i++) mark[i] = false;
    cin >> s;
    long l = strlen(s);
    long notSame = 0;
    for (long i=0; i<l/2; i++) {
        if (s[i]!=s[l-1-i]) notSame++;
    }
    if (notSame>k) cout << -1;
    else {
        for (int i=0; i<l/2; i++) {
            if (s[i]!=s[l-1-i]) {
                if (s[i]>s[l-1-i]) {
                    s[l-1-i] = s[i]; mark[l-1-i] = true;
                }
                else {
                    s[i] = s[l-1-i]; mark[i] = true;
                }
                k--;
            }
        }
        int j = 0;
        while (k>0 && j<(l+1)/2) {
            if (s[j]==s[l-1-j]) {
                if (j==(l+1)/2-1 && l%2==1) {
                    if (s[j]!='9') {
                        s[j] = '9';
                    }
                }
                else {
                    if (s[j]!='9') {
                        if (!mark[j] && !mark[l-1-j]) {
                            if (k>1) {
                                s[j] = '9'; s[l-1-j] = '9';
                                k -= 2;
                            }
                        }
                        else {
                            s[j] = '9'; if (mark[j]==false) k--;
                            s[l-1-j] = '9'; if (mark[l-1-j]==false) k--;
                        }
                    }
                }
            }
            j++;
        }
        cout << s;
    }
}