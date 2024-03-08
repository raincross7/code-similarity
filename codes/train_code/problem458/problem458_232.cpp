#include "bits/stdc++.h"
using namespace std;
using ll = long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;
#define rep(i, begin, n) for (int i = begin; i < n; i++)
#define repe(i, begin, n) for (int i = begin; i <= n; i++)
#define repr(i, begin, n) for (int i = begin; i > begin - n; i--)
#define repre(i, begin, end) for (int i = begin; i >= end; i--)

template <class T>
inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}

template <class T>
inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}

const int inf = INT_MAX;
const int MOD = 1000000007;
const long long INF = LLONG_MAX;

// -------------------------------------------------------
string S;

int main() {
  cin >> S;
  int len = S.size();
  for (int i = 2; i <= len; i += 2) {
    bool can = true;
    for (int j = 0; j < (len - i) / 2; ++j) {
      if (S[j] != S[j + (len - i) / 2]) {
        can = false;
        break;
      }
    }
    if (can) {
      cout << len - i;
      return 0;
    }
  }
}
