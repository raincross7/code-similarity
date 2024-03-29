/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author
 */

#include <iostream>
#include <fstream>

#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
#include <bitset>
#include <limits>
#include <iomanip>
using namespace std;
using ll = long long;
constexpr ll INF = 1010000000000000017LL;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define all(v) v.begin(), v.end()

ll GCD(ll a, ll b) { if(b==0) return a; else return GCD(b, a%b); }
ll LCM(ll a, ll b) { return a/GCD(a,b)*b; }

class AAtCoderBeginnerContest999 {
public:
	void solve(std::istream& in, std::ostream& out) {
	    string n;in>>n;
	    rep(i,3){
	        out<<((n[i]=='1') ? 9 : 1);
	    }
	}
};


int main() {
	AAtCoderBeginnerContest999 solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
