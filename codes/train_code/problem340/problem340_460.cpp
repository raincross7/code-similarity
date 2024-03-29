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
  int n, a, b; cin >> n >> a >> b;
  vector<int> P(n); rep(i, n) cin >> P[i];
  vector<int> cnt(3);
  rep(i, n) {
    if(P[i]<=a) cnt[0]++;
    else if(P[i]<=b) cnt[1]++;
    else cnt[2]++;
  }
  cout << *min_element(all(cnt)) << endk;
  return 0;
}
