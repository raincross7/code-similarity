#include <bits/stdc++.h>
using namespace std;

using ll = long long;

constexpr ll MOD = 1e9+7;
constexpr ll INF = 1ll<<60;

#define FOR(i,a,b) for (ll i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()

ll x[60];
ll p[60];
ll c{0};

ll f(ll N, ll X)
{

	if (X == 1) {return N == 0;}
	else if (1 < X && X <= x[N-1] + 1) return f(N-1, X-1);
	else if (X == x[N-1] + 2) return p[N-1] + 1;
	else if (x[N-1] + 2 < X && X <= 2*x[N-1] + 2) return p[N-1] + f(N-1, X-x[N-1]-2) + 1;
	else if (X == 2*x[N-1]+3)return 2*p[N-1] + 1;
}

int main(int argc, char **argv)
{
	ll N, X; cin >> N >> X;
	x[0] = p[0] = 1;
	REP(i, 50)
	{
		x[i+1] = 2*x[i] + 3;
		p[i+1] = 2*p[i] + 1;
	}

	std::cout << f(N, X) << std::endl;
}
