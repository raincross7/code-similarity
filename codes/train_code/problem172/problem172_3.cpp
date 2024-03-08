#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define repi(n) for (long long i = 0; i < (n); ++i)
#define repj(n) for (long long j = 0; j < (n); ++j)
#define repk(n) for (long long k = 0; k < (n); ++k)
#define rep(i, a, b) for (auto i = (a); i < (b); ++i)
#define itr(itr) for (auto&& v : (itr))
#define updatemax(t, v) (t = std::max(t, (v)))
#define updatemin(t, v) (t = std::min(t, (v)))

ll x[100];
int main() {
  int n;
  cin >> n;
  repi(n) cin >> x[i];
  ll res = LLONG_MAX;
  repi(101) {
    ll r = 0;
    repj(n) r += (x[j] - i) * (x[j] - i);
    updatemin(res, r);
  }
  cout << res << endl;
}
