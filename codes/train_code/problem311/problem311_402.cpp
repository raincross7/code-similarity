#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1000000007;
const int INF = 1001001001;

template<class Type>
Type modpow(Type a, Type n, Type mod)
{
	Type res = 1;
	while (0 < n) {
		if (n & 1) {
			res = res * a % mod;
		}
		a = a * a % mod;
		n >>= 1;
	}
	return res;
}

template<class Type>
Type gcd(Type x, Type y)
{
	Type r;
	if (x < y) swap(x, y);

	while (0 < y) {
		r = x % y;
		x = y;
		y = r;
	}
	return x;
}

template<class Type>
Type lcm(Type x, Type y)
{
	return x * y / gcd(x, y);
}

template<class Type>
bool is_prime(Type x)
{
	if (x == 2) return true;
	if (x < 2 || x % 2 == 0) return false;

	for (Type i = 3; i <= sqrt(x); i += 2) {
		if (x % i == 0) return false;
	}
	return true;
}

template<class Type>
vector<bool> eratos(Type n)
{
	vector<bool> isPrime(n + 1, true);
	isPrime[0] = isPrime[1] = false;
	for (Type i = 2; i <= n; i++) {
		if (isPrime[i]) {
			Type j = i + i;
			while (j <= n) {
				isPrime[j] = false;
				j = j + i;
			}
		}
	}
	return isPrime;
}

bool binary_search_judge(vector<int> a, int index, int key)
{
	if (key <= a[index]) return true;
	else return false;
}

int binary_search(vector<int> a, int key)
{
	int ng = -1;
	int ok = a.size();
	while (1 < abs(ng - ok)) {
		int mid = (ng + ok) / 2;
		if (binary_search_judge(a, mid, key)) ok = mid;
		else ng = mid;
	}
	return a[ok] == key;
}

int main()
{
	int n;
	cin >> n;
	string x;
	vector<pair<string, int>> playlist(n);
	for (int i = 0; i < n; i++) {
		string s;
		int t;
		cin >> s >> t;
		playlist[i] = make_pair(s, t);
	}
	cin >> x;

	int ans = 0;
	bool is_sleep = false;
	for (int i = 0; i < n; i++) {
		if (is_sleep) ans += playlist[i].second;
		if (playlist[i].first == x) is_sleep = true;
	}
	cout << ans << endl;
}