

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    sort(a.begin(), a.end());

    vector<long long> s(n + 1, 0);
    for (int i = 0; i < n; ++i) s[i + 1] = s[i] + a[i];

    long long res = 0;
    for (int i = 0; i < n; ++i) res += a[i] * i - s[i];

    cout << res << endl;

    }
