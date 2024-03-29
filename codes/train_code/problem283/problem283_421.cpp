#pragma region header
#include <algorithm>
#include <bitset>
#include <tuple>
#include <cstdint>
#include <cstdio>
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

// ===============================================================
//using系
#pragma region header
using namespace std;
using ll = long long;
using vl = vector<long long>;
using vvl = vector<vector<long long>>;
using vvi = vector<vector<int>>;
using Graph = vvi;
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
using kaage = priority_queue<int, vector<int>, greater<int>>;
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,1,0,-1 };
constexpr ll mod = 1e9 + 7;
constexpr long double pi = 3.141592653589793238462643383279;
#pragma endregion
// ========================================================================
//define系

//#define int long long
#define rep(i, n) for(ll i = 0; i < n; i++)
#define REP(i, n) for(ll i = 1; i <= n; i++)

// ========================================================================

//ライブラリ
#pragma region header
ll gcd(ll a, ll b)
{
	if (a % b == 0)
	{
		return(b);
	}
	else
	{
		return(gcd(b, a % b));
	}
}
//最大公約数
ll lcm(ll a, ll b)
{
	return a * b / gcd(a, b);
}
//最小公倍数
ll box(double a)
{
	ll b = a;
	return b;
}
//切り捨て
ll fff(double a)
{
	ll b = a + 0.5;
	return b;
}
//四捨五入
ll mch(ll n) {
	if (n == 1) return 1;
	else return n * mch(n - 1);
}
//1から整数nまでの階乗を出す(INFで割っていない)
bool prime(ll a)//素数判定、primeならtrue,違うならfalse
{
	if (a < 2) return false;
	else if (a == 2) return true;
	else if (a % 2 == 0) return false;
	double m = sqrt(a);
	for (int i = 3; i <= m; i += 2)
	{
		if (a % i == 0)
		{
			return false;
		}
	}

	// 素数である
	return true;
}
//素数判定
ll modpow(ll a, ll n, ll mod) {
	ll hi = 1;
	while (n > 0) {
		if (n & 1) hi = hi * a % mod;
		a = a * a % mod;
		n >>= 1;
	}
	return hi;
}
//いろいろやります（ただの前座）
ll mg(ll a, ll mod) {
	return modpow(a, mod - 2, mod);
}
//割り算の10^9+7等対策で逆元を出します 
ll num(ll a) {
	string s = to_string(a);
	ll sum = 0;
	for (int j = 0; j < s.size(); ++j) {
		sum += s[j] - '0';
	}
	return sum;
}
//整数aのすべての桁の和
#pragma endregion
#pragma endregion


// ========================================================================


#pragma region header
//ある程度のテンプレ(いじって使う)
//これとBFS、あとその時その時で使うものはここに書く

// ========================================================================
#pragma endregion
//ここから問題ごとに書く

/*signed*/ int main() {
	string s; cin >> s;
	vl a(s.size() + 1);
	ll cnt = 0;
	ll ans = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '<') {
			cnt++;
		}
		else cnt = 0;
		a[i + 1] = max(a[i + 1], cnt);
	}
	cnt = 0;
	for (int i = s.size() - 1; i >= 0; i--) {
		if (s[i] == '>') cnt++;
		else cnt = 0;
		a[i] = max(a[i], cnt);
	}
	for (int i = 0; i < s.size() + 1; i++) ans += a[i];
	cout << ans << endl;

	return 0;
}