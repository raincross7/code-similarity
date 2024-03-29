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
  int N, P;
  cin >> N >> P;
  vector<int> A(N);
  vector<int> cnt(2);
  rep(i, N) {
    cin >> A[i];
    cnt[A[i]%2]++;
  }
  if(cnt[1] == 0) {
    if(P) cout << 0 << endl;
    else cout << (ll)pow(2, N) << endl;
  } else {
    cout << (ll)pow(2, N-1) << endl;
  }
  return 0;
}
