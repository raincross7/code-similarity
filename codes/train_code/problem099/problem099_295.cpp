#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,m,n) for(int i=(int)(m); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define RREP(i,m,n) for(int i=(int)(m); i>=(int)(n); i--)
#define rrep(i,n) RREP(i,n-1,0)
#define REPL(i,m,n) for(ll i=(ll)(m); i<(ll)(n); i++)
#define repl(i,n) REPL(i,0,n)
#define all(v) v.begin(), v.end()
const int inf = 1e9+7;
const ll longinf = 1LL<<60;
const ll mod = 1e9+7;
int main() {
  int N;
  cin >> N;
  vector<int> P(N);
  rep(i, N) cin >> P[i];
  vector<ll> A(N), B(N);
  rep(i, N) A[i] = B[N-1-i] = 1 + i * 40000L;
  rep(i, N) A[P[i]-1] += i;
  rep(i, N) cout << A[i] << ' '; cout << endl;
  rep(i, N) cout << B[i] << ' '; cout << endl;
  return 0;
}
