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
const int MOD=1000000007;
signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int N, K; cin >> N >> K;
	vector<int> v;
	rep(i, N) { int t; cin >> t; v.pb(t); }
	sort(all(v));
	ll ans = 0;
	rep(i, N-K) ans += v[i];
	cout << ans << endl;
}