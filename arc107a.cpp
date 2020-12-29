

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long a, b, c;
    cin >> a >> b >> c;
    long long ans_a = ((1 + a) * a / 2) % 998244353;
    long long ans_b = ((1 + b) * b / 2) % 998244353;
    long long ans_c = ((1 + c) * c / 2) % 998244353;
    cout << ((ans_a * ans_b) % 998244353 * ans_c) % 998244353 << endl;
    } 
