#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define printVec(v) printf("{"); for (const auto& i : v) { std::cout << i << ", "; } printf("}\n");
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;
using P = pair<int,int>;
using ll = long long;
const ll INF = 1LL<<60;
const double PI = 3.1415926535897932;
const int MOD = 1e9 + 7;

//cin.tie(0);ios::sync_with_stdio(false);
int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  bool zero = false;
  rep (i, n) {
    cin >> a[i];
    if (a[i] == 0) zero = true;
  }

  ll ans = 1;
  if (!zero) {
    for (int i = 0; i < n; i++) {
      if (1000000000000000000 / ans < a[i]) {
	cout << -1 << endl;
	return 0;
      } else {
	ans *= a[i];
      }
    }
    cout << ans << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}
