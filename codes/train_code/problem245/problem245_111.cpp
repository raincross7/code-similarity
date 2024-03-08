#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define chmax(x,y) x = max(x,y);
const int di[] = {-1, 0, 1, 0};
const int dj[] = {0, -1, 0, 1};
const int INF = 1001001001;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n), c(n);
    rep(i,n) cin >> p[i];
    rep(i,n) cin >> c[i];
    rep(i,n) p[i]--;
    ll ans = -1e18;
    rep(si,n) {
      int x = si;
      vector<int> s;
      ll tot = 0;
      while (1) {
        x = p[x];
        s.push_back(c[x]);
        tot += c[x];
        if (x == si) break;
      }
      int l = s.size();
      ll t = 0;
      rep(i,l) {
        t += s[i];
        if (i+1 > k) break;
        ll now = t;
        if (tot > 0) {
          ll e = (k-(i+1))/l;
          now += tot*e;
        }
        ans = max(ans, now);
      }
    }
    cout << ans << endl;
    return 0;
}