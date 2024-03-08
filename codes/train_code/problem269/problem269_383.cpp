#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <algorithm>
#include <cassert>
#include <cfloat>
#include <complex>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <regex>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define repLRE(i, l, r) for (ll i = (l); i <= (r); ++i)
#define rrepLRE(i, l, r) for (ll i = (l); i >= (r); --i)
#define Sort(v) sort(v.begin(), v.end())
#define rSort(v) sort(v.rbegin(), v.rend())
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

/* Macros reg. ends here */

const ll INF = 1LL << 50;

int main() {
  // ios_base::sync_with_stdio(0), c
  cout << fixed << setprecision(15);

  ll h, w;
  cin >> h >> w;

  vector<string> mp(h);
  rep(i, h) { cin >> mp[i]; }

  queue<T> que;
  rep(i, h) rep(j, w) {
    if (mp[i][j] == '#') que.emplace(i, j, 0);
  }

  ll ans = 0;
  while (!que.empty()) {
    ll y, x, n;
    tie(y, x, n) = que.front();
    que.pop();
    for (ll i = 0; i < 4; i++) {
      ll ny = y + dy[i], nx = x + dx[i], nn = n + 1;
      bool ok = 0 <= ny && ny < h && 0 <= nx && nx < w && mp[ny][nx] == '.';
      if(ok){
        mp[ny][nx] = '#';
        chmax(ans, nn);
        que.emplace(ny, nx, nn);
      }
    }
  }

  cout << ans << endl;

  return 0;
}
