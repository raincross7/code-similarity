#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
#include <math.h>
#include <map>
#include <list>
#include <iomanip>
#include <queue>
#include <cmath>
#include <numeric>
#define repl(i, l, r) for (ll i = l; i < r; i++)
#define rep(i, n) repl(i, 0, n)

using namespace std;
using ll = long long;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
const long long mod = 1e9 + 7;


int main() {

	ll N, M, K;
	cin >> N >> M >> K;

	ll tmp = 0;
	bool ans = false;

	rep(i, N + 1) {
		rep(j, M + 1) {
			ll z = 0;
			tmp = i * (M - j) + j * (N - i);
			if (tmp == K) {
				ans = true;
				break;
			}
		}
	}

	if (ans) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}


	return 0;
}
