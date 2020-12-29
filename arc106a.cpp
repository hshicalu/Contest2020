

#include <bits/stdc++.h>
using namespace std;
using LL = __int128_t;

LL power(long long n, long long x) {
    LL res = 1;
    while(x--) {
        res *= n;
        }
    return res;
    }

int main(void) {
    long long n;
    cin >> n;
    long long int ans_t, ans_f;
    bool flg = false;

    for (int i = 1; i <= 37; ++i) {
        for (int j = 1; j <= 25; ++j) {
            if (power(3, i) + power(5, j) == n) {
                flg = true;
                ans_t = i;
                ans_f = j;
                break;
                }
            }
        }
    if (flg) cout << ans_t << " " << ans_f << endl;
    else cout << -1 << endl;
    }

