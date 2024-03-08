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
using namespace std;
const long long MOD = 1e9+7;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<ld, ll> pdl;
typedef pair<ld, ld> pdd;
//typedef boost::multiprecision::cpp_int bigint;

//最大公約数
//O(log max(a,b))
template<class T>
T GCD(T a, T b) {
	if (b == 0)return a;
	return GCD(b, (T)(a % b));
}

ll N, X;

int main() {
	cin >> N >> X;
	ll G = GCD(N, X);
	ll NN = N / G;
	cout << 3 * (NN - 1) * G << endl;
	return 0;
}