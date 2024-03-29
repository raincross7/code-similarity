#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <numeric>
#include <cmath>

#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

template<class T> inline bool chmin(T& a,T b) {if (a > b) {a = b; return true;} return false;}
template<class T> inline bool chmax(T& a,T b) {if (a < b) {a = b; return true;} return false;}

const ll MOD = 1000000007;
const int INF = 1<<30;
//const ll INF = (ll)1e18 + 1;

template <class Abel> struct BIT {
  vector<Abel> dat[2];
  Abel UNITY_SUM = 0;                     // to be set

  /* [1, n] */
  BIT(int n) { init(n); }
  void init(int n) { for (int iter = 0; iter < 2; ++iter) dat[iter].assign(n + 1, UNITY_SUM); }

  /* a, b are 1-indexed, [a, b) */
  inline void sub_add(int p, int a, Abel x) {
    for (int i = a; i < (int)dat[p].size(); i += i & -i)
      dat[p][i] = dat[p][i] + x;
  }
  inline void add(int a, int b, Abel x) {
    sub_add(0, a, x * -(a - 1)); sub_add(1, a, x); sub_add(0, b, x * (b - 1)); sub_add(1, b, x * (-1));
  }

  /* a is 1-indexed, [a, b) */
  inline Abel sub_sum(int p, int a) {
    Abel res = UNITY_SUM;
    for (int i = a; i > 0; i -= i & -i) res = res + dat[p][i];
    return res;
  }
  inline Abel sum(int a, int b) {
    return sub_sum(0, b - 1) + sub_sum(1, b - 1) * (b - 1) - sub_sum(0, a - 1) - sub_sum(1, a - 1) * (a - 1);
  }

  /* debug */
  void print() {
    for (int i = 1; i < (int)dat[0].size(); ++i) cout << sum(i, i + 1) << ",";
    cout << endl;
  }
};


int main(){
  ll N, D, A; cin >> N >> D >> A;
  vector<P> enemy(N);
  rep(i, N) cin >> enemy[i].first >> enemy[i].second;
  sort(enemy.begin(), enemy.end());
  vector<ll> x(N), h(N);
  rep(i, N) {x[i] = enemy[i].first; h[i] = enemy[i].second;}

  BIT<ll> bit(N + 10);
  rep(i, N){
    bit.add(i + 1, i + 2, h[i]); //1-indexed
  }
  ll ans = 0;
  for (int i = 0; i < N; ++i){
    ll cur = bit.sum(i + 1, i + 2);
    if (cur <= 0) continue;
    ll need = (cur + A - 1) / A;

    ll right = x[i] + D * 2;
    int id = upper_bound(x.begin(), x.end(), right) - x.begin();

    bit.add(i + 1, id + 1, -need * A);
    ans += need;
  }
  cout << ans << endl;
}
