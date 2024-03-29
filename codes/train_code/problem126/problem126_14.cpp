#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<bitset>
#include<string>
#include<stack>
#include<set>
#include<map>
#include<cstring>
#include<complex>
#include<cmath>
#include<algorithm>
#include<list>
#include<functional>
#define mp make_pair
#define X first
#define Y second
#define INF 1987654321987654321
#define PI 3.14159265358979323846264
#define MOD 20091101
#define fup(i,a,b,c) for(int (i)=(a);(i)<=(b);(i)+=(c))
#define fdn(i,a,b,c) for(int (i)=(a);(i)>=(b);(i)-=(c))
#define MEM0(a) memset(a,0,sizeof(a));
#define MEM_1(a) memset(a,-1,sizeof(a));
#define ALL(a) a.begin(),a.end()
using namespace std;
typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int, int> Pi;
typedef pair<ll, ll> Pll;
typedef pair<double, double> Pd;
typedef vector<int> Vi;
typedef vector<ll> Vll;
typedef vector<double> Vd;
typedef vector<Pi> VPi;
typedef vector<Pll> VPll;
typedef vector<Pd> VPd;
typedef complex<double> base;
ll POW(ll a, ll b) { if (b == 0)return 1; if (b == 1)return a; if (b & 1)return (a*POW(a, b - 1)) % MOD; ll t = POW(a, b / 2); return (t*t) % MOD; }
ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }
int dx[] = { 0,-1,1,0 }, dy[] = { 1,0,0,-1 };//동북남서

Pll p[200000];
ll cnt[2];
int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	cnt[0] = n + 1, cnt[1] = m + 1;
	fup(i, 0, n - 1, 1)
	{
		ll x;
		scanf("%lld", &x);
		p[i] = Pll(x, 0);
	}
	fup(i, n, n + m - 1, 1)
	{
		ll x;
		scanf("%lld", &x);
		p[i] = Pll(x, 1);
	}
	sort(p, p + n + m);
	ll ans = 0;
	fup(i, 0, n + m - 1, 1)
	{
		int c = p[i].Y;
		ans += cnt[1-c] * p[i].X;
		cnt[c]--;
	}
	printf("%lld", ans);
}