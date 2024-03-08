#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
 
/* attention
    long longのシフト演算には気をつけよう
    タイポした時のデバッグが死ぬほどきつくなるので変数名は最低3字くらい使った方がいいかも
    sizeは(int)とキャストしよう
    ごちゃごちゃ場合分けを考える前に全探索は考えましたか？
*/
 
const ll mod = 1e9+7;

void chmod(ll &M){
    if(M >= mod) M %= mod;
    else if(M < 0){
        M += (abs(M)/mod + 1)*mod;
        M %= mod;
    }
}

ll modpow(ll x, ll n){
    if(n == 0) return 1;

    ll res = modpow(x, n/2);
    if(n%2 == 0) return res*res%mod;
    else return res*res%mod*x%mod;
}

ll power(ll x, ll n){
    if(n == 0) return 1;

    ll res = power(x, n/2);
    if(n%2 == 0) return res*res;
    else return res*res*x;
}

int getl(int i, int N) { return i==0? N-1:i-1; };
int getr(int i, int N) { return i==N-1? 0:i+1; };

/* <--------------------------------------------> */

typedef tuple<ll, ll, ll> T;


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n, k; cin >> n >> k;

    vector< pair<ll, ll> > dt(n);
    for(int i=0; i<n; ++i) cin >> dt[i].second >> dt[i].first;
    sort(dt.begin(), dt.end(), greater< pair<ll, ll> >());
    
    map<ll, ll> mp;
    ll sum_D = 0;

    for(int i=0; i<k; ++i){
        sum_D += dt[i].first;
        ++mp[dt[i].second];
    }

    ll type_num = mp.size();
    ll ans = sum_D + type_num*type_num;

    // next phaze
    int nxt = k, del = k-1;
    while(1){
        while(nxt<n && mp[dt[nxt].second]!=0) ++nxt;
        if(nxt == n) break;
        ++type_num;
        sum_D += dt[nxt].first;
        ++mp[dt[nxt].second];
        ++nxt;
        
        while(del>=0 && mp[dt[del].second]<2) --del;
        if(del < 0) break;
        sum_D -= dt[del].first;
        --mp[dt[del].second];
        --del;

        chmax(ans, sum_D + type_num*type_num);
    }

    cout << ans << endl;
    
	return 0;
}