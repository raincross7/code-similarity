/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author NikuKyabe
 */

#include "bits/stdc++.h"
using namespace std;
#define int long long


class DModSum {
public:
	void solve(std::istream& in, std::ostream& out) {
    int n;
    in >> n;
    out << n * (n - 1) / 2 << endl;
	}
};


signed main() {
  ios::sync_with_stdio(false);
  cout.tie(0);
  cout << fixed;
	DModSum solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}