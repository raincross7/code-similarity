#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
using P = pair<ll, ll>;
using V = vector<ll>;
#define rep(i, n) for(ll i=0;i<(ll)(n);i++)
#define rep1(i, n) for(ll i=1;i<=(ll)(n);i++)
#define rep2(i, m, n) for(ll i=m;i<(ll)(n);i++)
#define rrep(i, n, m) for(ll i=n;i>=(ll)(m);i--)
#define ALL(obj) (obj).begin(), (obj).end()
#define RALL(obj) (obj).rbegin(), (obj).rend()
#define MOD 1000000007
#define INF 1000000000
#define LLINF 1e18

template<class T>bool chmax(T & a, const T & b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T & a, const T & b) { if (b < a) { a = b; return 1; } return 0; }

void solve_abc_a() {
	ll n, m;
	ll x, y;
	ll a, b, d;
	ll c;
	//char c;
	ll h, w;
	ll k;
	string s, t;
	//ll s, t;
	ll l_ans = 0;
	string s_ans = "NG";

	cin >> h >> w;
	vector<string> cv(h);
	rep(i, h) cin >> cv[i];

	s_ans = "Yes";
	bool is_ok = false;
	rep(i, h)rep(j, w) {
		if (cv[i][j] == '#') {
			int dw[] = { -1,0,1,0 }, dh[] = { 0,1,0,-1 };
			is_ok = false;
			rep(k, 4) {
				int nh = i + dh[k];
				int nw = j + dw[k];
				if (nh >= 0 && nh <= h - 1 && nw >= 0 && nw <= w - 1) {
					if (cv[nh][nw] == '#') {
						is_ok = true;
						break;
					}
				}
			}
			if (!is_ok) {
				s_ans = "No";
				break;
			}
		}
	}

	cout << s_ans << "\n";

	return;
}


int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cout << fixed;
	cout << setprecision(7);

	solve_abc_a();

	return 0;
}
