#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
#define show(x) {for(auto i: x){cout << i << " ";} cout << endl;}
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int R, D, X;
    cin >> R >> D >> X;
    rep(i, 10) {
        X = R * X - D;
        printf("%d\n", X);
    }
    return 0;
}