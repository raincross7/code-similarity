#pragma GCC optimize("Ofast")   //Comment optimisations for interactive problems (use endl)
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>

using namespace std;

#define  fastio         ios:: sync_with_stdio(0);cin.tie(0);cout.tie(0);cout<<fixed;cout<<setprecision(10);
#define  randomINIT     mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
#define  all(x)         (x).begin(),(x).end()
#define  mset(x,val)    memset(x,val,sizeof(x))
#define  endl           "\n"
#define  pb             push_back
#define  sym(s)         s="#"+s+"#";
#define  mp             make_pair
#define  s              second
#define  f              first
#define  dline          cerr<<"///REACHED///\n";
#define  debv(a)        for(auto it: a)cout<<it<<" ";cout<<endl;
#define  deb1(a)        cout<<a<<endl;
#define  deb2(a,b)      cout<<a<<" "<<b<<endl;
#define  deb3(a,b,c)    cout<<a<<" "<<b<<" "<<c<<endl;
#define  deb4(a,b,c,d)  cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
#define  uniq(a)        a.resize(unique(a.begin(), a.end()) - a.begin());

typedef  long long             ll;
typedef  unsigned long long    ull;
typedef  long double           ld;
typedef  pair<ll,ll>           pll;
typedef  vector<ll>            vll;
typedef  vector<pll>           vpll;

const ll   MOD   =  1e+9+7;
const ll   INF   =  0x7f7f7f7f7f7f7f7f;
const int  INFi  =  0x7f7f7f7f;
const ll   N  =  3e+5+7;

vll adj[N];ll vis[N]={};
int dx8[]={0,1,1,1,0,-1,-1,-1}, dy8[]={1,1,0,-1,-1,-1,0,1};
int dx4[]={0,1,0,-1}, dy4[]={1,0,-1,0};

//<<-----Declare Variable Here------->>//
int t=1;
ll n;
//<<-----Implement Functions Here---->>//
const ll N2=1e7+8;
ll p[N2];
void sieve(){
    for(ll i = 2; i*i <= N2; i++){
        if(p[i] == 0){
            for(ll j = 2*i; j < N2; j += i){
           		if(p[j]==0) p[j]=i;
            }
        }
    }
    for(ll i=1;i<N2-1;i++)if(p[i]==0)p[i]=i; 
}
vll getFactorization(ll x) 
{ 
    vll ret; 
    while(x!=1){ret.pb(p[x]);x = x/p[x];} 
    return ret; 
} 

//<<-----Start of Main--------------->>//
void MAIN(){
		cin>>n;ll ans = 0;
		for(ll i=1;i<=n;i++)
		{
			map<ll,ll>map1;ll temp = 1;
			vll v = getFactorization(i);
			for(auto it:v)map1[it]++;
			for(auto it:map1)temp *= (it.s+1);
			ans += i*temp;
		}
		cout<<ans<<endl;
}	

int main(){
    fastio;randomINIT;
    sieve();
    //cin>>t;
    while(t--){
        MAIN();
    }

    #ifndef ONLINE_JUDGE
    cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
    #endif
}