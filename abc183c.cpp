
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N,K;
    cin >> N >> K;
    
    vector<vector <int> > t(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int tij;
            cin >> t[i][j];
            }
        }
    
    vector<int> v;
    for(int i = 0; i < N; ++i) v.push_back(i);

    int ans = 0;
    
    do{
        int dist = 0;
        for (int i = 0; i < N ; ++i) {
            dist += t[v[i]][v[(i+1)%N]];
            }
        if (dist == K) ans++;     
    }while(next_permutation(v.begin()+1,v.end()));
    
    cout << ans << endl;
    return 0;
    }

