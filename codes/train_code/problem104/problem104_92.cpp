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
  int n, m; cin >> n >> m;
  vector<ll> A(n), B(n), C(m), D(m);
  rep(i, n) cin >> A[i] >> B[i];
  rep(i, m) cin >> C[i] >> D[i];
  rep(i, n) {
    ll mn = longinf;
    int mni = -1;
    rep(j, m) {
      if(abs(C[j]-A[i])+abs(D[j]-B[i]) < mn) {
        mn = abs(C[j]-A[i])+abs(D[j]-B[i]);
        mni = j;
      }
    }
    cout << mni+1 << "\n";
  }
  return 0;
}
