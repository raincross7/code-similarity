#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;

#define vt          vector
#define sz(x)       (int)(x).size()
#define all(x)      (x).begin(), (x).end()
#define rall(x)     (x).rbegin(), (x).rend()
#define fi          first
#define se          second

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int k, n;
    cin >> k >> n;
    vt<int> a(n);
    for (int &i : a) cin >> i;

    int mn = a.back() - a[0];
    for (int i = 1; i < n; i++) {
        mn = min(mn, a[i] + k - a[i + 1]);
    }
    cout << mn;
}
