

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
    
    string ans = "No";
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                if (i != j && j != k && k != i) {
                    if (((data.at(k).at(1) - data.at(i).at(1)) * (data.at(j).at(0) - data.at(i).at(0))) == ((data.at(j).at(1) - data.at(i).at(1)) * (data.at(k).at(0) - data.at(i).at(0)))) {
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
