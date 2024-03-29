#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,m,n) for(int i=(int)(m); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define RREP(i,m,n) for(int i=(int)(m); i>=(int)(n); i--)
#define rrep(i,n) RREP(i,n-1,0)
#define all(v) v.begin(), v.end()
const int inf = 1e9+7;
const ll longinf = 1LL<<60;
const ll mod = 1e9+7;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n; cin >> n;
  vector<ll> A(n);
  vector<ll> cnt(60);
  rep(i, n) {
    cin >> A[i];
    rep(j, 60) if((A[i]>>j)&1) cnt[j]++;
  }
  ll ans = 0;
  rep(j, 60) {
    (ans += (1LL<<j)%mod*(cnt[j]*(n-cnt[j])%mod)%mod) %= mod;
  }
  cout << ans << "\n";
  return 0;
}
