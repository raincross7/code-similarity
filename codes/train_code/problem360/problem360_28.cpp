#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define rep2(i, s, n) for (ll i = s; i < (ll)(n); i++)
#define repr(i, n) for (ll i = n; i >= 0; i--)
#define fi first
#define sc second
#define pb push_back
#define COUT(x) cout << (x) << "\n"
#define COUTF(x) cout << setprecision(15) << (x) << "\n"
#define ENDL cout << "\n"
#define DF(x) x.erase(x.begin())  // 先頭文字削除
#define ALL(x) x.begin(), x.end()
#define SZ(x) (ll) x.size()
#define SORT(x) sort(ALL(x))
#define REVERSE(x) reverse(ALL(x))
#define MAX(x, y, z) max(x, max(y, z))
#define MIN(x, y, z) min(x, min(y, z))
#define ANS cout << ans << "\n"
#define RETURN(x)    \
  cout << x << "\n"; \
  return 0
clock_t CLOCK;
#define START_TIMER CLOCK = clock()
#define SHOW_TIMER cerr << "time: " << (ld)(clock() - CLOCK) / 1000000 << "\n"
#define init() \
  cin.tie(0);  \
  ios::sync_with_stdio(false)
#define LINE cerr << "[debug] line: " << __LINE__ << "\n";
#define debug(x) cerr << "[debug] " << #x << ": " << x << "\n";
#define debugV(v)                       \
  cerr << "[debugV] " << #v << ":";     \
  rep(i, v.size()) cerr << " " << v[i]; \
  cerr << "\n";
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
using mll = map<ll, ll>;
using qll = queue<ll>;
using P = pair<ll, ll>;

constexpr ll INF = 0x3f3f3f3f3f3f3f3f;
constexpr ld PI = 3.141592653589793238462643383279;
ll get_digit(ll x) {
  return to_string(x).size();
}

ll gcd(ll x, ll y) {
  return y ? gcd(y, x % y) : x;
}

ll lcm(ll a, ll b) {
  return a / gcd(a, b) * b;
}

vector<P> factorize(ll n) {
  vector<P> result;
  for (ll i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      result.pb({i, 0});
      while (n % i == 0) {
        n /= i;
        result.back().second++;
      }
    }
  }
  if (n != 1) {
    result.pb({n, 1});
  }
  return result;
}

vll divisor(ll n) {
  vll ret;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ret.push_back(i);
      if (i * i != n) ret.push_back(n / i);
    }
  }
  SORT(ret);
  return (ret);
}

signed main() {
  init();
  ll N;
  cin >> N;

  vector<P> RED(N);
  vector<P> BLUE(N);
  rep(i, N) cin >> RED[i].first >> RED[i].second;
  rep(i, N) cin >> BLUE[i].first >> BLUE[i].second;
  SORT(BLUE);

  ll ans = 0;
  rep(i, N) {
    ll blue_x = BLUE[i].first;
    ll blue_y = BLUE[i].second;
    ll red_max_y = -1;
    ll red_max_index = INF;
    rep(j, RED.size()) {
      if (blue_x > RED[j].first && blue_y > RED[j].second &&
          RED[j].second > red_max_y) {
        red_max_y = RED[j].second;
        red_max_index = j;
      }
    }
    if (red_max_index != INF) {
      RED.erase(RED.begin() + red_max_index);
      ans++;
    }
  }
  ANS;

  return 0;
}