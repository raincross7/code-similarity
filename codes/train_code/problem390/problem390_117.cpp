/**
 *  iN thE namE oF AllaH
 *  |__________________|
 *  m_a_k_e m_e W_I_N_N_E_R o_f S_M_I_L_E :(
**/

#include "bits/stdc++.h"
using namespace std;

#define    FasterIO      ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
typedef    long long int ll;
typedef    double        dd;
typedef    pair<ll,ll>   PLL;
typedef    vector<ll>    VL;
typedef    vector<string>VS;
typedef    vector<PLL>   VP;
typedef    map<ll,ll>    MP;
typedef    set<ll>       ST;
typedef    multiset<ll>  MST;
#define    L             2*node
#define    R             2*node+1
#define    mp            make_pair
#define    pb            push_back
#define    fi            first
#define    se            second
#define    PI            3.14159265358979
#define    pi            2*acos(0.0)
#define    INF           1e18
#define    EPS           1e-9
#define    sz(x)         (ll)(x.size())
#define    MEM(x,y)      memset(x,y,sizeof x)
#define    all(x)        (x).begin(),(x).end()
#define    sc1(x)        scanf("%lld",&x);
#define    sc2(x,y)      scanf("%lld%lld",&x,&y);
#define    sc3(x,y,z)    scanf("%lld%lld%lld",&x,&y,&z);
#define    sc4(x,y,z,w)  scanf("%lld%lld%lld%lld",&x,&y,&z,&w);
#define    scl1(x)       scanf("%lf",&x);
#define    scl2(x,y)     scanf("%lf%lf",&x,&y);
#define    cn1(x)        cin>>x;
#define    cn2(x,y)      cin>>x>>y;
#define    cn3(x,y,z)    cin>>x>>y>>z;
#define    cn4(x,y,z,w)  cin>>x>>y>>z>>w;
#define    co1(x)        cout<<x<<"\n";
#define    co2(x,y)      cout<<x<<" "<<y<<"\n";
#define    co3(x,y,z)    cout<<x<<" "<<y<<" "<<z<<"\n";
#define    TC(x)         sc1(x);    while(x--)
#define    dbg(x)        { cerr << #x << " = " << x << "\n"; }
#define    FOR(i,x,y)    for (int i = x; i <= y; i ++ )
#define    FORr(i,x,y)   for (int i = x; i >= y; i -- )

const ll  N1   = 1000010;
const ll  N2   = 2000010;
const ll  mod1 = 1e2 + 7;
const ll  mod2 = 1e9 + 7;

/*
///Geometry###
dd pw(dd x){return (x*x);}
dd dis(dd x1,dd y1,dd x2,dd y2){return sqrt(pw(x1-x2)+pw(y1-y2));}
dd Circle_line(dd a,dd b,dd c,dd x,dd y){return (abs(a*x+b*y+c)/sqrt(pw(a)+pw(b)));}
dd Co_linear(dd x1,dd y1,dd x2,dd y2,dd x3,dd y3){return x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);}//Triangle area formula
bool Rotate_page(dd x1,dd y1,dd x2,dd y2,dd x3,dd y3){dd d1=dis(x1,y1,x2,y2),d2=dis(x2,y2,x3,y3);if(d1!=d2)return 0;if(!Co_linear(x1,y1,x2,y2,x3,y3))return 0;return 1;}
dd Polgn_area(dd x[],dd y[],ll n){dd a=0;int j=n;for(int i=1;i<=n;i++){a+=(x[j]+x[i])*(y[j]-y[i]);j=i;}return abs(a/2.0);}
dd angle(dd a,dd b,dd c){return acos((pw(b)+pw(c)-pw(a))/(2.0*b*c));}
*/
/*
ll BS(ll a,ll b,ll aa[],ll x){while(a<=b){ll mid=(a+b)/2;if(aa[mid]==x) return 1;else if(aa[mid] > x) b=mid-1;else a=mid+1;}return -1;}
ll GCD(ll a,ll b){if(a==0) return b;else return GCD(b%a,a);}
ll prime(ll x){for (ll i=2;i*i<=x;i++){if(x%i==0) return 0;}return 1;}
void swap(char *x,char *y){char temp;temp=*x;*x=*y;*y=temp;}
ll Bigmod(ll b,ll p,ll m){ll ret=1;while(p){if(p&1)ret=(ret*b)%m;b=(b*b)%m;p>>=1LL;}return ret;}
ll Joss(ll n,ll k){if(n==1) return 1;return (Joss(n-1,k)+k-1)%n+1;}
ll XtndGCD(ll a,ll b,ll *x,ll *y){if(a==0){*x=0;*y=1;return b;}ll x1,y1;ll gcd=XtndGCD(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;return gcd;}

bool vis[N1]; ll primF[N1],idx;
void SV()
{
    vis[0]=vis[1]=1;for(int i=4;i<=N1;i+=2)vis[i]=1;primF[++idx]=2;
    for(int i=3;i*i<=N1;i+=2){
        if(!vis[i])for(int j=(i*i);j<=N1;j+=(i+i))vis[j]=1;
    }
    for(int i=3;i<=N1;i+=2)if(!vis[i])primF[++idx]=i;
}
*/
const int N = 5e4+6;
int Arr[N];

int main()
{
    ll q;cn1(q);
    while(q--)
    {
        ll a,b;cn2(a,b);
        if(a==b)cout<<(2*(a-1))<< "\n";
        else
        {
            ll s = a*b-1;
            ll x = sqrt(s);
            ll res = 2*x-1;
            if( x*(x+1)>s )res--;
            if(x*x>s&&a!=b)res--;
            co1(res);
        }
    }


    return 0;
}
