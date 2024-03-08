#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define chmax(x,y) x = max(x,y)
#define chmin(x,y) x = min(x,y)

const int INF = 1e9 + 10;

int X, Y;

int main() {
    cin >> X >> Y;
    rep(t, X+1) {
        if (4*t + 2*(X - t) == Y) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}