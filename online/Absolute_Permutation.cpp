#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i=1; i<=t; i++) {
        long n, k;
        int *res;
        cin >> n >> k;
        bool *mark, passed = true;
        mark = new bool[n+1];
        res = new int[n+1];
        long count = 0;
        for (long j=1; j<=n; j++) mark[j] = false;
        for (long j=1; j<=n; j++) {
            if (j-k>0) {
                if (mark[j-k]==false) {
                    res[count] = j-k; count++;
                    mark[j-k] = true;
                }
                else {
                    if (j+k<=n && mark[j+k]==false) {
                        res[count] = j+k; count++;
                        mark[j+k] = true;
                    }
                    else passed = false;
                }
            }
            else {
                if (j+k<=n && mark[j+k]==false) {
                    res[count] = j+k; count++;
                    mark[j+k] = true;
                }
                else passed = false;
            }
        }
        if (passed==false) cout << -1 << endl;
        else {
            for (long j=0; j<count; j++) {
                cout << res[j] << " ";
            }
            cout << endl;
        }
    }
}