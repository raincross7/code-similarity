#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <string>
#include <math.h>
#include <limits.h>
#include <queue>
#include <map>
#include <set>
#include <iomanip>
#include <bitset>
#include <cassert>
#include <random>
#include <functional>
#include <stack>
#include <iomanip>
#include <cassert>
//#include <boost/multiprecision/cpp_int.hpp>
#include <complex>
#include <cstdio>
#include <list>

//< in.txt > out.txt
using namespace std;
//std::ios::sync_with_stdio(false);
//std::cin.tie(0);
const long long MOD = 998244353;//1e9 + 7;
typedef long long LL;
typedef long double LD;
typedef pair<LL, LL> PLL;
typedef pair<LD, LL> PDL;
typedef pair<LD, LD> PDD;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;
//typedef boost::multiprecision::cpp_int bigint;

template<class Rng>
void in(Rng& x) {
	cin >> x;
}

template<class T1, class T2>
void in(pair<T1, T2>& p) {
	in(p.first);
	in(p.second);
}

template<class Rng>
void in(vector<Rng>& v, LL st = -1, LL en = -1) {
	if (st == -1) {
		st = 0;
		en = v.size() - 1;
	}
	for (LL n = st; n <= en; n++) {
		in(v[n]);
	}
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	LL x, y;
	cin >> x >> y;
	if(x < y) {
		if (x >= 0) {
			cout << y - x << "\n";
		}
		else if (y >= 0) {
			if (-x <= y)cout << min(y - x, 1 + y + x) << "\n";
			else cout << min(y - x, 1 - y - x) << "\n";
		}
		else {
			cout << y - x << "\n";
		}
	}
	else {
		if (y >= 0) {
			cout << min(1 + x + y,2-y+x) << "\n";
		}
		else if (x >= 0) {
			if (-y >= x) {
				cout << -x - y + 1 << "\n";
			}
			else {
				cout << 1 + y + x << "\n";
			}
		}
		else {
			cout << min(-y - x + 1, 2 - y + x) << "\n";
		}
	}
	return 0;
}