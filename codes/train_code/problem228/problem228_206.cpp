#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll MOD = 1000000007;
constexpr ll INF = 1l<<60;

int main(int argc, char **argv)
{
	ll N; cin >> N;
	ll mi, ma;
	cin >> mi >> ma;
	std::cout << max(0ll, (ma*(N-1)+mi) - (mi*(N-1)+ma) + 1) << std::endl;
}