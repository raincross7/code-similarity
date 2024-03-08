/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author NikuKyabe
 */

#include <iostream>
#include <fstream>

#include "bits/stdc++.h"

using namespace std;
#define INF (1LL<<60)
#define int long long
#define FOR(i, a, b) for(int i=(int)(a);i<(int)(b);++i)


class B754 {
public:
    void solve(std::istream &in, std::ostream &out) {
      string s;
      in >> s;
      int min = INF;
      FOR(i, 2, s.length()) {
        int tmp = abs(stoll(s.substr(i - 2, 3)) - 753);
        if (tmp < min) {
          min = tmp;
        }
      }
      out << min << endl;
    }
};


signed main() {
  ios::sync_with_stdio(false);
  cout.tie(0);
  cout << fixed;
  B754 solver;
  std::istream &in(std::cin);
  std::ostream &out(std::cout);
  solver.solve(in, out);
  return 0;
}