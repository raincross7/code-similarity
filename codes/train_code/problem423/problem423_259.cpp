/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author NikuKyabe
 */

#include "bits/stdc++.h"
using namespace std;
#define int long long


class CFlipFlipAndFlip {
public:
	void solve(std::istream& in, std::ostream& out) {
    int n,m;
    in >> n >> m;
    if(n == 1 && m == 1){
      out << 1 << endl;
    }
    else if(n == 1 || m == 1){
      out << max(n,m) - 2 << endl;
    }
    else{
      out << (n - 2) * (m - 2) << endl;
    }
	}
};


signed main() {
  ios::sync_with_stdio(false);
  cout.tie(0);
  cout << fixed;
	CFlipFlipAndFlip solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
