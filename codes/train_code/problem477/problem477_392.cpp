#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define REP(i,m,n) for(int i=(int)(m); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define RREP(i,m,n) for(int i=(int)(m); i>=(int)(n); i--)
#define rrep(i,n) RREP(i,(n)-1,0)
#define all(v) v.begin(), v.end()
#define endk '\n'
const int inf = 1e9+7;
const ll longinf = 1LL<<60;
const ll mod = 1e9+7;
const ld eps = 1e-10;
template<typename T1, typename T2> inline void chmin(T1 &a, T2 b){if(a>b) a=b;}
template<typename T1, typename T2> inline void chmax(T1 &a, T2 b){if(a<b) a=b;}

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
  ll a, b, c, d; cin >> a >> b >> c >> d;
  ll ans = b-a+1;
  ans -= (b/c-(a+c-1)/c+1);
  ans -= (b/d-(a+d-1)/d+1);
  ll l = lcm(c, d);
  ans += (b/l-(a+l-1)/l+1);
  cout << ans << endk;
  return 0;
}