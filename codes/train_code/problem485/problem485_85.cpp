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
long long MOD = 1e9 + 7;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<ld, ll> pdl;
typedef pair<ld, ld> pdd;
//typedef boost::multiprecision::cpp_int bigint;

ll X, Y;

int main() {
	cin >> X >> Y;
	if (abs(X - Y) <= 1)cout << "Brown" << endl;
	else cout << "Alice" << endl;
	return 0;
}