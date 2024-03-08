#include <bits/stdc++.h>

#define REP(i, x) REPI(i, 0, x)
#define REPI(i, a, b) for (int i = int(a); i < int(b); ++i)
#define ALL(x) (x).begin(), (x).end()

typedef long long ll;
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;
  ll ans = 0;
  REP(i, N) {
    int l, r;
    cin >> l >> r;
    ans += (r - l + 1);
  }

  cout << ans << endl;

  return 0;
}
