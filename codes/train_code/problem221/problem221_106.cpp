/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author NikuKyabe
 */

#include "bits/stdc++.h"

using namespace std;
#define int long long


class AAtCoderCrackers {
public:
    void solve(std::istream &in, std::ostream &out) {
      int n, k;
      in >> n >> k;

      if (n % k == 0) {
        out << 0 << endl;
      } else {
        out << 1 << endl;
      }
    }
};


signed main() {
  ios::sync_with_stdio(false);
  cout.tie(0);
  cout << fixed;
  AAtCoderCrackers solver;
  std::istream &in(std::cin);
  std::ostream &out(std::cout);
  solver.solve(in, out);
  return 0;
}