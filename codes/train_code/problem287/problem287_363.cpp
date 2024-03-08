
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#include <iomanip>	
#include <deque>
#include <set>
#include <climits>
#include <memory>
#include <numeric>
#include <utility>


#define rep(i,a,b) for(int i=a;i<b;++i)
#define rrep(i,a,b) for(int i=a;i>=b;--i)
#define fore(i,a) for(auto &i:a)
#define INF INT_MAX/2;
#define PI 3.14159265358979323846264338327950L;
const int INF2 = 1001001001;
typedef long long ll;
using namespace std;
using vi = vector<int>;
using vll = vector<ll>;
ll mod = 1e9 + 7;
//ll llmax = 10000000000000000000ll;
const ll LINF = 1e18;
using namespace std;
using Graph = vector<vector<int>>;



int cnt_digit(ll N)
{
	int digit = 0;

	while (N > 0)
	{
		N /= 10;
		digit++;
	}
	return digit;
}


 // 最大公約数計算
 
ll gcd(ll a, ll b)
{
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}
// 最小公倍数の計算

ll lcm(ll a, ll b)
{
	ll g = gcd(a, b);

	return a / g * b;
}

struct union_find
{
	vector<int> par, r;
	union_find(int n)
	{
		par.resize(n);
		r.resize(n);
		init(n);
	}


	void init(int n)
	{
		for (int i = 0; i < n; i++) par[i] = i;
		for (int i = 0; i < n; i++) r[i] = 0;
	}

	int find(int x)
	{
		if (par[x] == x)return x;
		else return find(par[x]);
	}

	void unite(int x, int y)
	{
		x = find(x);
		y = find(y);

		if (r[x] < r[y])
		{
			par[x] = y;
		}
		else
		{
			par[y] = x;
			if (r[x] == r[y])
			{
				r[x]++;
			}
		}
	}
};

const int MAX_N = 110000;

int memo[MAX_N];

int rec(int n) {
	if (n == 0)return 0;
	if (memo[n] != -1)return memo[n];

	int res = n;

	for (int pow6 = 1; pow6 <= n; pow6 *= 6)res = min(res, rec(n - pow6) + 1);

	for (int pow9 = 1; pow9 <= n; pow9 *= 9)res = min(res, rec(n - pow9) + 1);

	return memo[n] = res;
}

int calc(int x) {
	int ret = 0;
	while (x % 2 == 0) {
		x /= 2;
		ret++;
	}

	return ret;
}

int a[12][12];
int D;
ll G;
vector<ll> P, C;

//aのp乗を求めるアルゴリズム
long modpow(long a, int p) {
	if (p == 0)return 1;
	if (p % 2 == 0) {
		//pが偶数のとき
		int halfP = p / 2;
		long half = modpow(a, halfP);
		return half * half % mod;
	}
	else {
		//pが奇数の時は、
		//pを偶数にするために1減らす
		return a * modpow(a, p - 1) % mod;
	}

}


//(10*9*8)/(3*2*1);
//10*9*8 -> ansMul
//3*2*1 -> ansDiv;
long calcComb(int a, int b) {
	if (b > a - b) return calcComb(a, a - b);
	long ansMul = 1;
	long ansDiv = 1;
	rep(i, 0, b) {
		ansMul *= (a - i);
		ansDiv *= (i + 1);
		ansMul %= mod;
		ansDiv %= mod;
	}
	//ansMul /ansDivをやりたい
	//ansDivの逆元を使って求めよう。

	long ans = ansMul * modpow(ansDiv, mod - 2) % mod;
	return ans;

}

bool is_war(const vector<int>& x, const vector<int>& y) {
	for (int Z = -100; Z <= 100; Z++) {
		bool is_ok = true;
		rep(i, 0, x.size()) {
			if (x[i] >= Z) {
				is_ok = false;
			}
			rep(i, 0, y.size()) {
				if (y[i] < Z) {
					is_ok = false;
				}
			}
			
		}
		if (is_ok)return false;
		
	}
	return true;
}
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	map<int, int>map1;
	map<int, int>map2;

	rep(i, 0, n) {
		int a;
		cin >> a;
		if (i % 2 == 0) {
			map1[a]++;
		}
		else{
			map2[a]++;
		}
	}
	int value1 = 0;
	int key = 0;
	for (pair<int, int> m : map1) {
		if (m.second > value1) {
			value1 = m.second;
			key = m.first;
		}
	}

	int value2 = 0;
	for (pair<int, int> m : map2) {
		if (m.second > value2 && m.first != key) {
			value2 = m.second;
			
		}
	}

	int ans1 = (n / 2 - value1) + (n / 2 - value2);

	value1 = 0;
	key = 0;
	for (pair<int, int> m : map2) {
		if (m.second > value1) {
			value1 = m.second;
			key = m.first;
		}
	}

	value2 = 0;
	for (pair<int, int> m : map1) {
		if (m.second > value2&& m.first != key) {
			value2 = m.second;

		}
	}

	int ans2 = (n / 2 - value1) + (n / 2 - value2);

	cout << min(ans1, ans2) << endl;

	return 0;
	/*
	int n;
	cin >> n;

	map<int, int> odd;
	map<int, int> even;
	rep(i, 0, n) {
		int a;
		cin >> a;
		if (i % 2 == 0) {
			odd[a]++;
		}
		else {
			even[a]++;
		}
	}
	//最頻値から答えを求める１
	int max1 = 0;
	int key = 0;
	for (pair<int, int> m : odd) {
		if (m.second > max1) {
			max1 = m.second;
			key = m.first;
		}
	}
	int max2 = 0;
	for (pair<int, int>m : even) {
		//oddの最頻値となるkeyとは異なる値を選ぶ
		if (m.second > max2&& m.first != key) {
			max2 = m.second;
		}
	}
	int ans1 = (n / 2 - max1) + (n / 2 - max2);

	//最頻値から答えを求める2

	max1 = 0;
	key = 0;
	for (pair<int, int> m : even) {
		if (m.second > max1) {
			max1 = m.second;
			key = m.first;
		}
	}
	max2 = 0;
	for (pair<int, int>m : odd) {
		//evenの最頻値となるkeyとは異なる値を選ぶ
		if (m.second > max2&& m.first != key) {
			max2 = m.second;
		}
	}
	int ans2 = (n / 2 - max1) + (n / 2 - max2);
	
	int ans = min(ans1, ans2);

	cout << ans << endl;*/



}