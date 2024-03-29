/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author NikuKyabe
 */

#include "bits/stdc++.h"
using namespace std;
#define int long long
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n)  FOR(i,0,(n))


class CSameIntegers {
public:
	void solve(std::istream& in, std::ostream& out) {
    vector<int> abc(3);
    REP(i,3) in >> abc[i];
    int cnt = 0;
    while(abc[0] != abc[1] || abc[0] != abc[2] || abc[1] != abc[2]){
      sort(abc.begin(),abc.end());
      int tmp = abc[2] - abc[1];
      if(tmp > 0) {
        cnt += tmp;
        abc[1] += tmp;
        abc[0] += tmp;
      }
      else{
        cnt += ceil((abc[2] - abc[0]) / 2.0);
        abc[0] += ceil((abc[2] - abc[0]) / 2.0) * 2;
      }
    }
    out << cnt << endl;
	}
};


signed main() {
  ios::sync_with_stdio(false);
  cout.tie(0);
  cout << fixed;
	CSameIntegers solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
