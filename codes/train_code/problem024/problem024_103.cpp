// includes
#include <bits/stdc++.h>

// macros
#define ll long long int
#define pb emplace_back
#define mk make_pair
#define pq priority_queue
#define FOR(i, a, b) for(int i=(a);i<(b);++i)
#define rep(i, n) FOR(i, 0, n)
#define rrep(i, n) for(int i=((int)(n)-1);i>=0;i--)
#define irep(itr, st) for(auto itr = (st).begin(); itr != (st).end(); ++itr)
#define irrep(itr, st) for(auto itr = (st).rbegin(); itr != (st).rend(); ++itr)
#define vrep(v, i) for(int i = 0; i < (v).size(); i++)
#define all(x) (x).begin(),(x).end()
#define sz(x) ((int)(x).size())
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end())
#define FI first
#define SE second
#define dump(a, n) for(int i = 0; i < n; i++)cout << a[i] << "\n "[i + 1 != n];
#define dump2(a, n, m) for(int i = 0; i < n; i++)for(int j = 0; j < m; j++)cout << a[i][j] << "\n "[j + 1 != m];
#define bit(n) (1LL<<(n))
#define INT(n) int n; cin >> n;
#define LL(n) ll n; cin >> n;
#define DOUBLE(n) double n; cin >> n;
using namespace std;

//  types
typedef pair<int, int> P;
typedef pair<ll, int> Pl;
typedef pair<ll, ll> Pll;
typedef pair<double, double> Pd;
typedef complex<double> cd;
 
// constants
const int inf = 1e9;
const ll linf = 1LL << 50;
const double EPS = 1e-10;
const int mod = 1e9 + 7;
const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, -1, 0, 1};

// solve
template <class T>bool chmax(T &a, const T &b){if(a < b){a = b; return 1;} return 0;}
template <class T>bool chmin(T &a, const T &b){if(a > b){a = b; return 1;} return 0;}
template <typename T> istream &operator>>(istream &is, vector<T> &vec){for(auto &v: vec)is >> v; return is;}
template <typename T> ostream &operator<<(ostream &os, const vector<T>& vec){for(int i = 0; i < vec.size(); i++){ os << vec[i]; if(i + 1 != vec.size())os << " ";} return os;}
template <typename T> ostream &operator<<(ostream &os, const set<T>& st){for(auto itr = st.begin(); itr != st.end(); ++itr){ os << *itr; auto titr = itr; if(++titr != st.end())os << " ";} return os;}
template <typename T> ostream &operator<<(ostream &os, const unordered_set<T>& st){for(auto itr = st.begin(); itr != st.end(); ++itr){ os << *itr; auto titr = itr; if(++titr != st.end())os << " ";} return os;}
template <typename T> ostream &operator<<(ostream &os, const multiset<T>& st){for(auto itr = st.begin(); itr != st.end(); ++itr){ os << *itr; auto titr = itr; if(++titr != st.end())os << " ";} return os;}
template <typename T> ostream &operator<<(ostream &os, const unordered_multiset<T>& st){for(auto itr = st.begin(); itr != st.end(); ++itr){ os << *itr; auto titr = itr; if(++titr != st.end())os << " ";} return os;}
template <typename T1, typename T2> ostream &operator<<(ostream &os, const pair<T1, T2> &p){os << p.first << " " << p.second; return os;}
template <typename T1, typename T2> ostream &operator<<(ostream &os, const map<T1, T2> &mp){for(auto itr = mp.begin(); itr != mp.end(); ++itr){ os << itr->first << ":" << itr->second; auto titr = itr; if(++titr != mp.end())os << " "; } return os;}
template <typename T1, typename T2> ostream &operator<<(ostream &os, const unordered_map<T1, T2> &mp){for(auto itr = mp.begin(); itr != mp.end(); ++itr){ os << itr->first << ":" << itr->second; auto titr = itr; if(++titr != mp.end())os << " "; } return os;}


int main(int argc, char const* argv[])
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout << fixed << setprecision(20);
  INT(n); LL(l); LL(t); l *= 2, t *= 2;
  vector<pair<ll, ll>> v(n); rep(i, n)cin >> v[i].FI >> v[i].SE, v[i].FI *= 2;
  vector<ll> ans(n); rep(i, n)ans[i] = v[i].FI + t * (v[i].SE == 1 ? 1: -1);
  rep(i, n)ans[i] = (ans[i] % l + l) % l;
  sort(all(ans));
  ll at = 0;
  if(v[0].SE == 1){
    for(int i = 1; i < n; i++){
      if(v[i].SE == 2){
        ll T = t - (v[i].FI - v[0].FI) / 2;
        if(T < 0)continue;
        at += (2 * T) / (l) + 1;
      }
    }
    at %= n;
    for(int i = n - 1; i >= 0; i--){
      if(ans[i] == (v[0].FI + t) % l){
        int s = ((i - at) % n + n) % n;
        for(int j = s; j < n; j++)cout << ans[j] / 2 << endl;
        for(int j = 0; j < s; j++)cout << ans[j] / 2 << endl;
        return 0;
      }
    }
  }else{
    for(int i = 1; i < n; i++){
      if(v[i].SE == 1){
        ll T = t - (l - v[i].FI + v[0].FI) / 2;
        if(T < 0)continue;
        at += (2 * T) / (l) + 1;
      }
    }
    at %= n;
    at = ((n - at) % n + n) % n;
    for(int i = 0; i < n; i++){
      if(ans[i] == ((v[0].FI - t) % l + l) % l){
        int s = ((i - at) % n + n) % n;
        for(int j = s; j < n; j++)cout << ans[j] / 2 << endl;
        for(int j = 0; j < s; j++)cout << ans[j] / 2 << endl;
        return 0;
      }
    }
  }
  return 0;
}
