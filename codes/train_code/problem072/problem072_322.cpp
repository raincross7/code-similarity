/*
ID: your_id_here
PROG: test
LANG: C++11
*/
#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
//double pi=3.1415926535898;
//double pi=acos(-1.0);
#define scarr(a,s,e) for(int i=s;i<=int(e);i++) scanf("%d ",&a[i]);
#define prarr(a,s,e) for(int i=s;i<=int(e);i++) printf("%d ",a[i]);
#define speed      ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define rng(i,a,b) for(int i=a;i>=int(b);i--)
#define rep(i,a,b) for(int i=a;i<=int(b);++i)
#define lop(i,n)   for(int i=0;i<int(n);i++)
#define ms(x,a)    memset(x,a,sizeof(x))
#define all(x)     (x).begin(),(x).end()
#define sz(x)      int(x.size())
#define pb         push_back
#define mkp        make_pair
#define sc(x)      scanf("%d",&x)
#define scl(x)     scanf("%lld",&x)
#define pr(x)      printf("%d ",x)
#define prl(x)     printf("%lld ",x)
#define prln(x)    printf("%d\n",x)
#define prlln(x)   printf("%lld\n",x)
#define r0         return 0;
#define CC         continue;
#define scd(x)     scanf("%lf",&x)
#define prd(x)     printf("%.10f\n",x)
#define bb(x)      cerr<< x <<endl;
#define pii        pair<int,int>
#define pis        pair<int,string>
#define vi         vector<int>
#define x         first
#define y         second
//#define max(a,b) a<b?b:a __builtin_popcount;
//#define min(a,b) a<b?a:b
const ll M  = 1e9+7 ;
const ll linf = 1e18 ;
const int iinf = INT_MAX ;
const int N = 300300 ;
//////////////////////    Hi    ^_^  hack me if you can :P

int main()
{
    //freopen("output.txt","w",stdout),freopen("input.txt","r",stdin);
    speed;
    int s=0;
    int k=0;
    int n;
    cin>>n;
    while(s<n){
        s+=k++;
    }
    int d = s - n;
    for (int i=1;i<k;i++)
    if(i!=d)
        cout<<i<<endl;
    r0;
}

/*

freopen("output.txt","w",stdout);
freopen("input.txt","r",stdin);

ll pwmod(ll a, ll n, ll mod) {
    ll ret = 1;
    while (n) {
        if (n & 1) ret = ret * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return ret;
}
Wj0944296025*
http://ideone.com/KrXO2S
*/
/*
for (int i=0;i<n;i++)            Hi    ^_^  hack me if you can :P
int mx[]= {0,0,1,-1, 1,1,-1,-1};
int my[]= {1,-1,0,0, 1,-1,1,-1};
bool inside (int i,int j) {return (i>=0 && i<n && j>=0 && j<m);}

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void gcd(LL n,LL m,LL &d,LL &xx,LL &yy){
    if(!m) {d=n; xx=1; yy=0;}
    else {gcd(m,n%m,d,yy,xx); yy-=xx*(n/m);}
}

int getm(int l,int r)
{
    if(l>r)
        return N;
    if(l==r)
        return 0;
    if(l==r-1)
        return s[l] != s[r];
    if(s[l]==s[r])
        return getm(l+1,r-1);
    else
        return 1+min(getm(l+1,r),getm(l,r-1));
}

int BIT[si], a[si], n;
void update(int x, int delta)
{
    for(; x <= N; x += x&-x)
        BIT[x] += delta;
}
int query(int x)
{
    int sum = 0;
    for(; x > 0; x -= x&-x)
        sum += BIT[x];
    return sum;
}

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

*/
