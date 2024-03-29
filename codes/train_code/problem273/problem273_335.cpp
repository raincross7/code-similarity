#include <bits/stdc++.h>
using namespace std;

using ll = long long;

constexpr ll MOD = 1e9+7;
constexpr ll INF = 1ll<<60;

#define FOR(i,a,b) for (ll i=(a);i<(ll)(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()

int main(int argc, char **argv)
{
	ll n, d, a; cin >> n >> d >> a;
	d *= 2;
	vector<pair<ll, ll>> v(n);
	REP(i, n) cin >> v[i].first >> v[i].second;
	sort(ALL(v));

	queue<pair<ll, ll>> que;
	ll res{0};
	ll tot{0};
	REP(i, n)
	{
		ll x = v[i].first;
		ll h = v[i].second;

		while (que.size() && que.front().first < x)
		{
			tot -= que.front().second;
			que.pop();
		}

		h -= tot;
		if (h > 0)
		{
			ll cnt = (h+a-1)/a;
			res += cnt;
			ll dam = cnt * a;
			tot += dam;
			que.emplace(x+d, dam);
		}
	}

	std::cout << res << std::endl;
}
