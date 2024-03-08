#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll choose2(ll n){
	return n*(n-1)/2;
}

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i,n) cin >> a[i];
	rep(i,n) a[i]--;
	vector<int> cnt(n);
	rep(i,n) cnt[a[i]]++;
	ll tot = 0;
	rep(i,n){
		tot += choose2(cnt[i]);
	}
	rep(i,n){
		ll ans = tot;
		ans -= choose2(cnt[a[i]]);
		ans += choose2(cnt[a[i]]-1);
		cout << ans << endl;
	}
}

// cout << fixed << setprecision(15) <<  << endl;