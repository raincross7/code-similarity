#include<bits/stdc++.h>
// Begin Header {{{
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using Graph = vector<vector<ll>>;
#define rep(i,n) for(ll i=0; i<n; i++)
#define loop(i, j, n) for(ll i=j; i<n; i++)
#define all(x) (x).begin(), (x).end()
constexpr int INF  = 0x3f3f3f3f;
const long long mod=1e9+7;
const long double PI = acos(-1);
// }}} End Header
int calc(int t){
	if(t%2 == 0) return t/2;
	else return 3*t+1;
}
int main() {
	int s;
	cin >> s;
	map<int, int> m;
	m[s]++;
	int old=s;
	int ans = 1;
	while(1){
		ans++;
		int k = calc(old);
		//cout << k;
		m[k]++;
		if(m[k]>1){
			cout << ans << endl;
			return 0;
		}
		old = k;
	}
	return 0;
}