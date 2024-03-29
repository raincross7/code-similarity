/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author
 */

#include <iostream>
#include <fstream>

#include "bits/stdc++.h"

#define REP(i,x,y) for(ll i=(x);i<(y);i++)
#define RREP(i,x,y) for(ll i=(y)-1;i>=(x);i--)
#define all(x) (x).begin(),(x).end()
//#define int long long

using namespace std;

// conversion
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

#define dump(x)  cout << #x << " = " << (x) << endl
#define debug(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl

typedef long long ll;

const ll MOD = 1e9 + 7;

class ATwoCoins {
public:
    void solve(std::istream& in, std::ostream& out) {
        int A, B, C;
        in >> A >> B >> C;
        out << (A + B >= C ? "Yes" : "No") << "\n";
    }
};


signed main() {
    ATwoCoins solver;
    std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
