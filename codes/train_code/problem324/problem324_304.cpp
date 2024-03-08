/*
    Author: Alam Khan
    AUST CSE 40th Batch

*/

#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;

typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vl;
typedef deque<ll> dl;
typedef stack<ll> stl;
typedef set<ll> sl;
typedef map<string, ll> msl;
typedef map<ll,ll> mll;
typedef tree<ll,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;
#define sf(n)     scanf("%lld",&n)
#define sff(n,m)     scanf("%lld %lld",&n,&m)
#define sfff(n,m,r)     scanf("%lld %lld %lld",&n,&m,&r)
#define sfs(n)     scanf("%s",n)
#define pf(n)     printf("%lld\n",n)
#define pff(n,m)     printf("%lld %lld\n",n,m)
#define pfff(n,m,r)     printf("%lld %lld %lld\n",n,m,r)
#define pfs(n)     printf("%s\n",n)
#define pfcs(i,n)     printf("Case %lld: %lld\n",i,n)
#define pb     push_back
#define prf     printf
#define inf     2e18
#define low     -1000000000000
#define PI        acos(-1.0)
#define rep1(i,n) for(i=1;i<n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,a,n) for(i=a;i<n;i++)
#define repe1(i,n) for(i=1;i<=n;i++)
#define repe0(i,n) for(i=0;i<=n;i++)
#define repe(i,a,n) for(i=a;i<=n;i++)
#define endl  "\n"
#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define N 1000000
ll a[1000009];
bool num[1000009];
vector<ll> prime;
void seive()
{
    ll i,j;
    num[1] = true;
    for(i=4; i<=N; i+=2)
        num[i] = true;
    for(i=3; i*i<=N; i+=2)
    {
        if(num[i]==false)
        {
            for(j=i*i; j<=N; j+=2*i)
            {
                num[j] = true;
            }
        }
    }
    prime.pb(2);
    for(i=3; i<=N; i+=2)
    {
        if(!num[i])
            prime.pb(i);
    }
}
int main()
{
    ll i,n,t,k,j,x=0,y=0,m;
    seive();
    cin>>n;
    map<ll,ll> ma;
    for(i=0;i<prime.size() && prime[i]*prime[i]<=n;i++)
    {
        x  =  0;
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n = n/prime[i];
                x++;
            }
            ma[prime[i]] = x;
        }
    }
    if(n>1)
    {
        ma[n]  =1;
    }
    map<ll,ll> :: iterator it;
    ll ans=  0;
    for(it = ma.begin();it!=ma.end();it++)
    {
        x = 1;
        y = 1;

        while(x<=it->second)
        {
            ans++;
            y++;
            x+= y;

        }
    }
    cout<<ans<<endl;

    return 0;
}

