#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

signed main() {
  int n; cin >>n;
  vector<int> h(n);
  rep(i,n) cin >>h[i];
  int mx = 0;
  int ans = 0;
  rep(i,n) {
    if(h[i] >= mx) ans++;
    mx = max(h[i], mx);
  } 
  cout << ans << endl;
}
