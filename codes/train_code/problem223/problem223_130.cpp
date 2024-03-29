#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(int argc, char **argv)
{
	ll N; cin >> N;
	vector<ll> A(N);
	for (ll i = 0; i < N; ++i) cin >> A[i];

	ll sum{0}, r{0}, res{0};

	for (ll l = 0; l < N; ++l)
	{
		while (r < N && (sum + A[r] == (sum ^ A[r])))
		{
			sum += A[r];
			++r;
		}
		res += r - l;

		if (r == l) ++r;
		else sum -= A[l];
	}
	std::cout << res << std::endl;
}