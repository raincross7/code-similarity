#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mii map<ll,ll>
#define pii pair<ll,ll>
#define vi vector<ll>
#define endl "\n"
#define deb(x) cout << #x << "=" << x << endl
const ll mod = 1e9+7;

ll msum(ll a,ll b,ll m) { return (a%m+b%m)%m; }
ll msub(ll a,ll b,ll m) { return (a%m-b%m)%m; }
ll mpro(ll a,ll b,ll m) { return ((a%m)*(b%m))%m; }
ll m_m(ll a,ll b,ll m);
ll fxp(ll a,ll b,ll m);
void swap(ll &a,ll &b){ ll t=a; a=b; b=t;}

struct act
{
    int a,b,c;
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        vector<act> v;
        fo(i,n)
        {
            act tp;
            cin>>tp.a>>tp.b>>tp.c;
            v.pb(tp);
        }
        ll dp[n][3];
        dp[0][0]=v[0].a;
        dp[0][1]=v[0].b;
        dp[0][2]=v[0].c;
        for(i=1;i<n;i++)
        {
            dp[i][0]=v[i].a+max(dp[i-1][1],dp[i-1][2]);
            dp[i][1]=v[i].b+max(dp[i-1][0],dp[i-1][2]);
            dp[i][2]=v[i].c+max(dp[i-1][0],dp[i-1][1]);
        }
        ll ans=max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
        cout<<ans<<endl;
    }
 return 0;
}
ll fxp(ll a,ll b,ll m) {
    if(b==0)
        return 1;
    if(b%2==0)
        return fxp(m_m(a,a,m),b/2,m);
    return m_m(fxp(a,b-1,m),a,m);
}
ll m_m(ll a,ll b,ll m) 
{
    ll res=0;
    a=a%m;
    while(b)
    {
        if(b&1)
        {
            res+=a; 
            res=res%m;
        }
        a=(a*2)%m;
        b=b/2;
    }
    return res;
}