#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(a) signed(a.size())
using namespace std;

void solve(){
	ll n,x,t;
	cin >> n >> x >> t;
	ll ans = 0,val = 0;
	for(ll i=1;i<=n;i++){
		ans = x*i;
		val += t;
		if(ans>=n) break;
	}
	cout << val << "\n";
}

int main() {
    FAST;
    ll t=1;
    //cin>>t;
    while(t--) solve();	
    return 0;
}

