#include <bits/stdc++.h>
using namespace std;

using ll = long long;

constexpr ll MOD = 1e9+7;
constexpr ll INF = 1ll<<60;

#define FOR(i,a,b) for (ll i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()

struct grid{ll to; ll cost;};
vector<vector<grid>> G;
using P = pair<ll, ll>;
	

int main(int argc, char **argv)
{
	ll N; cin >> N;
	G.resize(N);

	REP(i, N-1)
	{
		ll a, b, c; cin >> a >> b >> c;
		--a, --b;
		G[a].push_back(grid{b, c});
		G[b].push_back(grid{a, c});
	}

	ll Q, K; cin >> Q >> K;
	queue<ll> que;
	vector<ll> dist(N, -1);
	dist[K-1] = 0;
	que.push(K-1);

	while (!que.empty())
	{
		ll v = que.front(); que.pop();

		for (auto &nP : G[v])
		{
			ll nv = nP.to;
			ll nc = nP.cost;
			if (dist[nv] != -1) continue;

			dist[nv] = dist[v] + nc;
			que.push(nv);
		}
	}

	REP(i, Q)
	{
		ll x, y; cin >> x >> y;
		--x, --y;
		std::cout << dist[x] + dist[y]<< std::endl;
	}

}
