#include <bits/stdc++.h>
using namespace std;
#define X ios_base::sync_with_stdio(false); cin.tie(NULL);
#define FIXED_FLOAT(x) std::fixed <<std::setprecision(2)<<(x)
 
 
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
 
 
// long long p = 1e9+7;
 
typedef long long ll;
typedef pair<ll,ll> pl;
typedef vector<int> VI;
typedef vector<pair<ll,ll>> VP;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef vector<bool> VB;
 
// typedef pair<ll, ll> PL;
typedef unordered_map<ll, ll> UMP;
#define FOR(i,b,init) for(i=init;i<b;i++)
#define pb push_back
#define fi first
#define se second
#define mp make_pair
 
// typedef  unordered_set<ll>;
 
 
// void printa(VI &x,ll n){
//     ll i;
//     FOR(i, n){
//         cout<<x[i]<<" ";
//     }
//     cout<<endl;
// }
 
 

/////GLOABLS VARS
ll MOD = 1e9+7;
ll gmx = 1e6+7; 

VL fact(gmx, 1);
//////FUNCTIONS
ll powp(ll val, ll deg)
{
    // debug(val, deg);
    if (!deg)
        return 1;
    if (deg & 1)
        return (powp(val, deg - 1) * val) % MOD;
    ll res = powp(val, deg >> 1);
    // debug(res);
    return (res * res) % MOD;
}
ll mx=2*1e5+7;
vector<VL> adj;
VL sub;
ll n;

void dfs(ll r, ll parent){
    sub[r]=1;
    // debug(r,parent);
    for(auto k: adj[r]){
        if(k==parent){continue;}
        dfs(k, r);
        sub[r]+=sub[k];
    }
    return;
}

//It is not easy but it can be fun, if you think!!!

ll gcd(ll a, ll b){
    // debug(a,b);
    if(a>b){swap(a,b);}
    if(a==0){return b;}
    return gcd(a, b%a);
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
    #endif

    ll n,m,i,j;
    cin>>n;
    VL l(n);
    FOR(i, n, 0){
        cin>>l[i];
    }
    ll mx = 1e6+7;
    VL spf(mx);
    FOR(i, mx,0){
        spf[i]=i;
    }
    FOR(i, mx, 2){
        if(spf[i]==i){
            for(j=i*i; j<mx;j+=i){
                spf[j] = min(spf[j], i);
            }
        }
    }
    VL seen(mx, 0);
    bool flag=true;
    FOR(i,n,0){
        if(!flag){
            break;
        }
        ll tmp = l[i];
        while(tmp!=1){
            if(seen[spf[tmp]]==1){
                flag=false;
                break;
            }
            seen[spf[tmp]]=1;
            ll ori = spf[tmp];
            while(tmp%ori==0){
                tmp = tmp/ori;
            }
            // l[i]=l[i]/spf[l[i]];
        }
    }
    if(flag){
        cout<<"pairwise coprime";
    }
    else{
        ll gc = l[0];
        FOR(i,n,0){
            gc = gcd(l[i], gc);
        }
        if(gc==1){
            cout<<"setwise coprime";
        }
        else{
            cout<<"not coprime";
        }
    }


    // 1 3 1
    // cin>>t;
    // FOR(i,t,0){
    //     ll n;
    //     cin>>n;
        
    // }


   
}
