//#include <bits/stdc++.h>
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
//#include "boost/multiprecision/cpp_int.hpp"
//typedef boost::multiprecision::cpp_int LL;
typedef long double dd;
#define i_7 (ll)(1E9+7)
//#define i_7 998244353
#define i_5 i_7-2

ll mod(ll a){
    ll c=a%i_7;
    if(c>=0)return c;
    return c+i_7;
}
typedef pair<ll,ll> l_l;
typedef pair<dd,dd> d_d;
ll inf=(ll)1E16;
#define rep(i,l,r) for(ll i=l;i<=r;i++)
#define pb push_back
ll max(ll a,ll b){if(a<b)return b;else return a;}
ll min(ll a,ll b){if(a>b)return b;else return a;}
void Max(ll &pos,ll val){pos=max(pos,val);}//Max(dp[n],dp[n-1]);
void Min(ll &pos,ll val){pos=min(pos,val);}
void Add(ll &pos,ll val){pos=mod(pos+val);}
dd EPS=1E-9;
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fi first
#define se second
#define endl "\n"
#define SORT(v) sort(v.begin(),v.end())
#define ERASE(v) v.erase(unique(v.begin(),v.end()),v.end())
#define POSL(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define POSU(v,x) (upper_bound(v.begin(),v.end(),x)-v.begin())
//template<class T>void max(T a,T b){if(a<b)return b;else return a;}
//template<class T>void min(T a,T b){if(a>b)return b;else return a;}
//template<class T>bool Max(T&a, T b){if(a < b){a = b;return 1;}return 0;}
//template<class T>bool Min(T&a, T b){if(a > b){a = b;return 1;}return 0;}

//////////////////////////

#define N 51
ll n,x;
ll ans=0;
ll mai[N];
ll pat[N];
void dfs(ll pos,ll level){
    if(level==0){
        if(pos>=x)return;
        pos++;
        ans++;
        return;
    }
    
    pos++;
    if(pos>=x)return;
    if(pos+mai[level-1]>=x){
        dfs(pos,level-1);
        return;
    }
    pos+=mai[level-1];
    ans+=pat[level-1];
    if(pos>=x)return;
    pos++;
    ans++;
    if(pos>=x)return;
    if(pos+mai[level-1]>=x){
        dfs(pos,level-1);
        return;
    }
    pos+=mai[level-1];
    ans+=pat[level-1];
    return;
}
int main(){fastio
    cin>>n>>x;
    mai[0]=1;
    pat[0]=1;
    rep(i,1,N-1){
        mai[i]=mai[i-1]*2+3;
        pat[i]=pat[i-1]*2+1;
    }
    dfs(0,n);
    cout<<ans<<endl;
    
    return 0;
}
