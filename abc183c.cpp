

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

void printVector(const vector<int>& vec) {
    for (int value : vec) {
        //cout << value << " ";
    }
    //cout << endl;
}

int main(void) {
    int N,K;
    cin >> N >> K;

    vector<int> data(N, vector<int>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j ++) {
            if (i != j) {
                int T;
                cin >> T;
                data.at(i).at(j) = T;
                }
            }
        }
    vector<int> nums(N);
    iota(nums.begin(),nums.end(),0);
    do{
        printVector(nums);
        } while(next_permutation(nums.begin(), nums.end()));
    
    int dist = 0;
    for (int i = 0;i < N-1;i++) {
        dist += data.at(i).at(i+1):
        if (dist == K) {
            cnt += 1;
            }
        }
    cout << cnt << endl;
    return 0;
    }
