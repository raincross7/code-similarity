#include<bits/stdc++.h>
#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) \
  for (ll i = static_cast<int>(a); i < static_cast<int>(b); ++i)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep, ) (__VA_ARGS__)  // NOLINT
#define chmax(x, a)  do { x = max(x, a); } while(0)
#define chmin(x, a)  do { x = min(x, a); } while(0)

using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;


int main(void) {
  ll a, b, c, k;
  cin >> a >> b >> c >> k;

  ll t = 0;
  while (b <= a) {
    b *= 2;
    t++;
  }
  while (c <= b) {
    c *= 2;
    t++;
  }
  cout << (t <= k ? "Yes" : "No") << endl;
  return 0;
}
