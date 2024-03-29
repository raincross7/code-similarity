#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll comb(int n, int r) {
    if (r == 0 || r == n) return 1;
    else if (r == 1) return n;
    return comb(n-1, r-1) + comb(n-1, r);
}

int main() {
    int n, p;
    cin >> n >> p;
    vector<int> a(n);
    rep(i,n) cin >> a.at(i);
    int sum = 0, odd = 0;
    rep(i,n) {
        sum += a.at(i);
        if (a.at(i) % 2 == 1) odd++;
    }
    int r = sum%2;
    ll ans = 0;
    if (odd == 0) {
        if (p == r) ans = (ll) 1<<n;
        cout << ans << endl;
        return 0;
    }
    ans = (ll) 1<<(n-1);
    cout << ans << endl;
    
    return 0;
}