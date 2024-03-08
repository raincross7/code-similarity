#include<bits/stdc++.h>

typedef long long int lli;
typedef unsigned long long int ulli;
typedef long double ldb;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define pb push_back
#define popb pop_back()
#define pf push_front
#define popf pop_front()
#define si size()
#define be begin()
#define en end()
#define all(v) v.be, v.en
#define le length()
#define mp make_pair
#define mt make_tuple
#define acc(v) accumulate(all(v), 0)
#define F first
#define S second
#define INF lli(1e19)

#define forz(i, n) for (lli i = 0; i < n; i++)
#define fore(i, m, n) for (lli i = m; i < n; i++)
#define rforz(i, n) for (lli i = n - 1; i >= 0; i--)
#define rfore(i, m, n) for (lli i = n - 1; i >= m; i--)
#define deci(n) fixed << setprecision(n)
#define high(n) __builtin_popcount(n)
#define highll(n) __builtin_popcountll(n)
#define parity(n) __builtin_parity(n)
#define ctz(n) __builtin_ctz(n)
#define lb lower_bound
#define ub upper_bound
#define er equal_range
#define maxe *max_element
#define mine *min_element
#define mod 1000000007
#define mod2 998244353
#define gcd __gcd
#define kira ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define newline cout<<endl;
//#define endl "\n"



inline lli power(lli x, lli y, lli p = mod)
{
    lli res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

inline lli modadd(lli a, lli b, lli m = mod)
{
    a += b;
    if (a >= m)
        a -= m;
    return a;
}

inline lli modmul(lli a, lli b, lli m = mod)
{
    return ((a % m) * (b % m)) % m;
}

inline lli modi(lli a, lli m = mod) { return power(a, m - 2, m); }
inline lli md(lli x) {if(x>=0)return x; return -x;}
///////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
const lli mxN = 2e5;
lli n,m,k,r[mxN],p[mxN];
//lli u, v;
//bool vis[mxN];
//vector<lli> adj[mxN];
//void init()
//{
//    forz(i,n) vis[i]=0, adj[i].clear();
//}
lli gP(lli x)
{
    if(x==p[x]) return x;
    return p[x]=gP(p[x]);
}

void jC(lli x, lli y)
{
    x = gP(x);
    y = gP(y);
    if(x!=y)
    {
        if(r[x]<r[y])
            p[x]=y;
        else if(r[x]>r[y])
            p[y]=x;
        else
            p[x]=y,r[y]++;
    }
}

int32_t main()
{
    kira;

    lli T=1;
    //cin>>T;

    while(T--)
    {
        cin>>n>>m;
        forz(i,n) p[i]=i,r[i]=1;
        forz(i,m)
        {
            lli t,x,y;
            cin>>t;
                cin>>x>>y;
            if(t)
            {
                if(gP(x)==gP(y)) cout<<1<<endl;
                else cout<<0<<endl;
            }
            else jC(x,y);

        }
    }

    return 0;

}
