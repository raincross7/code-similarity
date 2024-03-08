#line 1 "/workspaces/compro/lib/template.hpp"


#line 1 "/workspaces/compro/lib/io/vector.hpp"
#include <iostream>
#include <vector>

#ifndef IO_VECTOR
#define IO_VECTOR

template <class T> std::ostream &operator<<(std::ostream &out, const std::vector<T> &v) {
  int size = v.size();
  for (int i = 0; i < size; i++) {
    std::cout << v[i];
    if (i != size - 1)
      std::cout << " ";
  }
  return out;
}

template <class T> std::istream &operator>>(std::istream &in, std::vector<T> &v) {
  for (auto &el : v) {
    std::cin >> el;
  }
  return in;
}

#endif
#line 4 "/workspaces/compro/lib/template.hpp"
#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define ALL(v) (v).begin(), (v).end()
#define coutd(n) cout << fixed << setprecision(n)
#define ll long long int
#define vl vector<ll>
#define vi vector<int>
#define MM << " " <<

using namespace std;

template <class T> void say(bool val, T yes, T no) { cout << (val ? yes : no) << "\n"; }

void say(bool val, string yes = "Yes", string no = "No") { say<string>(val, yes, no); }

template <class T> void chmin(T &a, T b) {
  if (a > b)
    a = b;
}

template <class T> void chmax(T &a, T b) {
  if (a < b)
    a = b;
}

// C++ 17に完全移行したら消す
// 最大公約数を求める
template <class T> T gcd(T n, T m) { return n ? gcd(m % n, n) : m; }

// 最小公倍数を求める
template <class T> T lcm(T n, T m) {
  int g = gcd(n, m);
  return n * m / g;
}

// 重複を消す。計算量はO(NlogN)
template <class T> void unique(std::vector<T> &v) {
  std::sort(v.begin(), v.end());
  v.erase(std::unique(v.begin(), v.end()), v.end());
}


#line 2 "tmp.cpp"

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;
  vl xs(n), ys(n);
  REP(i, n) { cin >> xs[i] >> ys[i]; }

  ll ans = numeric_limits<ll>::max();
  for (const auto xi : xs) {
    for (const auto xj : xs) {
      for (const auto yi : ys) {
        for (const auto yj : ys) {
          ll x_max = max(xi, xj), x_min = min(xi, xj), y_max = max(yi, yj), y_min = min(yi, yj);

          int cnt = 0;
          REP(i, n) {
            ll xk = xs[i], yk = ys[i];
            if (x_min <= xk && xk <= x_max && y_min <= yk && yk <= y_max)
              cnt++;
          }
          if (cnt >= k) {
            chmin(ans, (x_max - x_min) * (y_max - y_min));
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
