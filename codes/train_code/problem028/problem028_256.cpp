#include "bits/stdc++.h"
#define ll long long
#define rep2(i,a,b) for(ll i=a;i<=b;++i)
#define rep(i,n) for(int i=0;i<n;i++)
#define rep3(i,a,b) for(int i=a;i>=b;i--)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define tii tuple<int,int,int>
#define pq priority_queue<int>
#define pqg priority_queue<int,vector<int>,greater<int>>
#define pb push_back
#define edge(v,a,b) v[a].pb(b);v[b].pb(a);
ll MOD=1e9+7;
#define INF 1e9+7
#define N 400001
#define MAX_V 400010
#define vec vector<int>
#define ALL(c) (c).begin(),(c).end()
using namespace std;
int in() {int x;scanf("%d",&x);return x;}
ll lin() {ll x;scanf("%lld",&x);return x;}
template<typename A, size_t NNN, typename T>
void Fill(A (&array)[NNN], const T &val){
    fill( (T*)array, (T*)(array+NNN), val );
}
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
#define umap unordered_map<ll,int,custom_hash>
struct pair_hash
{
    template<class T1,class T2>
    size_t operator() (const pair<T1,T2> &p)const{
        return hash<T1>()(p.first)^hash<T2>()(p.second);
    }
};

ll modpow(ll x,ll n){
    if(n<0)return 1;
    if(n==0) return 1;
    ll res=modpow(x*x,n/2);
    if(n&1) res=res*x;
    return res;
}
main(){
    int n=in();
    int a[N];
    rep(i,n)a[i]=in();
    bool flag=true;
    rep(i,n-1)if(a[i]>=a[i+1])flag=false;
    if(flag){cout<<1;return 0;}
    int l=1,r=n;
    while(l<r-1){
        int mid=l+r>>1;
        flag=true;
        map<int,int>mp;
        rep2(i,1,n-1){
            if(a[i]>a[i-1])continue;
            int temp=a[i];
            mp.erase(mp.upper_bound(a[i]),mp.end());
            while(1){
                mp[temp]++;
                if(mp[temp]==mid){
                    mp[temp]=0;
                    --temp;
                }
                else break;
            }
            if(mp[0])flag=false;
        }
        (flag?r=mid:l=mid);
    }
  cout<<r;
}
