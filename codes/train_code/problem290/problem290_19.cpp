#include <bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) (v).begin(), (v).end()
#define resz(v, ...) (v).clear(), (v).resize(__VA_ARGS__)
#define reps(i, m, n) for(int i = (int)(m); i < (int)(n); i++)
#define rep(i, n) reps(i, 0, n)

template<class T1, class T2> void chmin(T1 &a, T2 b){if(a>b)a=b;}
template<class T1, class T2> void chmax(T1 &a, T2 b){if(a<b)a=b;}

using Pi = pair<int, int>;
using Tapris = tuple<int, int, int>;
using vint = vector<int>;

const int inf = 1LL << 55;
const int mod = 1e9 + 7;

signed main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cout << fixed << setprecision(12);

  int n, m;
  cin >> n >> m;
  vint x(n);
  rep(i, n) cin >> x[i];
  vint y(m);
  rep(i, m) cin >> y[i];

  int sumx = 0;
  rep(i, n) {
    sumx = (sumx + x[i]*i%mod - x[i]*(n-1-i)%mod + mod) % mod;
  }
  int sumy = 0;
  rep(i, m) {
    sumy = (sumy + y[i]*i%mod - y[i]*(m-1-i)%mod + mod) % mod;
  }
  cout << sumx*sumy%mod << endl;

  return 0;
}
