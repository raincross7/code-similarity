#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i=(a);i<(b);++i)
#define rep(i, n) FOR(i, 0, n)
#define rep1(i, n) FOR(i, 1, n+1)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define whole(x) (x).begin(),(x).end()
#define rwhole(x) (x).rbegin(), (x).rend()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end())
#define P pair<int, int>
#define debug(var) cerr << "[" << #var << "] " << var << endl
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
const ll mod = 1000000007;
const int dx[] = {-1,0,1,0};
const int dy[] = {0,-1,0,1};

int d(P a, P b) {
    return abs(a.first-b.first)+abs(a.second-b.second);
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<P> a(n), c(m);
    rep(i, n) cin >> a[i].first >> a[i].second;
    rep(i, m) cin >> c[i].first >> c[i].second;

    rep(i, n) {
        int dis = mod;
        int ans = -1;
        rep(j, m) {
            int now = d(a[i], c[j]);
            if (now<dis) {
                ans = j+1;
                dis = now;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
