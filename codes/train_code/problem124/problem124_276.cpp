#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <regex>
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
  long double first;
  long double second;
  long double third;
  multi(long double first, long double second, long double third)
      : first(first), second(second), third(third) {}
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

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll N;
  cin >> N;
  vector<long double> t(N, 0), v(N, 0);
  vector<multi> P;
  REP(i, N) cin >> t[i];
  REP(i, N) cin >> v[i];
  P.push_back(multi(0, 0, 0));
  REP(i, N) { P.push_back(multi(P[i].second, P[i].second + t[i], v[i])); }
  P.push_back(multi(P[N].second, P[N].second, 0));

  long double last_speed = 0;
  long double ans = 0;
  for (long double a = 0; a <= P[N].second; a += (long double)0.5) {
    long double speed = llINF;
    REP(i, N + 2) {
      if (a <= P[i].first) {
        speed = min(speed, P[i].third + P[i].first - a);
      } else if (a >= P[i].second) {
        speed = min(speed, P[i].third + a - P[i].second);
      } else {
        speed = min(speed, P[i].third);
      }
    }
    ans += (long double)0.25 * (last_speed + speed);
    last_speed = speed;
  }
  cout << SP(20) << ans << endl;

  return 0;
}
