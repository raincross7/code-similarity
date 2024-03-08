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
  // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cout << fixed << setprecision(15);

  ll x, y, z, k;
  cin >> x >> y >> z >> k;

  vll as(x), bs(y), cs(z);

  rep(i, x) cin >> as[i];
  rep(i, y) cin >> bs[i];
  rep(i, z) cin >> cs[i];
  rSort(as), rSort(bs), rSort(cs);

  using Q = pair<ll, T>;
  set<Q> st;
  rep(i, x) {
    ll jmax = k / (i + 1) + 1;
    rep(j, min(y, jmax)) {
      ll kmax = k / ((i + 1) * (j + 1)) + 1;
      rep(k, min(z, kmax)) {
        st.emplace(Q(as[i] + bs[j] + cs[k],
                     T(i, j, k)));
      }
    }
  }
  auto itr = st.rbegin();
  rep(i, k) cout << (*(itr++)).first << endl;

  return 0;
}
