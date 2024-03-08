#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0, i##_len = (n); i < i##_len; ++i)
#define rep2(i, x, n) for(int i = x, i##_len = (n); i < i##_len; ++i)
#define all(n) begin(n), end(n)
using ll = long long;
using P = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<string>;
using vc = vector<char>;
using vb = vector<bool>;
using vd = vector<double>;
vi dir = {-1, 0, 1, 0, -1, -1, 1, 1, -1};

int main() {
  ll w, h, n;
  cin >> w >> h >> n;
  ll xl = 0, xr = w, yl = 0, yr = h;
  rep(i, n) {
    ll x, y, a;
    cin >> x >> y >> a;
    if(a == 1)
      xl = max(xl, x);
    else if(a == 2)
      xr = min(xr, x);
    else if(a == 3)
      yl = max(yl, y);
    else
      yr = min(yr, y);
  }
  if(xr - xl <= 0 || yr - yl <= 0)
    cout << 0 << endl;
  else
    cout << (xr - xl) * (yr - yl) << endl;
}