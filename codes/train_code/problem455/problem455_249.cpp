#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define rep(i,m,n) for(ll i = (m); i <= (n); i++)
#define rrep(i,m,n) for(ll i = (m); i >= (n); i--)
#define print(x) cout << (x) << endl;
#define printa(x,m,n) for(ll i = (m); i <= n; i++){cout << (x[i]) << " ";} cout<<endl;

ll n, a[100008];
string s;

int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	
	cin >> n;
	rep(i, 1, n){cin >> a[i];}
	
	ll mx = 1;
	ll ans = 0;
	rep(i, 1, n){
		if(mx == 1){
			ans += a[i]-1;
			mx = 2;
		}
		else{
			if(mx == a[i]){
				mx++;
			}
			else{
				ans += (a[i]-1)/mx;
			}
		}
	}; 
	
	print(ans)
	return 0;
}