//include,using,define等
#pragma region header
#include <algorithm>
#include <bitset>
#include <tuple>
#include <cstdint>
#include <cctype>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <cassert>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <limits>
#include <map>
#include <memory>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include <math.h>
#include <cstring>

// ===============================================================
//using系
#pragma region header
using namespace std;
using ll = long long;
using lint = long long;
using vl = vector<long long>;
using vvl = vector<vector<long long>>;
using vvi = vector<vector<int>>;
using vs = vector<string>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vm = vector<short>;
using vmm = vector<vector<short>>;
using pii = pair<int, int>;
using psi = pair<string, int>;
using ld = long double;
using ull = unsigned long long;
using ui = unsigned int;
using qul = queue<ll>;
using pql = priority_queue<ll>;
const int dx[] = { 1,0,-1,0 };
const int dy[] = { 0,1,0,-1 };
constexpr ll mod = 1e9 + 7;
constexpr long double pi = 3.141592653589793238462643383279;
#pragma endregion
// ========================================================================
//define
#pragma region header
//#define int long long
#define rep(i, n) for(ll i = 0; i < n; i++)
#define REP(i, n) for(ll i = 1; i <= n; i++)
#define INF (ll)10000000000000000
#define mod (ll)1000000007
#define P pair<lint,lint>
template <class T>
bool chmax(T& a, const T& b) {
	if (a < b) {
		a = b;  // aをbで更新
		return true;
	}
	return false;
}
template <class T>
bool chmin(T& a, const T& b) {
	if (a > b) {
		a = b;  // aをbで更新
		return true;
	}
	return false;
}
#pragma endregion
#pragma endregion
lint n, k;
int solve(lint &N) {
	lint cnt = 0;
	if (N % k == 0) {
		cnt = 1;
	}
	if (N % k == k / 2) {
		cnt = 2;
	}
	return cnt;
}
bool solve2(lint &N) {
	bool h = false;
	if (N % k == 0) h = true;
	return h;
}


int main(void) {
	cin >> n >> k;
	if (k == 1) {
		cout << n * n * n << endl;
		return 0;
	}
	if (k % 2 == 0) {
		lint ans1 = 0;
		lint ans2 = 0;
		for (lint i = 1; i <= n; i++) {
			lint g = solve(i);
			if (g == 1) ans1++;
			if (g == 2) ans2++;
		}
		printf("%lld\n", ans1 * ans1 * ans1 + ans2 * ans2 * ans2);
		return 0;
	}
	lint ans = 0;
	for (lint i = 1; i <= n; i++) {
		if (solve2(i)) 
			ans++;
	}
	printf("%lld\n", ans * ans * ans);
	
	return 0;
}