#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  string o,e; cin >> o >> e;

  for(int i=0; i<o.size()+e.size(); ++i) {
    if(i >= o.size() && i >= e.size()) break;
    if(i >= o.size()) {
      cout << e.at(i);
    }
    if(i >= e.size()) {
      cout << o.at(i);
    }
    if(i < o.size() && i < e.size()) {
      cout << o.at(i) << e.at(i);
    }
  }
  cout << '\n';

  return;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}
