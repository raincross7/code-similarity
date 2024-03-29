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
     
ll N;
string S;
     
int main(int argc, char **argv)
{
	cin >> N >> S;
     
	string res(N, ' ');
	bool is{false};
	REP(i, 2)REP(j, 2)
	{
		res.assign(N, ' ');
		
		if (i == 0)
			res[0] = 'S';
		else
			res[0] = 'W';
     
		if (j == 0)
			res[1] = 'S';
		else
			res[1] = 'W';
     
		for (ll i = 1; i < N-1; ++i)
		{
			char c = res[i];
     
			if (c == 'S')
			{
				if (S[i] == 'o')
					res[i+1] = res[i-1];
				else
				{
					if (res[i-1] == 'S')
						res[i+1] = 'W';
					else
						res[i+1] = 'S';
				}
			}
			else // wolf
			{
				if (S[i] == 'x')
					res[i+1] = res[i-1];
				else
				{
					if (res[i-1] == 'S')
						res[i+1] = 'W';
					else
						res[i+1] = 'S';
				}
			}
		}

		ll ok{true};

		REP(i, N)
		{
			char c = res[i];
			char l = res[(i-1+N)%N];
			char r = res[(i+1)%N];
			char is = S[i];

			if (c == 'S')
			{
				if (is == 'o')
				{
					if (l != r)
						ok = false;
				}
				else // 'x'
				{
					if (l == r)
						ok = false;
				}
			}
			else // wolf
			{
				if (is == 'o')
				{
					if (l == r)
						ok = false;
				}
				else
					if (l != r)
						ok = false;
			}
		}
		if (ok)
		{

			std::cout << res << std::endl;
			return 0;
		}
     
	}
     
	std::cout << -1 << std::endl;
}
