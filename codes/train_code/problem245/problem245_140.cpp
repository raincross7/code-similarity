#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define MOD 1000000007
#define mod9 1000000009
#define fast ios_base :: sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define mp make_pair
#define pb push_back
#define ct ll t;cin>>t;while(t--)
#define bi begin()
#define ei end()
#define fi first 
#define se second  
#define foe(i,a,b) for(ll i=a;i<b;i++)
#define rfoe(i,a,b) for(ll i=a;i>=0;i--)
#define sz(s) s.size() 
#define mem(a,s) memset(a,s,sizeof(a)) 
#define all(v) v.bi,v.ei
#define MAX             8000000000000000064LL
#define MIN            -8000000000000000064LL   

ll add(ll a, ll b){return (a%MOD + b%MOD + ((MAX)/MOD)*MOD)%MOD;}
ll sub(ll a, ll b){return (a%MOD - b%MOD + ((MAX)/MOD)*MOD)%MOD;}
ll mul(ll a, ll b){return ((a%MOD)*(b%MOD) + ((MAX)/MOD)*MOD)%MOD;}
bool isPrime(ll n) 
{ 
    // Corner case 
    if (n <= 1) 
        return false; 
    
    // Check from 2 to n-1 
    for (ll i = 2; i*i <= n; i++) 
        if (n % i == 0) 
            return false; 
    
    return true; 
}
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = mul(res,a);
        a = mul(a,a);
        b >>= 1;
    }
    return res%MOD;
}

bool compare(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return (a.se>b.se);
}
ll lcm(ll a,ll b)
{
    return(a*b)/__gcd(a,b);
}
// vector<ll>s;
// // set<ll>s1;
// bool prime[10000009]={false};
//     // set<ll>s1;
//     void Sieve() 
//     {  
//         ll n=10000009;
//         prime[0]=prime[1]=true;
//         // s[0]=0;
//         // s[1]=1;
//         // s.pb(1);
//         // t.insert(1);
//         for (int p=2; p*p<=n; p++) 
//         { 
        
//         if(prime[p]==false)
//         {
//             //    s.pb(p);
//             for(ll j=p*p;j<=n;j+=p)
//             {
//                 prime[j]=true;
//             }    
//         }
//         } 
//         for(ll i=2;i<n;i++)
//         {
//             if(prime[i])
//             {
//                 s.pb(i);
//                 // s1.insert(i);
//             }
//         }
// } 
//     ll eea(ll a, ll b, ll & x, ll & y) {
//     if (a == 0) {
//         x = 0;
//         y = 1;
//         return b;
//     }
//     ll x1, y1;
//     ll d=eea(b % a, a, x1, y1);
//     x = y1 - (b / a) * x1;
//     y = x1;
//     return d;
// }
// bool find_any_solution(ll a, ll b, ll c, ll &x0, ll &y0, ll &g) {
//     g = eea(abs(a), abs(b), x0, y0);
//     if (c % g) {
//         return false;
//     }

//     x0 *= c / g;
//     y0 *= c / g;
//     if (a < 0) x0 = -x0;
//     if (b < 0) y0 = -y0;
//     return true;
// }
// ll modinverse(ll a,ll m)
// {
//     ll x, y;
//     eea(a, m, x, y);
//     if (__gcd(a,m) != 1) {
//     return -1;
//     }
// else {
//     x = (x % m + m) % m;
//     cout << x << endl;
//     return x;
// }
// }

ll fact[1000007]={0};
ll expo(ll x, ll y) {ll res=1;x=x%MOD;while(y>0){if(y&1)res=(1ll*res*x)%MOD;
y=y>>1;x=(1ll*x*x)%MOD;} return res;}
void facto() {fact[0]=1;fact[1]=1;for(ll i=2;i<1000007;i++)fact[i]=(fact[i-1]*i)%MOD;}
ll ncr(ll n,ll r) {ll res=1; res=fact[n]; res=(res*(expo(fact[r],MOD-2)))%MOD; res=(res*(expo(fact[n-r],MOD-2)))%MOD; return res;}
ll npr(ll n,ll r) {facto(); ll res=1; res=fact[n]; res=(res*(expo(fact[n-r],MOD-2)))%MOD; return res; }
int const N=2e5+9;
ll const INF = 2e18+5;
ll n,k,ans,t,g,e,f;
ll p[5005],c[5005];
vector<pair<ll,ll>>v[5005];
vector<ll>vis,a;
void dfs(ll x)
{
    if(!vis[x])
    {
        vis[x]=1;
        t++;
        for(auto i:v[x])
        {
            a.push_back(i.se);
            e+=i.se;
            if(t<=k)
                g=max(g,e);
            
            dfs(i.fi);
        }   
    }
}
void solve()
{
    cin>>n>>k;
    foe(i,0,n)cin>>p[i];
    foe(i,0,n)cin>>c[i];
    foe(i,0,n)
    {
        v[i+1].pb({p[i],c[i]});
    }
    
    ans=MIN;
    foe(i,1,n+1)
    {
        a.clear();
        t=0;
        g=MIN;
        e=0;
        vis=vector<ll>(n+1,0);
        dfs(i);

        ans=max(ans,g);
        f=k%t;
        if(f==0)
        {
            f=t;
        }
        ll m=0,c=-INF;
        foe(i,0,f)
        {
            m+=a[i];
            c=max(c,m);
        }
        // cout<<ans<<" ";
        ll q=k/t;
        if(f==t)q--;
        ans=max(ans,c+q*e);
    }
    cout<<ans<<"\n";
}   
int main()
{
    fast
    // facto();
    // Sieve();
//    ct    
    { 
        solve();     
    }
}
