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
using namespace std;
using ll = long long;
constexpr ll INF = 1010000000000000017LL;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

class CWhenIHitMyPocket {
public:
	void solve(std::istream& in, std::ostream& out) {
	    ll k,a,b;
	    in>>k>>a>>b;
	    ll ans=0;
	    if(k-1>=a && b>a){
	        ll ka=k-a+1;
	        ans=(ka/2)*(b-a);
	        ans+=a;
	        ka-=(ka/2)*2;
//	        out<<ka<<endl;
	        ans+=ka;
	    }
//	    out<<ans<<endl;
	    ans=max(ans,k+1);
	    out<<ans<<endl;

	}
};


int main() {
	CWhenIHitMyPocket solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}