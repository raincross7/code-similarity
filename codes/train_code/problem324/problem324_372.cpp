#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

vector<pair<ll, ll>> prime_factorize(ll n) {
  vector<pair<ll, ll>> res;
  for (ll a = 2; a*a <= n; a++) {
    if (n%a != 0) continue;
    ll ex = 0;
    while (n%a == 0) {
      ex++;
      n /= a;
    }
    res.push_back({a,ex});
  }
  if (n != 1) res.push_back({n,1});
  return res;
}

int main() {
    ll n;
    cin >> n;
    auto res = prime_factorize(n);
    ll ans = 0;
    for (auto p : res) {
      ll num = p.second;
      for (ll a = 1; num-a >= 0; a++) {
        ans++;
        num -= a;
      }
    }
    cout << ans << endl;
    return 0;
}