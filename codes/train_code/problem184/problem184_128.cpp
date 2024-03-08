#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <utility>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <tuple>
#include <numeric>
#include <functional>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
typedef pair<ll, ll> P;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define exrep(i, a, b) for(ll i = a; i <= b; i++)
#define out(x) cout << x << endl
#define exout(x) printf("%.10f\n", x)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define pb push_back
#define re0 return 0
const ll mod = 1000000007;
const ll INF = 1e16;
const double pi = acos(-1);

int main() {
    ll x, y, z, k;
    cin >> x >> y >> z >> k;

    vl a(x);
    rep(i, x) {
        cin >> a[i];
    }
    vl b(y);
    rep(i, y) {
        cin >> b[i];
    }
    vl c(z);
    rep(i, z) {
        cin >> c[i];
    }
    
    vl v;
    rep(i, x) {
        rep(j, y) {
            v.pb(a[i]+b[j]);
        }
    }
    sort(rall(v));

    vl ans;
    rep(i, min(k, x*y)) {
        rep(j, z) {
            ans.pb(v[i]+c[j]);
        }
    }
    sort(rall(ans));

    rep(i, k) {
        out(ans[i]);
    }

    re0;
}