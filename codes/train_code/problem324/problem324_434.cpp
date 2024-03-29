#include "bits/stdc++.h"
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

map<ll, ll> prime_factor(ll n){
	map<ll, ll> res;
	for(ll i = 2; i*i <= n; i++){
		while(n%i == 0){
			res[i]++;
			n /= i;
		}
	}
	if(n != 1) res[n] = 1;
	return res;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    int ans = 0;
    for(auto p : prime_factor(n)){
        ll x = p.second, cnt = 1;
        while(x > 0){
            x -= cnt++;
            ++ans;
        }
        if(x < 0) --ans;
    }
    cout << ans << endl;
    return 0;
}
