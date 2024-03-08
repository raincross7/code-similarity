#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

const int infI=1e9+5;
const long long infL=1e16;
const int MOD=998244353;
const int MAX=2e5+5;

#define mp make_pair
#define in &
#define pb push_back
#define ii pair<int,int>
#define iii pair<ii,int>
#define ll long long
#define pll pair<ll,ll>
#define vvl vector<vector<ll> >
#define vi vector<int>
#define vvi vector<vector<int> >
#define vl vector<ll>
#define eb emplace_back
#define forn(i,a,b) for(ll i=a;i<b;i++)
#define fastio ios_base::sync_with_stdio(0);cin.tie(0)
#define endl '\n'
#define popb pop_back()
#define se second
#define fi first
#define test(t) int t;cin>>t;while(t--)
#define debug(x) cerr<<"=>"<<#x<<" = "<<x<<endl

ll power(ll a,ll b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    ll temp=power(a,b/2);
    temp=(temp*temp)%MOD;
    if(b%2){
        temp=(temp*a)%MOD;
    }
    return temp;
}

//only use if mod is prime
ll mod_inv(ll a,ll mod){
    a%=mod;
    return power(a,mod-2);
}

void extended_gcd(ll a,ll b,ll &x,ll &y){
    if(b==0){
        x=1;
        y=0;
        return;
    }
    ll x1,y1;
    extended_gcd(b,a%b,x1,y1);
    x=y1;
    y=x1-((a/b)*y1);
    return;
}

//TLE can also occur if vectors are not passed by reference
//priority_queue implements max heap by default

int main(){
    fastio;
    int n;
    cin>>n;
    vl a(n);
    forn(i,0,n){
        cin>>a[i];
    }
    ll ans = 1;
    if(a[0]!=0){
        ans = 0;
    }
    sort(a.begin(),a.end());
    ll cnt = 0;
    for(auto x:a){
        if(x==0){
            ++cnt;
        }
    }
    vl b = a;
    b.resize(distance(b.begin(),unique(b.begin(),b.end())));
    forn(i,1,b.size()){
        if(b[i]-b[i-1]>1){
            cnt=0;
            break;
        }
    }
    if(cnt!=1){
        cout<<0;
        return 0;
    }
    map<ll,ll> m;
    for(auto x:a){
        m[x]++;
    }
    ll lst = 1;
    for(auto x:m){
        ll u = (power(lst,x.se));
        lst = x.se;
        ans = (ans*u)%MOD;
    }
    cout<<ans;
    return 0;
}