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

const ll INF = 1LL << 60;

void solve() {
    inl(N, M);

    vector<vector<ll>> d(N, vector<ll>(N, INF));
    rep(i, N) d[i][i] = 0;
    rep(i, M) {
        inl(a, b, c);
        a--; b--;
        d[a][b] = d[b][a] = c;
    } 
    vector<vector<ll>> costs(d);

    rep(k, N) {
        rep(i, N) {
            rep(j, N) {
                costs[i][j] = min(costs[i][j], costs[i][k] + costs[k][j]);
            }
        }
    }

    ll used = 0;
    rep(i, N) {
        for(ll j = i + 1; j < N; j++) {
            if (d[i][j] == costs[i][j])
                used++;
        }
    }
    out(M - used);
}
