#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int r, d, x;
    int tmp;
    cin >> r >> d >> x;
    rep(i, 10) {
        int tmp = x;
        x = r * x - d;
        cout << x << endl;
    }
    return 0;
}