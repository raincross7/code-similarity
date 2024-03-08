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
 
lli n, l, t, pos[N], off;
ii p[N];
vector<lli> v;
 
int main() {
	fast_io();
	// freopen("inp.in", "r", stdin);
	
	cin >> n >> l >> t;
	for(int i = 1; i <= n; i++) {
		cin >> p[i].fi >> p[i].se;
		p[i].se = p[i].se == 2 ? -1 : 1;
	}
	for(int i = 1; i <= n; i++) {
		lli ps = p[i].fi + p[i].se * t;
		lli pos = ((ps % l) + l) % l;
		v.pb(pos);
		off += (ps > 0 ? ps / l : (ps - l + 1) / l);
	}
	off = ((off % n) + n) % n;
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++)
		cout << v[(i + off) % n] << endl;
}