//abc181b

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    
    int n;
    cin >> n;
    vector<int> data(n);
    for (int i = 0; i < n; i++) {
        cin >> data.at(i);
        }
    int max = *max_element(data.begin(),data.end());
    vector<int> ans(max + 1);
    for (int i = 0; i < n; i++) {
        for (int j = 2; j < max + 1; j++) {
            if (data.at(i) % j == 0) {
                ans.at(j) += 1;        
                }
            }
        }
    ///for (int i = 0;i < max + 1; i++) {
        ///cout << ans.at(i) << endl;
        ///}
    int maxElementIndex = std::max_element(ans.begin(),ans.end()) - ans.begin();
    cout << maxElementIndex << endl;
    //int rslt = *max_element(ans.begin(),ans.end());     
    return 0;
    }
