#include <cstdio>
#include <cstring>
#include <cmath>
#include <utility>
#include <iostream>
#include <functional>
#include <bitset>
#include <algorithm>
#include <vector>
#include <forward_list>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <numeric>
#define ll long long int
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb push_back
using namespace std;
int mx4[] = {0,1,0,-1};
int my4[] = {1,0,-1,0};
int mx2[] = {1,0};
int my2[] = {0,1};

class C {
public:
	void solve(istream& in, ostream& out) {
        int n;
        in >> n;
        vector<int> a(n);
        double sum = 0;
        rep(i,n){
            in >> a[i];
            sum += a[i];
        }
        double b = sum / n;
        int c = round(b);
        ll ans = 0;
        rep(i,n){
            ans += (a[i] - c) * (a[i] - c);
        }
        out << ans << endl;



	}
};

int main() {
	C solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}