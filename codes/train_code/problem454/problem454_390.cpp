#include <bits/stdc++.h>
using namespace std;

using ll = long long;

constexpr ll MOD = 1e9+7;
constexpr ll INF = 1ll<<60;

#define FOR(i,a,b) for (ll i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()



int main(int argc, char **argv)
{
	ll H, W, A, B; cin >> H >> W >> A >> B;

	REP(h, H)
	{
		REP(w, W)
		{
			if (h < B && w < A || B <= h && A <= w)
				std::cout << 0;
			else
				std::cout << 1;
		}
		std::cout << std::endl;
	}
}