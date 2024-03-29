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
  ll y; cin >> y;
  y /= 1000;
  for(int i=0; i*10<=y; i++) {
    for(int j=0; j*5<=y-i*10; j++) {
      int k = (y-i*10-j*5);
      if(i + j + k == n) {
        cout << i << ' ' << j << ' ' << k << "\n";
        return 0;
      }
    }
  }
  cout << -1 << ' ' << -1 << ' ' << -1 << "\n";
  return 0;
}
