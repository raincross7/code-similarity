#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int  ,int > pii;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const ll maxn  = 3e6;
const ll mod =1e9+7;
const ld PI = acos((ld)-1);

#define pb push_back
#define endl '\n'
#define dokme(x) return(cout << x , 0);
#define migmig ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ms(x , y) memset(x , y , sizeof x);
#define file_init freopen("input.txt", "r+", stdin); freopen("output.txt", "w+", stdout);
ll pw(ll a, ll b, ll md = mod){ll res = 1;while(b){if(b&1){res=(a*res)%md;}a=(a*a)%md;b>>=1;}return(res);}

ll n , k;
ll prt[maxn] , pos[maxn];
ll a[maxn];

int main(){
    migmig
    ll ans = 0;
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i ++)
		cin >> a[i] , prt[i] = prt[i-1] + a[i] , pos[i] = pos[i-1]+max(0LL , a[i]);
    for(int i = 1 ; i <= n - k + 1 ; i ++){
		ll val = prt[i+k-1] - prt[i-1];
		ll ps  = pos[i+k-1] - pos[i-1];
		ans = max(ans , val + pos[n] - ps);
		ans = max(ans , pos[n] - ps);
	}
    cout << ans;
    return(0);
}