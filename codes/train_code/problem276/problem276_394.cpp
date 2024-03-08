#include <bits/stdc++.h>
#include<cmath>
#define N 100005
#define A 1000005
#define MOD 998244353 //1000000007 // //100000000
#define INF 1000000000000000000
#define ll long long
//#define M_PI 3.141592653589793238463

using namespace std;

#define pii pair<ll, ll>
#define piii pair<ll, pii>
#define ft first
#define sd second
#define pb push_back
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n-1; i >= 0; i--)
#define itr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define mem(a, b) memset(a, (ll)b, sizeof(a))
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define edge(v, x, y) v[x].pb(y); v[y].pb(x);
#define popcount __builtin_popcount
#define ANS(s) {cout << s << "\n"; return;}

//~~~~~~fancy print~~~~~~~//
#define printpii(a) cout << a.ft << " " << a.sd << endl;
#define printpiii(a) cout << a.ft << " " << a.sd.ft << " " << a.sd.sd << endl;
#define print(a, n) rep(i, n) cout << a[i] << " "; cout << endl;
#define printv(v) for(auto x: v)cout << x << " "; cout << endl;
#define printm(a, n, m) rep(i, n) { rep(j, m) cout << a[i][j] << "\t"; cout << endl;}

ll dx[4] = {0, 0, 1, -1};
ll dy[4] = {1, -1, 0, 0};

void fast(){ios_base::sync_with_stdio(false);cin.tie(0);cout << setprecision(12) << fixed;}

bool cmp(pii a, pii b){
    if(a.ft == b.ft) return a.sd < b.sd;
    return a.ft > b.ft;
}
void solve(){
    ll a, b, m;
    cin >> a >> b >> m;
    ll aa[a], bb[b];
    rep(i, a)cin >> aa[i];
    rep(i, b) cin >> bb[i];
    ll kk = INF;
    rep(i, m)
    {
        ll x, y, c;
        cin >> x >> y >> c; x--, y--;
        kk = min(kk, aa[x] + bb[y] - c);
    }
    kk = min(kk, (ll) (*min_element(aa, aa+a) + *min_element(bb, bb+b)));
    cout << kk;
}
main(){
    fast();
    ll t = 1; //cin >> t;
    while(t--){
        solve();
    }
}