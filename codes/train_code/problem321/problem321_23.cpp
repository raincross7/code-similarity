#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll MOD = 1000000007;
constexpr ll INF = 1ll<<60;


int main(int argc, char **argv)
{
	ll N, K; cin >> N >> K;
	vector<ll> A(N); for (ll i = 0; i < N; ++i) cin >> A[i];
	vector<ll> imo(2010, 0);
	for (ll i = 0; i < N; ++i)
		imo[A[i]]++;
	for (ll i = 2005; i >= 1; --i)
		imo[i] = imo[i] + imo[i+1];


	ll tmp1{0};
	for (ll i = 0; i < N; ++i)
	{
		for (ll j = 0; j < i; ++j)
		{
			if (A[j] > A[i])
				(++tmp1)%=MOD;
		}
	}

	ll tmp2{0};
	for (ll i = 0; i < N; ++i)
		(tmp2 += imo[A[i]+1])%=MOD;


	auto f = [](ll a, ll d, ll n)
			 {
				 return ((2*a+(n-1)*d)*n)/2;
			 };
	
	std::cout << ((f(1, 1, K-1)%MOD*tmp2)%MOD + (K*tmp1)%MOD)%MOD << std::endl;
}
 