#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;



int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int ans = 0;
    int cnt = 1;
    rep(i,n) {
        if (a[i] != cnt) ans++;
        if (a[i] == cnt) cnt++;
    }
    if (cnt == 1) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}