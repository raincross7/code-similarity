#include <bits/stdc++.h>
#define pb push_back
#define all(a) a.begin(), a.end()
#define sz(a) (int)a.size()
#define x first
#define y second
#define debug(...) cout << "[" << #__VA_ARGS__ << ": " << __VA_ARGS__ << "]\n"
#define rd() abs((int)rng())
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int>pii;
const int maxn = 3e5 + 100;
const int mod = 1e9 + 7;
mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0);
	string s; cin >> s;
	int o = 0;
	for(char c : s)
		o += (c == 'o');
	cout << (o + (15 - sz(s)) >= 8 ? "YES" : "NO");
	return 0;
}