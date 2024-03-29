/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author NikuKyabe
 */

#include <iostream>
#include <fstream>

#include "bits/stdc++.h"

using namespace std;
#define int long long
#define FOR(i, a, b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i, n)  FOR(i,0,(n))


class BDigitalGifts {
public:
    void solve(std::istream &in, std::ostream &out) {
      int n;
      in >> n;
      vector<pair<double, string>> xu(n);
      REP(i, n) {
        double x;
        string y;
        in >> x >> y;
        xu[i] = pair<double, string>(x, y);
      }

      double ans = 0;
      REP(i, n) {
        ans += xu[i].first * (xu[i].second == "JPY" ? 1 : 380000);
      }
      out << ans << endl;
    }
};


signed main() {
  ios::sync_with_stdio(false);
  cout.tie(0);
  cout << fixed;
  BDigitalGifts solver;
  std::istream &in(std::cin);
  std::ostream &out(std::cout);
  solver.solve(in, out);
  return 0;
}
