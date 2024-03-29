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

class DABS {
public:
	void solve(std::istream& in, std::ostream& out) {
	    int N, Z, W;
	    in >> N >> Z >> W;
	    vector<int> a(N);
	    REP(i,0,N) in >> a[i];

	    vector<int> candidates;
	    candidates.emplace_back(abs(a.back() - W));

	    if (N > 1) {
            // when Y = a.back()
            candidates.emplace_back(abs(a[N-1] - a[N-2]));
	    }
	    out << *max_element(all(candidates)) << "\n";
	}
};


int main() {
	DABS solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
