

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    int ans_a = 0;
    int ans_b = 0;

    for (int i = 0; i <= 2; ++i) {
        ans_a += a % 10;
        a /= 10;
        ans_b += b % 10;
        b /= 10;
        }
    if (ans_a >= ans_b) cout << ans_a << endl;
    else cout << ans_b << endl;
    }
