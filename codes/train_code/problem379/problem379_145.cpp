#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    // cout << fixed << setprecision(10) << flush;

    int x, y;
    cin >> x >> y;
    if(y >= 2*x && y <= 4*x && y % 2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}