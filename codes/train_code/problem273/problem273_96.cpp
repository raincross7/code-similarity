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
const ll mod2 = 998244353;
const ld eps = 1e-10;
template<typename T1, typename T2> inline void chmin(T1 &a, T2 b){if(a>b) a=b;}
template<typename T1, typename T2> inline void chmax(T1 &a, T2 b){if(a<b) a=b;}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n; cin >> n;
  ll d, a; cin >>d >> a;
  vector<pair<ll, ll>> P(n);
  rep(i, n) cin >> P[i].first >> P[i].second;
  sort(all(P));
  queue<pair<ll, ll>> q;
  ll sumDamage = 0;
  ll ans = 0;
  rep(i, n) {
    while(!q.empty() && q.front().first < P[i].first) {
      sumDamage -= q.front().second;
      q.pop();
    }
    ll rem = P[i].second - sumDamage;
    if(rem <= 0) continue;
    q.push({P[i].first+2*d, (rem+a-1)/a*a});
    ans += (rem+a-1)/a;
    sumDamage += (rem+a-1)/a*a;
  }
  cout << ans << endk;
  return 0;
}
