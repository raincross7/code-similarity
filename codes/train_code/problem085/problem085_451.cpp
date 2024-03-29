#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using P = pair<ll, ll>;

const ll MOD = 1e9+7;
// const ll MOD = 998244353;
const ll INF = 1ll<<60;

#define FOR(i,a,b) for (ll i=(a);i<(ll)(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()

map<long long, long long> prime_factor(long long n) {
	map<long long, long long> ret;
	for(long long i = 2; i * i <= n; i++) {
		while(n % i == 0) {
			ret[i]++;
			n /= i;
		}
	}
	if(n != 1) ret[n] = 1;
	return ret;
}

map<ll, ll> prime;
ll n;

template<typename iterator>
ll solve(iterator it, ll num)
{
	if (it == prime.end())
	{
		return (num == 1);
	}

	ll res{0};
	for (ll i = 1; i <= it->second+1; ++i)
	{
		if (num % i != 0) continue;
		res += solve(next(it), num/i);
	}
	return res;
}

int main(int argc, char **argv)
{
	cin >> n;
	for (ll i = 1; i <= n; ++i)
	{
		auto tmp = prime_factor(i);
		for (auto &p : tmp)
		{
			prime[p.first] += p.second;
		}
	}

	std::cout << solve(prime.begin(), 75) << std::endl;
}
