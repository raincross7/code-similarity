#include<bits/stdc++.h>
using namespace std;
typedef		 long long int    ll;
typedef		vector<ll>      vll;
#define     fi              first
#define     print(v)        for(ll i:v) cout<<i<<ss
#define     se              second
#define		pb              push_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		ss              ' '
#define     pii             pair<ll,ll>
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
const double eps = 1e-8;


int main()
{
    ll mod=1e9+7;

    ll n,m;
    cin>>n>>m;
    string s[n+10];

    for(ll i=0; i<n; i++)
    {
        cin>>s[i];
    }
    ll dp[n][m];
    memset(dp,0,sizeof(dp));

    dp[n-1][m-1]=1;

    for(ll i=n-1; i>=0; i--)
    {
        for(ll j=m-1; j>=0; j--)
        {
            if(s[i][j]!='#')
            {
               // cout<<0;
                ll x=i,y=j-1;

                if(x>=0&&y>=0&&s[x][y]!='#')
                {
                    dp[x][y]+=dp[i][j];
                    dp[x][y]%=mod;

                }
                x=i-1,y=j;
                if(x>=0&&y>=0&&s[x][y]!='#')
                {
                    dp[x][y]+=dp[i][j];
                    dp[x][y]%=mod;

                }
            }
        }
    }


//    for(ll i=0; i<n; i++)
//    {
//        for(ll j=0; j<m; j++)
//        {
//            cout<<dp[i][j]<<ss;
//        }
//        cout<<nn;
//    }

    cout<<dp[0][0]<<nn;



}


/* Final check before submit :

1. array size or integer overflow,like uninitialised 0 index.

2. Think twice,code once.check all possible counter test case.

3. Be careful about corner case! n=1?k=1? something about 0?

4. avoid stupid mistake!complexity(t/m)?precision error?submit same code twice?

5. if got WA than remember that you are missing something common.
   *** Be confident!!! who knows? may be your one step back to AC ***
4. minus mod ans=(ans-k+mod)%mod;

*/




