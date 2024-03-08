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

  int cnt, ans;
  ans = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) continue;
    cnt = 0;
    for (int j = 1; j <= i; j++) {
      if (i % j == 0) cnt++;
    }
    if (cnt == 8) ans++;
  }
  cout << ans << endl;
  return 0;
}
