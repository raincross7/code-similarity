#include <bits/stdc++.h>
#define pb push_back
#define ppb pop_back
#define fi first
#define se second
#define mid ((x + y) / 2)
#define left (ind * 2)
#define right (ind * 2 + 1)
#define mp make_pair
#define timer ((double)clock() / CLOCKS_PER_SEC)
#define endl "\n"
#define spc " "
#define d1(x) cerr<<#x<<":"<<x<<endl
#define d2(x, y) cerr<<#x<<":"<<x<<" "<<#y<<":"<<y<<endl
#define d3(x, y, z) cerr<<#x<<":"<<x<<" "<<#y<<":"<<y<<" "<<#z<<":"<<z<<endl
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

typedef long long int lli;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef pair<double, double> dd;

const int N = (int)(1e6 + 5);
const int LOG = (int)(20);
const lli mod = (lli)(1e9 + 7);

lli n, m, x[N], y[N], an1, an2;

int main() {
	fast_io();
	// freopen("inp.in", "r", stdin);
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		cin >> x[i];
	for(int i = 1; i <= m; i++)
		cin >> y[i];
	for(int i = 1; i <= n - 1; i++) {
		an1 += (n - i) * x[i] % mod - i * x[i + 1] % mod + mod + mod;
		an1 %= mod;
	}
	for(int i = 1; i <= m - 1; i++) {
		an2 += (m - i) * y[i] % mod - i * y[i + 1] % mod + mod + mod;
		an2 %= mod;
	}
	cout << an1 * an2 % mod;

}