#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;


int main() {
    ll l, r;
    cin >> l >> r;
    r = min(r, l+4038);
    int ans = 2018;
    for (ll i = l; i <= r; i++) {
        for (ll j = i+1; j <= r; j++) {
            int x = i*j%2019;
            ans = min(ans, x);
        }
    }
    cout << ans << endl;

    return 0;
}