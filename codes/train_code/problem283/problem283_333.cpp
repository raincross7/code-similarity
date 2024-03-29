#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll MOD = 1000000007;
constexpr ll INF = 1ll<<60;

int main(int argc, char **argv)
{
	string str; cin >> str;
	ll N = (ll)str.size();
	vector<ll> v;
	v.reserve(2*N+1);
	for (ll i = 0; i < N; ++i)
	{
		v.push_back(0);
		v.push_back(str[i]);
	}
	v.push_back(0);
	N = 2 * N + 1;

	
	for (ll i = 0; i < N;)
	{
		ll l = i+1;
		ll j = i+2;
		if (v[l] == '<')
		{
			v[i] = 0;
			ll c{1};
			for (; j < N; j+=2)
			{
				if (v[j-1] != '<') break;
				v[j] = max(v[j], c++);
			}
		}
		i = j;
	}

	reverse(v.begin(), v.end());
	for (ll i = 0; i < N;)
	{
		ll l = i+1;
		ll j = i+2;
		if (v[l] == '>')
		{
			v[i] = 0;
			ll c{1};
			for (; j < N; j+=2)
			{
				if (v[j-1] != '>') break;
				v[j] = max(v[j], c++);
			}
		}
		i = j;
	}

	ll res{0};
	for (ll i = 0; i < N; i+=2)
		res += v[i];

	// for (ll i = 0; i < N; ++i)
	// 	std::cout << v[i] << " ";
	// std::cout << std::endl;
	std::cout << res << std::endl;
}