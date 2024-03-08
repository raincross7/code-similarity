#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

#define REP(i, s, n) for (int i = (int)(s); i < (int)(n); ++i)

typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef pair<int, int> PI;

ll int_sqrt_floor(ll x) {
  ll lo = 0;
  ll hi = 1e9 + 1;
  while (hi - lo > 1) {
    ll mid = (hi + lo) / 2;
    if (mid * mid <= x) {
      lo = mid;
    } else {
      hi = mid;
    }
  }
  return lo;
}

int main(void) {
  int q;
  cin >> q;
  REP(_, 0, q) {
    ll a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    ll lim = a * b - 1;
    ll x = int_sqrt_floor(lim);
    ll ans = 2 * x;
    if (x != 0 && lim / x == x) {
      ans--;
    }
    set<ll> proh;
    if (a <= x) proh.insert(a);
    cout << ans - proh.size() << endl;
  }
}
