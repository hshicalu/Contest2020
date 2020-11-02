

#include <bits/stdc++.h>
using namespace std;


int main(void) {
    int N;
    cin >> N;

    vector< vector<int> > data(N, vector<int>(2));

    for (int i = 0; i < N; i++) {
        int x,y;
        cin >> x >> y;    
        data.at(i).at(0) = x;
        data.at(i).at(1) = y;
        }
    
    int n = (N * (N - 1)) / 2;
    vector<int> distance;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j) {
                int x_diff = data.at(i).at(0) - data.at(j).at(0);
                int y_diff = data.at(i).at(1) - data.at(j).at(1);
                int dist = sqrt((x_diff * x_diff) + (y_diff * y_diff));
                distance.push_back(dist);
                //cout << distance.at(i) << endl;
            }
        }
    }
    string ans = "No";
    for (int i = 0; i < n; i++) {
        for (int j = 0;j < n; j++) {
            for (int k = 0;k < n; k++) {
                if (i != j && j != k && k != i) {
                    if (distance.at(i) == distance.at(j) + distance.at(k)) {
                        ans = "Yes";
                        break;
                        }
                    }
                }
            }
        }
    cout << ans << endl;
    return 0;
    }
