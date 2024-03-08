#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

const int MOD = 1e9 + 7;
const int iINF = 1000000000;
const long long int llINF = 1000000000000000000;

using namespace std;
using ll = long long int;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
using vvvl = vector<vector<vector<ll>>>;

typedef pair<ll, ll> pll;
bool paircomp(const pll &a, const pll &b) {
  if (a.first == b.first)
    return a.second < b.second;
  return a.first < b.first;
}
struct multi {
  ll first;
  ll second;
  ll third;
};
bool multicomp(const multi &a, const multi &b) {
  if (a.first == b.first)
    return a.second < b.second;
  return a.first < b.first;
}
#define REP(i, n) for (ll i = 0; i < (n); i++)
#define RREP(i, n) for (ll i = (n)-1; i >= 0; i--)
#define FOR(i, a, b) for (ll i = (a); i < (b); i++)
#define AUTO(i, m) for (auto &i : m)
#define ALL(a) (a).begin(), (a).end()
#define MAX(vec) *std::max_element(vec.begin(), vec.end())
#define MIN(vec) *std::min_element(vec.begin(), vec.end())
#define ARGMAX(vec)                                                            \
  std::distance(vec.begin(), std::max_element(vec.begin(), vec.end()))
#define ARGMIN(vec)                                                            \
  std::distance(vec.begin(), std::min_element(vec.begin(), vec.end()))
#define REV(T) greater<T>()
#define PQ(T) priority_queue<T, vector<T>, greater<T>>
#define VVL(a, b, c) vector<vector<ll>>(a, vector<ll>(b, c))
#define VVVL(a, b, c, d)                                                       \
  vector<vector<vector<ll>>>(a, vector<vector<ll>>(b, vector<ll>(c, d)))
#define SP(a) setprecision(a)
#define SQRT(a) sqrt((long double)(a))
#define DPOW(a, b) pow((long double)(a), (long double)(b))
#define UNIQUE(vec)                                                            \
  do {                                                                         \
    sort(ALL((vec)));                                                          \
    (vec).erase(std::unique(ALL((vec))), (vec).end());                         \
  } while (0)

ll POW(ll n, ll m) {
  if (m == 0) {
    return 1;
  } else if (m % 2 == 0) {
    ll tmp = POW(n, m / 2);
    return (tmp * tmp);
  } else {
    return (n * POW(n, m - 1));
  }
}

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void func(vvl &S, vector<string> &F, ll &w, ll &h, ll y, ll x) {
  if (y < 0 || y >= h || x < 0 || x >= w || S[y][x] != 0) {
    return;
  } else if (F[y][x] == '#') {
    S[y][x] = -1;
    return;
  } else {
    S[y][x] = 1;
    func(S, F, w, h, y, x + 1);
    func(S, F, w, h, y, x - 1);
    func(S, F, w, h, y + 1, x);
    func(S, F, w, h, y - 1, x);
    return;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vl all_ans;
  while (true) {
    ll h, w;
    cin >> w >> h;
    if (h == 0 || w == 0)
      break;
    vvl S = VVL(h, w, 0);
    vector<string> F(h);
    REP(i, h) cin >> F[i];
    ll x = 0, y = 0;
    REP(i, h) REP(j, w) {
      if (F[i][j] == '@') {
        x = j;
        y = i;
      }
    }
    func(S, F, w, h, y, x);
    ll ans = 0;
    REP(i, h) REP(j, w) {
      if (S[i][j] == 1)
        ans++;
    }
    all_ans.push_back(ans);
  }
  AUTO(ans, all_ans) cout << ans << endl;

  return 0;
}

