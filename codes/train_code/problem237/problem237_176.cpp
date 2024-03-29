#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(int argc, char **argv)
{
	ll N, M; cin >> N >> M;
	vector<ll> E[3];

	for (ll n = 0; n < N; ++n)
		for (ll i = 0; i < 3; ++i)
		{
			ll a; cin >> a;
			E[i].push_back(a);
		}

	ll res{0};
	for (ll bits = 0; bits < (1 << 3); ++bits)
	{
		vector<ll> tmp_v;
		for (ll n = 0; n < N; ++n)
		{
			ll tmp{0};
			for (ll i = 0; i < 3; ++i)
			{
				if (bits & (1<<i)) tmp += E[i][n];
				else tmp -= E[i][n];
			}
			tmp_v.push_back(tmp);
		}
		sort(tmp_v.begin(), tmp_v.end(), greater<ll>());
		res = max(res, accumulate(tmp_v.begin(), next(tmp_v.begin(), M), 0ll));
	}
	
	std::cout << res << std::endl;
}
