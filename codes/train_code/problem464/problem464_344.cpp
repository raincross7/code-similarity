#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,a,n) for(int i=(a); i<(n); i++)
#define all(v) v.begin(), v.end()
#define fi first
#define se second
#define sz(x) int(x.size())
using namespace std;
using ll = long long;
using P = pair<int ,int>;
const int INF = 1001001001;
const int MOD = 1000000007;
template<class T> inline bool chmax(T &a, T b) { if (a<b) {a=b; return 1;} return 0;}
template<class T> inline bool chmin(T &a, T b) { if (b<a) {a=b; return 1;} return 0;}

#ifdef _DEBUG
#include "debug.h"
#else
#define debug(...)
#define print(...)
#endif

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n+1, 0);
    rep(i, m) {
        int x, y; cin >> x >> y;
        a[x]++; a[y]--;
    }
    bool ok = true;
    for(const auto& v: a) {
        if (v%2!=0) ok = false;
    }
    if (ok) puts("YES");
    else puts("NO");
}