#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define REP(i,m,n) for(int i=(int)(m); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define RREP(i,m,n) for(int i=(int)(m); i>=(int)(n); i--)
#define rrep(i,n) RREP(i,n-1,0)
#define all(v) v.begin(), v.end()
const int inf = 1e9+7;
const ll longinf = 1LL<<60;
const ll mod = 1e9+7;
const ld eps = 1e-10;

ll gcd(ll x, ll y) {
  if(x > y)
    return gcd(y, x);
  else if(x == 0)
    return y;
  else
    return gcd(y % x, x);
}
ll lcm(ll x, ll y) {
  ll g = gcd(x, y);
  return g * (x / g) * (y / g);
}
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n; cin >> n;
  vector<ll> T(n); rep(i, n) cin >> T[i];
  ll ans = 1;
  rep(i, n) ans = lcm(ans, T[i]);
  cout << ans << "\n";
  return 0;
}
