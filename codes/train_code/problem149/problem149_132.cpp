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

using namespace std;
//std::ios::sync_with_stdio(false);
//std::cin.tie(0);
const long long MOD = 1e9 + 7;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<ld, ll> pdl;
typedef pair<ld, ld> pdd;
typedef vector<ll> VLL;
typedef vector<VLL> VVLL;
//typedef boost::multiprecision::cpp_int bigint;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	ll N;
	cin >> N;
	VLL A;
	A.reserve(N);
	for (ll n = 0; n < N; n++) {
		ll a;
		cin >> a;
		A.push_back(a);
	}
	sort(A.begin(), A.end(), [](ll a, ll b) {
		return a < b;
	});
	vector<ll> AA;
	AA.reserve(N);
	AA.push_back(1);
	for (ll n = 1; n < N; n++) {
		if (A[n] == A[n - 1])AA.back()++;
		else AA.push_back(1);
	}
	//種類数を数える
	ll type = AA.size();
	//重複分
	ll db = N - AA.size();
	if (db & 1)cout << type - 1 << "\n";
	else cout << type << "\n";
	return 0;
}