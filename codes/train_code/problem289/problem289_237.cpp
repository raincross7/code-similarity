#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define REP(i,m,n) for(int i=(int)(m); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define RREP(i,m,n) for(int i=(int)(m); i>=(int)(n); i--)
#define rrep(i,n) RREP(i,n-1,0)
#define all(v) v.begin(), v.end()
#define endk '\n'
const int inf = 1e9+7;
const ll longinf = 1LL<<60;
const ll mod = 1e9+7;
const ld eps = 1e-10;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int m; ll k; cin >> m >> k;
  if(m == 1) {
    if(k == 0) cout << 0 << ' ' << 0 << ' ' << 1 << ' ' << 1 << endk;
    else cout << -1 << endk;
  } else if(k >= pow(2,m)) cout << -1 << endk;
  else {
    rep(i, 1<<m) if(i != k) cout << i << ' ';
    cout << k << ' ';
    rrep(i, (1<<m)) if(i != k) cout << i << ' ';
    cout << k << endk;
  }
  return 0;
}
