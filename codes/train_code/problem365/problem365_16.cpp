#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define irep(i, n) for (int i = (n); i >= 0; i--)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = 1 << 25;
const int MOD = 1e9+7;
const int S = 1e9;
int main() {
	ll s;
	cin >> s;
	ll x3, y3;
	y3 = (s + S - 1) / S;
	x3 = S * y3 - s;
	cout << 0 << " " << 0 << " ";
	cout << S << " " << 1 << " ";
	cout << x3 << " " << y3 << endl;
 	return 0;
}