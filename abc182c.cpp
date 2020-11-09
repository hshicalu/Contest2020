//abc181c

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    
    int n;
    cin >> n;
    string input = to_string(n);
    int num = input.length();
    vector<int> data(num+1);
    int c1 = 0;
    int c2 = 0;
    int sum = 0;
    for (int i = 1; i < num + 1; i++) {
        //cout << pow(10,i) << endl;
        long long int a = pow(10,i);
        long long int b = pow(10,i-1);
        data.at(i) = ((n % a) - (n % b)) / b;
        sum += data.at(i);
        //cout << data.at(i) << endl;
        if (data.at(i) % 3 == 1) {
            c1 += 1;
            }
        else if (data.at(i) % 3 == 2) {
            c2 += 1;
            }  
        }
    
    if (sum % 3 == 0) {
        cout << 0 << endl;
        }
    else if (sum % 3  == 1) {
        if (c1 > 0 && num > 1) {
            cout << 1 << endl;
            }
        else if (c1 == 0 && c2 >= 2 && num > 2) {
            cout << 2 << endl;
            }
        else {
            cout << -1 << endl;
            }
        }
    else {
        if (c2 > 0 && num > 1) {
            cout << 1 << endl;
            }
        else if (c2 == 0 && c1 >= 2 && num > 2) {
            cout << 2 << endl;
            }
        else {
            cout << -1 << endl;
            }
        }

    return 0;
    }

