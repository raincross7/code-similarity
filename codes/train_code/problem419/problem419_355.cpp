#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(int)(n); i++)
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s; cin >> s;
  int ans = 653;
  rep(i,s.size()-2) {
    int sn = stoi(s.substr(i,3));
    ans = min(ans, abs(753-sn));
  }
  cout << ans << endl;
  return 0;
}