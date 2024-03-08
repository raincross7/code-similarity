#include<iostream>
#include<algorithm>
#include<ctime>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#include<iomanip>
#include<numeric>
#include<queue>
#include<deque>
#include<cfloat>
#include<functional>
#include<tuple>
#include<math.h>
#include<bitset>
#include<stack>
#include<set>
#include<random>
#include<stdlib.h>
#define rip(i,n) for(ll i=0;i<n;i++)
#define Rip(i,n) for(ll i=1;i<=n;i++)
#define all(V) V.begin(),V.end()
#define ll long long
#define ld long double
#define MOD 1000000007
#define mod 998244353
#define sec setprecision
#define Pair pair<ll,ll>
#define _CRT_SECURE_NO_WARNINGS
#pragma target("avx")
#pragma optimize("O3")
#pragma optimize("unroll-loops")
constexpr double eps = 1e-9;
constexpr double pi = 3.141592653589793238462643383279;
using namespace std;
ll gcd(ll a, ll b)
{
	if (a % b == 0)	return(b);
	else return(gcd(b, a % b));
}
ll lcm(ll a, ll b)
{
	return a * b / gcd(a, b);
}
ll pow(ll x, ll n) {
	x %= mod;
	if (n == 0)
		return 1;
	if (n % 2 == 0)
		return (pow((x * x)%mod , n / 2)%mod);
	else
		return (x * pow(x, n - 1))%mod;
}
int main() {
	ll n, m; cin >> n >> m;
	vector<Pair>a(n);
	rip(i, n)cin >> a[i].first >> a[i].second;
	sort(all(a));
	ll count = 0;
	ll money = 0;
	rip(i, n) {
		if (count + a[i].second <= m) {
			money += a[i].second * a[i].first;
			count += a[i].second;
		}
		else {
			money += a[i].first * (m - count);
			break;
		}
	}
	cout << money << endl;
}