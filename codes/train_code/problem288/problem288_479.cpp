#include<bits/stdc++.h>
using namespace std;
#define MAX 100001
#define MOD 1000000007
#define ll long long
#define ld long double
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
int main() {
	fast;
	int t = 1;
	// cin >> t;
    while(t--) {
		ll n;
		cin >> n;
		vector<ll> v(n);
		for(ll i=0;i<n;i++) {
			cin >> v[i];
		}
		ll curr = v[0], ans = 0;
		for(ll i=1;i<n;i++) {
			if(v[i] <= curr) ans += curr - v[i];
			else curr = v[i];
		}
		cout << ans << endl;
    }
}
