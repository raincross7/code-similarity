#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define st first
#define nd second

typedef long long ll;
typedef double db;
typedef long double ldb;
typedef complex<db> cd;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<db, db> pdd;
typedef pair<ldb, ldb> pldb;
typedef pair<int, ll> pil;
typedef pair<ll, int> pli;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<db> vd;
typedef vector<ldb> vldb;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<pdd> vpd;
typedef vector<pldb> vpldb;
typedef vector<pil> vpil;
typedef vector<pli> vpli;

int si();
ll sl();
string ss(int);
char sc();
float sf();
db sd();
ldb sld();

template<typename T> void print(T, char='\n');
template<typename T, typename... Args> void print(T, Args...);

void pi(const int&, char='\n');
void pl(const ll&, char='\n');
void pf(const float&, char='\n');
void pc(const char&, char='\n');
void pd(const db&, char='\n');
void pld(const ldb&, char='\n');
void ps(const string&, char='\n');
template<typename T> void pv(const vector<T>& v, char=' ', char='\n');
template<typename It> void out(It begin, It end, char=' ', char='\n');

ll russian(ll, ll, ll);
ll fastpow(ll, ll, ll);
ll slowpow(ll, ll, ll);
ll _gcd(ll, ll);
ll _lcm(ll, ll);
ll extgcd(ll, ll, ll&, ll&);
ll _inv(ll, ll);

const int INF = 1e9;
const ll LINF = 1e18;

const int N = 100 + 7;
pll P[N];
int n;

bool getpart(const pll& p)
{
	return p.nd < 0 || (p.nd == 0 && p.st < 0);
}

ll vect(const pll& p1, const pll& p2)
{
	return p1.st * p2.nd - p1.nd * p2.st;
}

pll operator+(const pll& p1, const pll& p2)
{
	return {p1.st + p2.st, p1.nd + p2.nd};
}

pll operator-(const pll& p1, const pll& p2)
{
	return {p1.st - p2.st, p1.nd - p2.nd};
}

ll len(const pll& p)
{
	return p.st * p.st + p.nd * p.nd;
}

void read()
{
	n = si();
	int it = 0;
	for (int i = 0; i < n; ++i)
	{
		pll p = {sl(), sl()};
		if (p.st != 0 || p.nd != 0)
			P[it++] = p; 
	}
	n = it;
}

void solve()
{
	sort(P, P + n, [](const pll& p1, const pll& p2){
		bool part1 = getpart(p1);
		bool part2 = getpart(p2);
		if (part1 != part2)
			return part1 < part2;
		return vect(p1, p2) > 0;
	});

	vpll v;
	int it = 0;
	while (it < n)
	{
		if (P[it].st == 0 && P[it].nd == 0)
		{
			++it;
			continue;
		}

		pll cur = P[it];
		while (it + 1 < n && vect(cur, P[it + 1]) == 0 && getpart(cur) == getpart(P[it + 1]))
			cur = cur + P[++it];
		v.pb(cur);

		++it;
	}

	n = v.size();
	copy(v.begin(), v.end(), back_inserter(v));
	it = 0;
	ll res = 0;
	pll sum = {0, 0};

	for (int i = 0; i < n; ++i)
	{	
		if (it == i)
			sum = v[i];

		res = max(res, len(sum));

		while (it + 1 < i + n && vect(v[i], v[it + 1]) > 0)
			sum = sum + v[++it],
			res = max(res, len(sum));

		sum = sum - v[i];
		if (i == it)
			++it;
	}

	pld(sqrtl(res));
}

int main()
{		
	read();
	solve();	

	return 0;
}

template<typename T>
T scanf_t(string&& token)
{
	T a;
	scanf(token.c_str(), &a);
	return a;
}

int si() { return scanf_t<int>("%d"); }
ll sl() { return scanf_t<ll>("%lld"); }
string ss(int n) { char T[n + 7]; scanf("%s", T); return string(T); }
char sc() { return scanf_t<char>(" %c"); }
float sf() { return scanf_t<float>("%f"); }
db sd() { return scanf_t<db>("%lf"); }
ldb sld() { return scanf_t<ldb>("%Lf"); }

template<typename T>
void print(T a, char sep)
{
	string token;
	if (is_same<T, int>::value)
		token = "%d";
	else if (is_same<T, ll>::value)
		token = "%lld";
	else if (is_same<T, string>::value)
		token = "%s";
	else if (is_same<T, char>::value)
		token = "%c";
	else if (is_same<T, float>::value)
		token = "%.6f";
	else if (is_same<T, db>::value)
		token = "%.8lf";
	else if (is_same<T, ldb>::value)
		token = "%.10Lf";
	token.push_back(sep);

	printf(token.c_str(), a);
}

template<typename T, typename... Args>
void print(T first, Args... rest)
{
	print(first, ' ');
	print(rest...);
}

void pi(const int& a, char sep) { printf("%d%c", a, sep); }
void pl(const ll& a, char sep) { printf("%lld%c", a, sep); }
void pf(const float& a, char sep) { printf("%.6f%c", a, sep); }
void pc(const char& a, char sep) { printf("%c%c", a, sep); }
void pd(const db& a, char sep) { printf("%.8lf%c", a, sep); }
void pld(const ldb& a, char sep) { printf("%.16Lf%c", a, sep); }
void ps(const string& a, char sep) { printf("%s%c", a.c_str(), sep); }

template<typename It>
void out(It begin, It end, char sep, char endl)
{
	while (begin + 1 != end)
		print(*begin, sep),
		++begin;

	if (begin != end)
		print(*begin, ' '),
		printf("%c", endl);
}

template<typename T>
void pv(const vector<T>& v, char sep, char endl) { out(v.begin(), v.end(), sep, endl); }

ll russian(ll a, ll k, ll m)
{
	ll res = 0;
	while (k)
	{
		if (k & 1LL)
			res = (res + a) % m;
		a = (a + a) % m;
		k >>= 1LL;
	}
	return res;
}

ll fastpow(ll a, ll k, ll m)
{
	ll res = 1;
	while (k)
	{
		if (k & 1LL)
			res = (res * a) % m;
		a = (a * a) % m;
		k >>= 1LL;
	}
	return res;
}

ll slowpow(ll a, ll k, ll m)
{
	ll res = 1;
	while (k)
	{
		if (k & 1LL)
			res = russian(res, a, m);
		a = russian(a, a, m);
		k >>= 1LL;
	}
	return res;
}

ll _gcd(ll a, ll b)
{
	while (b)
		swap(a %= b, b);
	return a;
}

ll _lcm(ll a, ll b)
{
	return a / _gcd(a, b) * b;
}

ll extgcd(ll a, ll b, ll& k, ll& l)
{
	if (b == 0)
	{
		k = 1; l = 0;
		return a;
	}
	ll res = extgcd(a, a % b, l, k);
	l -= a / b * k;
	return res;
}

ll _inv(ll a, ll p)
{
	return fastpow(a, p - 2, p);
}