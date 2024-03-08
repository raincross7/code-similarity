#pragma target("avx")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef unordered_map<ll, ll> U_MAP;
typedef priority_queue<ll> pq;
typedef priority_queue<ll, vector<ll>, greater<ll>> rpq;
constexpr ll INF = 1e9, MOD = 1e9 + 7, ohara = 1e6 + 10;
constexpr ll LINF = 1e18;

#define rep(i, n) for (ll(i) = 0; (i) < (int)(n); (i)++)
#define rrep(i, a, b) for (ll i = (a); i < (b); i++)
#define rrrep(i, a, b) for (ll i = (a); i >= (b); i--)
#define all(v) (v).begin(), (v).end()
#define Size(n) (n).size()
#define Cout(x) cout << (x) << endl
#define doublecout(a) cout << fixed << setprecision(15) << a << endl;
#define fi first
#define se second
#define m_p make_pair
#define p_b push_back
string to_string(string s) { return '"' + s + '"'; }
string to_string(const char* s) { return to_string((string)s); }
string to_string(bool b) { return (b ? "true" : "false"); }
template <typename A, typename B>
string to_string(pair<A, B> p) {
  return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}
template <typename A>
string to_string(A v) {
  bool first = true;
  string res = "{";
  for (const auto& x : v) {
    if (!first) {
      res += ", ";
    }
    first = false;
    res += to_string(x);
  }
  res += "}";
  return res;
}
void debug_out() { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
  cerr << " " << to_string(H);
  debug_out(T...);
}
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)

//------ Believe yourself as a genius!!!!!! ------

int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};
// int dy[]={-1,0,1,-1,1,-1,0,1};int dx[]={-1,-1,-1,0,0,1,1,1};
string alph("abcdefghijklmnopqrstuvwxyz"), s;
ll n, cnt, ans, a, b, c, d, tmp, m, h, w, x, y, sum, k, q;
P p[ohara];
ll dp[ohara];
bool vi[ohara];

int main(void) {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);

  cin >> h >> w >> d;
  rep(i, h) {
    rep(j, w) {
      cin >> a;
      p[a] = m_p(i, j);
    }
  }
  rrrep(i, h * w, 1) {
    if (vi[i]) continue;
    ll now = i;
    vi[now] = true;
    while (1) {
      y = p[now].fi, x = p[now].se;
      now -= d;
      if (now <= 0) break;
      ll af_x, af_y;
      af_y = p[now].fi, af_x = p[now].se;
      dp[now] += dp[now + d] + abs(x - af_x) + abs(y - af_y);
      vi[now] = true;
    }
  }
  cin >> q;
  while (q--) {
    cin >> b >> c;
    ans = dp[b];
    ans -= dp[c];
    Cout(ans);
  }
  return 0;
}