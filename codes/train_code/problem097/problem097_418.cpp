#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define rep(i, n) FOR(i, 0, n - 1)
using namespace std;
typedef long long ll;
template <class T> inline bool dpmin(T &a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> inline bool dpmax(T &a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}

void solve(long long H, long long W) {
    ll ans = 0;
    if (H==1 || W==1) {
        ans = 1;
    } else {
        ans = (H * W + 1) / 2;
    }
    cout << ans << endl;
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips:
// You use the default template now. You can remove this line by using your
// custom template)
int main() {
  long long H;
  cin >> H;
  long long W;
  cin >> W;
  solve(H, W);
  return 0;
}
