/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author
 */

#include <iostream>
#include <fstream>

#include "bits/stdc++.h"

#define REP(i,x,y) for(int i=(x);i<(y);i++)
#define RREP(i,x,y) for(int i=(y)-1;i>=(x);i--)
#define all(x) (x).begin(),(x).end()
//#define int long long

using namespace std;

// conversion
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

#define dump(x)  cerr << #x << " = " << (x) << endl
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl

typedef long long ll;

const ll MOD = 1e9 + 7;

class FDistinctNumbers {
public:
	void solve(std::istream& in, std::ostream& out) {
	    int N;
	    in >> N;
	    vector<int> A(N);
	    REP(i,0,N) in >> A[i];

	    vector<int> cnt(N+1);
	    REP(i,0,N) cnt[A[i]]++;
	    sort(all(cnt), greater<int>());
	    cnt.resize(distance(lower_bound(cnt.rbegin(), cnt.rend(), 1), cnt.rend()));
	    sort(all(cnt));

	    vector<int> cntSum(cnt.size());
	    cntSum[0] = cnt[0];
	    REP(i,1,cnt.size()) cntSum[i] = cntSum[i-1] + cnt[i];

	    int maxK = 1;
	    RREP(x,1,N+1) { // Xがxのときの最大のK // Kが小さいとXは大きい
	        const auto itr = upper_bound(all(cnt), x);
	        const int index = distance(cnt.begin(), itr);
	        int K = (index > 0 ? cntSum[index-1] : 0) + (cnt.size() - index) * x;
	        K /= x;
	        while (maxK <= K && K > 0) {
                out << x << "\n";
                maxK++;
            }
	    }
	    while (maxK <= N) {
	        out << 0 << "\n";
	        maxK++;
	    }
	    // answer: Kがkのときの最大のX
	}
};


signed main() {
	FDistinctNumbers solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}