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
  int n; string s; cin >> n >> s;
  int cnt = 0;
  int mn = 0;
  rep(i, n) {
    if(s[i] == '(') cnt++;
    else cnt--;
    mn = min(cnt, mn);
  }
  cout << string(-mn, '(') + s + string(cnt-mn, ')') << "\n";
  return 0;
}
