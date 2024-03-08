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
using namespace std;
using ll = long long;
constexpr ll INF = 1010000000000000017LL;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define all(v) v.begin(), v.end()

ll GCD(ll a, ll b) { if(b==0) return a; else return GCD(b, a%b); }
ll LCM(ll a, ll b) { return a/GCD(a,b)*b; }

class CGoodSequence {
public:
	void solve(std::istream& in, std::ostream& out) {
        ll n;in>>n;
        map<ll,ll> a;
        rep(i,n) {
            ll tmp;in>>tmp;
            ++a[tmp];
        }
        ll cnt=0;
        for(const auto i: a){
            if(i.first>i.second) cnt+=i.second;
            else cnt+=i.second-i.first;
        }
        out<<cnt<<endl;
	}
};


int main() {
	CGoodSequence solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}