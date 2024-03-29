// writer: w33z8kqrqk8zzzx33
#include <bits/stdc++.h>
using namespace std;

#define iter(i, a, b) for(int i=(a); i<(b); i++)
#define rep(i, a) iter(i, 0, a)
#define rep1(i, a) iter(i, 1, (a)+1)
#define log(a) cerr<<"\033[32m[DEBUG] "<<#a<<'='<<(a)<<" @ line "<<__LINE__<<"\033[0m"<<endl
#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define pb push_back
#define mp make_pair

using ll=long long;
using pii=pair<int, int>;
//#define int ll
const int MOD = 1000000007;

vector<pair<string, int>> ps;

signed main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin >> n;
	rep(i, n) {
		string a; int b; cin >> a >> b;
		ps.pb({a, b});
	}
	string t; cin >> t;
	int ans = -1; 
	for(auto& e:ps) {
		if(ans != -1) ans += e.se;
		if(e.fi == t) ans = 0;
	}
	cout << ans << endl;
}
