#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;
using namespace std::chrono;

#define ll long long
#define ld long double
#define pq priority_queue
#define ff first
#define ss second
#define pb push_back
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(c) ((ll)c.size())
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#ifdef LL
const ll inf = 1e9;
#else 
const ll inf = 1e18;
#endif

const int mod = 1e9 + 7;
const int mod2 = 998244353;

typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<vii> vvii;

// lower bound returns first element greater than the value

high_resolution_clock::time_point curTime() { return high_resolution_clock::now(); }
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);} //Just add this as a third argument to sort() while sorting an array of pairs; NO NEED FOR ANY ARGUMENTS;
template <typename T>
T fact(T a, T mod){ int res = 1, i; for (i = 2; i <= a; i++){ res *= i; res%=mod;} return res; }
template <typename T>
ll powmod(T a,T b,ll m){ ll ans=1; while(b>0){if(b&1){ans*=a;ans%=m;}a*=a;a%=m;b>>=1;} return ans; }
template <typename T>
ll power(T a, T b){ ll ans=1; while(b>0){if(b&1){ans*=a;}a*=a;b>>=1;}return ans;}
template <typename T>
T gcd(T a,T b){ return (b?__gcd(a,b):a); }
template <typename T>
T lcm(T a, T b){ return (a*(b/gcd(a,b))); }
template <typename T>
T cl(T a, T b){ return (a+b-1)/b; }
template <typename T>
T set_bits(T a)
{ return __builtin_popcount(a); }
template <typename T>
T add_self(T& a, T b, T mod){ a+=b; if(a>=mod){ a-=mod; } }
template <typename T>
T to_upper(T s){ transform(s.begin(), s.end(), s.begin(), ::toupper); return s; }
template <typename T>
T to_lower(T s){ transform(s.begin(), s.end(), s.begin(), ::tolower); return s; }

vvi adj;
vi vis;
vvi dp;

//dp[i][0] is the number of ways to paint node i white and dp[i][1] is the number of ways to paint the node i black

void dfs(int u)
{
    vis[u]=1;
    int children = 0;
    dp[u][0]=1;
    dp[u][1]=1;
    for(int v : adj[u])
    {
        if(!vis[v])
        {
            vis[v]=1;
            children++;
            dfs(v);
            dp[u][0]=(dp[u][0] * (dp[v][0] + dp[v][1]))%mod;
            dp[u][1] = (dp[u][1]*dp[v][0])%mod;
        }
    }
    if(children==0)
    {
        dp[u][0] = 1;
        dp[u][1] = 1;
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    auto startTime = curTime();

    int n;
    cin>>n;
    adj.resize(n);
    vis.resize(n);
    dp.resize(n, vi(2));

    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        u--;v--;

        adj[u].pb(v);
        adj[v].pb(u);
    }

    dfs(0);
    //for(int i=0;i<n;i++) cout<<i+1<<" : "<<dp[i][0]<<" "<<dp[i][1]<<endl;

    cout<<(dp[0][0] + dp[0][1])%mod<<endl;

    auto stopTime = curTime();
    auto duration = duration_cast<microseconds>(stopTime - startTime);
    //cout<<"Program ran for "<<(ld)duration.count()/1e6<<" "<<"seconds"<<endl;
}
