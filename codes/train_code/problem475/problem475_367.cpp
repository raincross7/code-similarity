#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <unordered_map>
#include <vector>
#include <string.h>
#include <set>
#include <stack>

using namespace std;

#define COUT(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")" << endl

template<class T> void printvec(const vector<T>& v) {
  for (auto x : v) { cout << x << " "; }
  cout << endl;
}
template<class T> void printtree(const vector< vector<T> >& tree) {
  for (long long i = 0; i < tree.size(); ++i) {
    cout << i + 1 << ": "; printvec(tree[i]);
  }
}
template<class T, class U> void printmap(const map<T, U>& mp) {
  for (auto x : mp) { cout << x.first << "=>" << x.second << endl; }
}

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

#define rep(i, n) for(ll i = 0; i < n; ++i)
#define all(s) s.begin(), s.end()
#define sz(x) (ll)(x).size()
#define fr first
#define sc second
#define mp make_pair
#define pb push_back
#define eb emplace_back

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;
typedef tuple<ll, ll, ll> triple;
typedef double D;
typedef vector<ll> vl;
typedef vector<P> vp;

const ll INF = 1e9;
const ll MOD = 1000000007;  // 1e9 + 7

int main(int argc, char** argv) {
  cin.tie(NULL);
  cout.tie(NULL);
  ios_base::sync_with_stdio(false);
  cout << setprecision(10) << fixed;

  ll n;
  cin >> n;
  vector<P> p(n); // pair of <x,y>
  rep(i,n) {
    cin >> p[i].first >> p[i].second;
  }
  vector<pair<double,ll>> v(n); // pair of <angle, idx>
  rep(i,n) {
    double ang = atan2(p[i].first, p[i].second);
    v[i] = pair<double,ll>(ang, i);
  }
  sort(all(v)); // sort by angle

  double ans = 0;
  rep(i,n) { // try all starting node
    ll ang = v[i].first;
    double x = 0;
    double y = 0;
    rep(j,n) {
      ll ang2 = v[(i+j)%n].first;
      if (ang2 > ang + M_PI) { break; } // reached to theta+180

      ll idx = v[(i+j)%n].second;
      x += p[idx].first;
      y += p[idx].second;
      chmax(ans, sqrt(x*x+y*y));
    }
  }

  cout << ans << endl;
}
