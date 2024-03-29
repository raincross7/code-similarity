#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cassert>
#include <cfloat>
#include <complex>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define Sort(v) sort(v.begin(), v.end())
#define Reverse(v) reverse(v.begin(), v.end())
#define Lower_bound(v, x) \
  distance(v.begin(), lower_bound(v.begin(), v.end(), x))
#define Upper_bound(v, x) \
  distance(v.begin(), upper_bound(v.begin(), v.end(), x))

using ll = long long;
using ull = unsigned long long;
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using vll = vector<ll>;
using vP = vector<P>;
using vT = vector<T>;
using vvll = vector<vector<ll>>;
using vvP = vector<vector<P>>;
using dqll = deque<ll>;

ll dx[9] = {-1, 1, 0, 0, -1, -1, 1, 1, 0};
ll dy[9] = {0, 0, -1, 1, -1, 1, -1, 1, 0};

const ll INF = 1LL << 50;

const ll mod = 1000000007;

int main() {
  ll m, k;
  cin >> m >> k;

  ll ttm = 1 << m;

  if (ttm <= k) {
    puts("-1");
    return 0;
  }

  if (m == 0) {
    if (k == 0) {
      puts("0 0");
      return 0;
    } else {
      puts("-1");
      return 0;
    }
  }

  if (m == 1) {
    if (k == 0) {
      puts("0 0 1 1");
      return 0;
    } else {
      puts("-1");
      return 0;
    }
  }

  rep(i, ttm){
    if(i != k){
      printf("%lld ", i);
    }
  }
  printf("%lld ", k);
  rep(i, ttm){
    if(ttm - 1 - i != k){
      printf("%lld ", ttm - 1 - i);
    }
  }
  printf("%lld\n", k);

  return 0;
}
