

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<long long int> v = {a, b, c, d};
    long long sum = 0;
    bool flg = false;
    for (int i = 0; i < v.size(); ++i) {
            sum += v[i];
        }
    
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == sum - v[i]) {
            flg = true;
            break;
            }
        }
    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < v.size(); ++j) {
            if (i != j) {
                if (v[i] + v[j] == sum - v[i] - v[j]) {
                    flg = true;
                    break;
                    }
                }
            }
        }
    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;
    }
