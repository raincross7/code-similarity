#include<bits/stdc++.h>
#define f(i,a,b) for(register int i=a;i<=b;++i)
#define ff(i,a,b) for(register int i=a;i>=b;--i)
#define debug(x) cerr << #x << " : " << x << " " << endl
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<string, string> pss;
const ll mod = 998244353;
const ll mod1 = 2e18 + 7;
const double tiaohe = 0.57721566490153286060651209;
const int inf = 0x3f3f3f3f;
ll oula(ll x) { ll res = x;f(i, 2, x / i) { if (x % i == 0) { res = res / i * (i - 1);while (x % i == 0) x /= i; } }if (x > 1) res = res / x * (x - 1);return res; }
ll quickmod(ll a, ll n, ll m) { ll s = 1;while (n) { if (n & 1) { s = s * a % m; }a = (a*a) % m;n = n / 2; }return s; }
ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }
void ex_gcd(ll a, ll b, ll &x, ll &y, ll &d) { if (!b) { d = a, x = 1, y = 0; } else { ex_gcd(b, a % b, y, x, d);y -= x * (a / b); } }
ll inv(ll t, ll p) { ll d, x, y;ex_gcd(t, p, x, y, d);return d == 1 ? (x % p + p) % p : -1; }
//double a = log(n) +tiaohe + 1.0 / (2 * n);
double eqa = (1 + sqrt(5.0)) / 2.0;
const int N = 6e5 + 5;
int t;

int main()
{
	//freopen("in.txt", "r", stdin);
	int n, k,x;
	while (cin >> n >> k)
	{
		f(i, 1, k)cin >> x, n -= x;
		if (n <= 0)puts("Yes");
		else puts("No");
	}
	return 0;
}