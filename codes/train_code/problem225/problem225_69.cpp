#include <bits/stdc++.h>

using namespace std;

using ll= long long ;

void solve() {
    int n; cin >> n;
    vector<ll> a(n);
    for (auto& x: a) {
        cin >> x;
    }
    ll res = 0;

    while (*max_element(a.begin(), a.end()) >= n) {
        ll cnt = 0;
        for (auto& x: a) {
            cnt += x/n;
        }
        res += cnt;
        for (auto& x: a) {
            x = (x%n) + cnt - (x/n);
        }
    }
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    cout << endl;
}
