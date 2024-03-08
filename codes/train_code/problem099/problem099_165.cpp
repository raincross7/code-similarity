#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
using P = pair<ll,ll>;
using um = unordered_map<ll,ll>;
#define fl cout<<flush;
#define endl '\n'
template <typename T> inline void prt(T v){cout<<v<<'\n';}
template <typename T> inline bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template <typename T> inline bool chmin(T &a, const T &b){if (a>b){a=b;return 1;}return 0;}
const ll INF=1LL<<60;
const ll MOD=(ll)1e9+7;
const ll MOD2=998244353;
const ld pi=3.14159265358979323846;
const ld eps=1e-10;


signed main(void){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);
    ll N;
    cin >> N;
    vector<ll> p(N,0);
    for(ll i=0;i<N;++i)cin>>p[i];
    vector<ll> a(N,0);
    vector<ll> b(N,0);
    for(ll i=0;i<N;++i)a[i]=20001*i+1;
    for(ll i=0;i<N;++i)b[i]=20001*(N-1-i)+1;
    for(ll i=0;i<N;++i)a[p[i]-1]+=i;
    for(auto p: a)cout<<p<<" ";
    cout<<endl;
    for(auto p: b)cout<<p<<" ";
    fl

    return 0;
}
