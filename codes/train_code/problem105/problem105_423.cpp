#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define d long double

#define scf(n) scanf("%d",&n)
#define lscf(n) scanf("%lld",&n)
#define dscf(n) scanf("%Lf",&n)
#define pri(n) printf("%d ",(int)n)
#define lpri(n) printf("%lld ",n)
#define dpri(n) printf("%Lf ",n)
#define prin(n) printf("%d\n",(int)n)
#define lprin(n) printf("%lld\n",n)
#define dprin(n) printf("%Lf\n",n)

#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,ini,n) for(ll i=ini;i<(int)n;i++)
#define all(x) x.begin(),x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define bitcount(n) __builtin_popcount(n)
#define tc   int tt; scf(tt); while(tt--)
#define gcd __gcd
#define inf INT_MAX
#define ninf INT_MIN

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define PI 3.14159265358979323846264

const ll M =1e9+7;
const int N = 1e6+7;



int main()
{
    ll a,b;
    cin>>a>>b;
    char c;
    cin>>c;
    ll x;
    cin>>x;
    b*=100;
    b+=x;
    ll ans=a*b;
    ans/=100;
    cout<<ans;
return 0;
}