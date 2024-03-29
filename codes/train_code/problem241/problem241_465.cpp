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


int main(int argc, char **argv)
{
	ll N; cin >> N;
	vector<ll> T(N), A(N);
	REP(i, N) cin >> T[i];
	REP(i, N) cin >> A[i];

	vector<pair<ll, ll>> tt(N), aa(N);

	tt[0].first = tt[0].second = T[0];
	REP(i, N-1)
	{
		ll l, r;
		if (tt[i].second < T[i+1])
		{
			r = l = T[i+1];
		}
		else
		{
			r = tt[i].second;
			l = 1;
		}
		tt[i+1].first = l;
		tt[i+1].second = r;
	}

	reverse(ALL(A));
	aa[0].first = aa[0].second = A[0];
	REP(i, N-1)
	{
		ll l, r;
		if (aa[i].second < A[i+1])
		{
			r = l = A[i+1];
		}
		else
		{
			r = aa[i].second;
			l = 1;
		}
		aa[i+1].first = l;
		aa[i+1].second = r;
	}
	reverse(ALL(aa));

	ll res{1};
	REP(i, N)
	{
		auto &a = aa[i];
		auto &t = tt[i];

		ll tmp = min(a.second, t.second) - max(a.first, t.first);
		// std::coutr << "tmp : " << tmp << std::endl;
		(res *= max(0ll, tmp+1)) %= MOD;
	}
	
	std::cout << res << std::endl;
}