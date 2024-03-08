#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
#define DUMP(x) cout << #x << " = " << (x) << endl;
#define FOR(i, m, n) for (ll i = m; i < n; i++)
#define IFOR(i, m, n) for (ll i = n - 1; i >= m; i--)
#define REP(i, n) FOR(i, 0, n)
#define IREP(i, n) IFOR(i, 0, n)
#define FOREACH(x, a) for (auto&(x) : (a))
#define ALL(v) (v).begin(), (v).end()
#define SZ(x) ll(x.size())

int main() {
  ll n, m;
  cin >> n >> m;
  map<ll, ll> mp;
  REP(i, n) {
    ll a, b;
    cin >> a >> b;
    mp[a] += b;
  }

  ll ans = 0;
  for (auto& x : mp) {
    ll a = x.first, b = x.second;
    if (b >= m) {
      ans += a * m;
      break;
    }
    m -= b;
    ans += a * b;
  }
  cout << ans << endl;
}