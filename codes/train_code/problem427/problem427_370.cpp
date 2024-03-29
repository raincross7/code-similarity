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

#define N 100005
ll n,m,v,p;
ll a[N];
bool calc(ll mid){
    ll tar=n-p;
    if(mid>=tar)return true;
    /*
    if(mid+1+p<=v){
        if(a[mid]+m>=a[tar])return true;
        else return false;
    }*/
    if(a[mid]+m<a[tar])return false;
    ll cnt=0;
    rep(i,0,n-1){
        if(i<=mid||i>tar){
            cnt+=m;
        }else{
            cnt+=min(m,a[mid]+m-a[i]);
        }
    }
    if(cnt>=m*v)return true;
    else return false;
    
}

int main(){fastio
    cin>>n>>m>>v>>p;
    rep(i,0,n-1)cin>>a[i];
    sort(a,a+n);
    ll ok=n-1,ng=-1;
    while(abs(ok-ng)>1){
        ll mid=(ok+ng)/2;
        if(calc(mid))ok=mid;
        else ng=mid;
    }
    cout<<n-ok<<endl;
    
    return 0;
}
