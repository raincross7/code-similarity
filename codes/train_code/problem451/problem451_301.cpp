#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  rep(i,n) cin >> h[i];
  int ans = 0;
  rep(i,n) {
    if (h[i] >= k) ans++;
  }
  cout << ans << endl;
  return 0;
}