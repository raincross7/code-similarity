#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;

  // 素因数分解する
  vector<pair<ll, int>> f;
  for (ll i = 2; i * i <= n; i++) {
    int cnt = 0;
    while (n % i == 0) {
      cnt++;
      n /= i;
    }
    if (cnt != 0) f.emplace_back(i, cnt);
  }
  if (n != 1) f.emplace_back(n, 1);

  // 答えを求める
  int ans = 0;
  for (auto p : f) {
    int x = p.second;
    int a = 1;
    while (x >= a) {
      x -= a;
      a++;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}