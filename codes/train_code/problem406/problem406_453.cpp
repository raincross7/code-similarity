#include<bits/stdc++.h>
using namespace std;
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define endl '\n'
#define ld long double
#define FOR(i,a,n) for (ll i=(a);i<=(n);++i)
#define RFOR(i,a,n) for (ll i=(n);i>=(a);--i)
#define FI(i,n) for (ll i=0; i<(n); ++i)
#define ZERO(a) memset((a),0,sizeof((a)))
#define MINUS(a) memset((a),-1,sizeof((a)))
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define all(g) g.begin(),g.end()
int fastMax(int x, int y) { return (((y-x)>>(32-1))&(x^y))^y; }
int fastMin(int x, int y) { return (((y-x)>>(32-1))&(x^y))^x; }
 
/*
░░░░░░░░░░░░░░░░░░░░░░░░░
░░█▀▀▄░░░░░░░░░░░▄▀▀█░░░░
░░█░░░▀▄░▄▄▄▄▄░▄▀░░░█░░░░
░░░▀▄░░░▀░░░░░▀░░░▄▀░░░░░
░░░░░▌░▄▄░░░▄▄░▐▀▀░░░░░░░
░░░░▐░░█▄░░░▄█░░▌▄▄▀▀▀▀█░
░░░░▌▄▄▀▀░▄░▀▀▄▄▐░░░░░░█░
░▄▀▀▐▀▀░▄▄▄▄▄░▀▀▌▄▄▄░░░█░
░█░░░▀▄░█░░░█░▄▀░░░░█▀▀▀░
░░▀▄░░▀░░▀▀▀░░▀░░░▄█▀░░░░
░░░░█░░░░░░░░░░░▄▀▄░▀▄░░░
░░░░█░░░░░░░░░▄▀█░░█░░█░░
░░░░█░░░░░░░░░░░█▄█░░▄▀░░
░░░░█░░░░░░░░░░░████▀░░░░
░░░░▀▄▄▀▀▄▄▀▀▄▄▄█▀░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░
*/
 
// I want to be the very best, like no one ever was, I will battle everyday to claim my rightful place
// #include <ext/pb_ds/assoc_container.hpp> // Common file
// #include <ext/pb_ds/tree_policy.hpp>     // Including tree_order_statistics_node_updat
// using namespace __gnu_pbds;
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
 
// I am questioning life and universe and 
// everything else after looking at this

const ll MAXN = 1e5 + 10;
const ll LOG_A = 61;
ll a[MAXN];
ll basis[LOG_A];

void insertVector(ll mask){
    
    for(ll i=LOG_A-1;i>=0;i--){
        if((mask&(1LL<<i)) == 0) continue;
        if(basis[i] == 0){
            basis[i] = mask;
            return;
        }
        mask ^= basis[i];
    }
}

void solve(){
    ll n; cin>>n;
    ll ans = 0;
    FOR(i,1,n) cin>>a[i];

    FOR(bit,0,LOG_A-1){
        ll cnt = 0;
        ll val = (1LL<<bit);
        FOR(i,1,n){
            if((a[i]&val)) cnt++;
        }
        
        if(cnt&1){
            FOR(i,1,n){
                if((a[i]&val)) a[i] = a[i]^val;
            }

            ans += val;
        }
    }

    FOR(i,1,n) insertVector(a[i]);

    ll max_val = 0;

    for(ll i=LOG_A-1;i>=0;i--){
        if(basis[i] == 0) continue;
        if((max_val&(1LL<<i))) continue;
        max_val = max_val^basis[i];
    }

    ans = ans + max_val*2;
    cout<<ans<<endl;
}   

signed main(){
 
   FastRead;    


    ll t;
    t = 1; 
    // cin>>t;
    FOR(i,1,t){
        // cout<<"Case #"<<i<<": ";
        solve();
    }
}