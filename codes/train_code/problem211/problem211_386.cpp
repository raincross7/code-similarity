#include <bits/stdc++.h>
using namespace std;
template <class T> inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T> inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return 1;
    }
    return 0;
}
typedef long long int ll;

#define ALL(v) (v).begin(), (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
#define endl "\n"
const double EPS = 1e-7;
const int INF = 1 << 30;
const ll LLINF = 1LL << 60;
const double PI = acos(-1);
const int MOD = 1000000007;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

//-------------------------------------

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int k;
    cin >> k;
    vector<ll> a(k);
    for(int i = 0; i < k; i++) {
        cin >> a[i];
    }
    reverse(ALL(a));
    ll mn = 2, mx = 2;
    for(int i = 0; i < k; i++) {
        if(mx / a[i] == (mn - 1) / a[i]) {
            cout << -1 << endl;
            return 0;
        }
        mx = (mx / a[i] + 1) * a[i] - 1;
        mn = (mn + a[i] - 1) / a[i] * a[i];
    }
    cout << mn << ' ' << mx << endl;
}
