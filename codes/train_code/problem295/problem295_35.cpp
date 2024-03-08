/*************************************************\
           In the name of almighty ALLAH
                 MD.Faysal Hasan
                Comilla Univesity
\*************************************************/

#include<bits/stdc++.h>
using namespace std;

#define     ikarus_101  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef     long long             ll;
typedef     long double           ld;
typedef     unsigned long long    ull;
typedef     vector<ll>            vll;
typedef     pair<ll,ll>           pll;
typedef     vector<pll>           vpl;
typedef     map<ll,ll>            mll;
typedef     multiset<ll>          msl;
typedef     multimap<ll,ll>       Mll;
using pqboro=priority_queue<ll,vll,less<ll>>;
using pqchoto=priority_queue<ll,vll,greater<ll>>;

#define    all(str)       str.begin(),str.end()
#define    sajo(str)      sort(str.begin(),str.end())
#define    rev(str)       reverse(str.begin(),str.end())
#define    usajo(str)     sort(str.rbegin(),str.rend())
#define    vin(a)         for(auto &it : a) cin>>it
#define    vout(a)        for(auto it:a) cout<<it<<' ';cout<<nn
#define    pb             push_back
#define    eb             emplace_back
#define    mkp(x,y)       make_pair(x,y)
#define    F              first
#define    S              second
#define    yes            cout<<"YES"<<nn
#define    no             cout<<"NO"<<nn
#define    nn             "\n" ///endl
#define    jj             " "
#define    rep(i,n)       for (i=0;i<n;++i )
#define    rep1(i,n)      for (i=1;i<=n;++i )

#define    min3(a,b,c)    min(a,min(b,c))
#define    max3(a,b,c)    max(a,max(b,c))
#define    sqr(x)         ((x)*(x))
#define    pi             2*acos(0.0)
#define    gcd(a,b)       __gcd(a,b)
#define    lcm(a,b)       (a/gcd(a,b))*b
#define    mem(a,b)       memset(a,b,sizeof (a))
#define    dec(x)         cout<<fixed<<setprecision(x)
#define    none(n)         __builtin_popcountll(n)

template < typename T > string toString ( T Number ) { stringstream ss ; ss << Number ; return ss.str() ; }
template < typename T > ll toll ( T str ) { stringstream ss ; ss << str ; ll num ; ss >> num ; return num ; }

const   int  N   =   2e6+7;
const   int  M   =   1e9+7;
const   ll  inf  =   0x7f7f7f7f7f7f7f7f;

ll a[15][15];

int main() {ikarus_101

    ll n,m,i,j,k,x;

    vll v;
    for(i=1;i<=10000;i++) v.eb(sqr(i));

    cin>>n>>k;
    rep1(i,n) rep1(j,k) cin>>a[i][j];
    ll cnt = 0;
    rep1(i,n)
    {
        for(j=i+1;j<=n;j++)
        {
            ll dis = 0;
            for(ll pos = 1;pos <= k; pos++)
            {
                ll dif = a[i][pos] - a[j][pos];
                dis += sqr(dif);
            }
            if(binary_search(all(v),dis)) ++cnt;

        }
    }
    cout << cnt << nn;





    return 0;
}