/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author NikuKyabe
 */

#include "bits/stdc++.h"
using namespace std;
#define INF (1LL<<60)
#define int long long
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n)  FOR(i,0,(n))
typedef vector<int> vec;
typedef vector< vector<int> > mat;


class ECrestedIbisVsMonster {
public:
  template<class T> inline bool chmin(T& a, T b) {
      if (a > b) {
          a = b;
          return true;
      }
      return false;
  }
	void solve(std::istream& in, std::ostream& out) {
    int h,n;
    in >> h >> n;
    vector<int> a(n), b(n);
    REP(i,n) in >> a[i] >> b[i];
    mat dp(n + 1, vec(h + 1, INF));
    dp[0][0] = 0;
    REP(i, n) REP(j, h + 1){
      chmin(dp[i + 1][j], dp[i][j]);
      chmin(dp[i + 1][min(j + a[i], h)], dp[i + 1][j] + b[i]);
    }
    out << dp[n][h] << endl;
	}
};


signed main() {
  ios::sync_with_stdio(false);
  cout.tie(0);
  cout << fixed;
	ECrestedIbisVsMonster solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}