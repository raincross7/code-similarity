#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

using ll = long long;
using ull = unsigned long long;

using vll = vector<ll>;

void solve();

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();

  return 0;
}

#define ini(...)   \
  int __VA_ARGS__; \
  in(__VA_ARGS__)

#define inl(...)  \
  ll __VA_ARGS__; \
  in(__VA_ARGS__)

#define ins(...)      \
  string __VA_ARGS__; \
  in(__VA_ARGS__);

void in() {}
template <typename T, class... U>
void in(T& t, U&... u) {
  cin >> t;
  in(u...);
}

void out() {
  cout << endl;
}
template <typename T, class... U>
void out(const T& t, const U&... u) {
  cout << t;
  if (sizeof...(u))
    cout << " ";
  out(u...);
}

#define rep(i, n) for (long long i = 0; i < n; i++)

void solve();
#ifndef ONLINE_JUDGE
#include "./lib.hpp"
#endif

void solve() {
    ini(N);

    vll c(100001, 0);
    rep(i, N) {
        ini(A);
        c[A]++;
    } 

    rep(i, 100001) {
      if (c[i] <= 2)
        continue;

      if (c[i] % 2 == 1)
        c[i] = 1;
      else
        c[i] = 2;
    }

    ll ret = count_if(c.begin(), c.end(), [](auto x) { return x != 0; });
    if (count(c.begin(), c.end(), 2) % 2 == 1)
        out(ret - 1);
    else
        out(ret);
}
