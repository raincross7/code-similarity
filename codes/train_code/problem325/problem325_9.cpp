#include<bits/stdc++.h>
//ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<pii,int> ppii;
typedef pair<int,pii> pipi;
typedef pair<ll,ll> pll;
typedef pair<pll,ll> ppll;
typedef pair<ll,pll> plpl;
typedef tuple<ll,ll,ll> tl;
ll mod=1000000007;
ll mod2=998244353;
ll mod3=1000003;
ll mod4=998244853;
ll inf=1000000000000000000;
double pi=2*acos(0);
#define rep(i,m,n) for(ll i=m;i<n;i++)
#define rrep(i,n,m) for(ll i=n;i>=m;i--)
int dh[4]={1,-1,0,0};
int dw[4]={0,0,1,-1};
int ddh[8]={-1,-1,-1,0,0,1,1,1};
int ddw[8]={-1,0,1,-1,1,-1,0,1};
ll lmax(ll a,ll b){
    if(a<b)return b;
    else return a;
}
ll lmin(ll a,ll b){
    if(a<b)return a;
    else return b;
}
ll gcd(ll a,ll b){
    if(a<b)swap(a,b);
    if(b==0)return a;
    if(a%b==0)return b;
    return gcd(b,a%b);
}
ll Pow(ll n,ll k){
    ll ret=1;
    ll now=n;
    while(k>0){
        if(k&1)ret*=now;
        now*=now;
        k/=2;
    }
    return ret;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    ll n,l;cin>>n>>l;
    ll num=-1;
    ll ma=l-1;
    ll a[n];
    rep(i,0,n){
        cin>>a[i];
        if(i==0)continue;
        if(ma<a[i]+a[i-1]){
            ma=a[i]+a[i-1];
            num=i-1;
        }
    }
    if(num==-1){
        cout<<"Impossible"<<endl;
        return 0;
    }
    cout<<"Possible"<<endl;
    vector<ll> v;
    rep(i,num,n-1){
        v.push_back(i+1);
    }
    rrep(i,num,1)v.push_back(i);
    rep(i,0,v.size())cout<<v[v.size()-1-i]<<endl;
    
}
