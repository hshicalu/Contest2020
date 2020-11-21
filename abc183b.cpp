

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;
    double x;
    double a = sy;
    double b = gy;
    double c = gx;
    double d = sx;
    x = (a * c+ b * d) / (a + b);

    std::cout <<  std::setprecision(10) << x << endl;
    
    return 0;
    }


