//----AUTHOR:kkdrummer----/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef    long long   ll;
typedef    long double   ld;
//typedef    unordered_set<ll>   usll;
//typedef    unordered_multiset<ll>   umsll;
typedef    multiset<ll>   msll;
typedef    set<ll>   sll;
typedef    vector<ll>   vll;
typedef    pair<ll,ll>   pll;
typedef    vector<pll>   vpll;
typedef    priority_queue<ll>   pqll;
typedef    vector<int>   vi;
typedef    set<int>   si;
typedef    multiset<int>   msi;
//typedef    unordered_multiset<int>   umsi;
//typedef    unordered_set<int>   usi;
typedef     pair<int,int>   pi;
typedef    vector<pi>   vpi;
typedef    set<pi>   spi;
typedef    priority_queue<int>   pqi;
typedef    tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>   ind_set;
typedef    tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>   ind_setll;
#define    in   insert
#define    fi   first
#define    se   second
#define    pb   push_back
#define    mp   make_pair
#define    be   begin
#define    en   end
#define    itr   iterator
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define    mo   1000000007
#define    inf  9223372036854775807
#define    ninf   -inf
#define    ima   2147483647
#define    imi   -ima
#define    oncnt    __builtin_popcount
#define    zerobegin   __builtin_clz
#define    zeroend   __builtin_ctz
#define    parity   __builtin_parity
#define all(x) x.be(),x.en()
#define    eps   1e-9
#define    coutd   cout<<setprecision(10)<<fixed
#define    debg(x)  cout<<"#x = "<<x<<"\n";
const    ld   PI=3.14159265359;
inline ll modpow(ll x,ll n){if(n==0)return 1;if(n==1)return(x%mo);ll u=(modpow(x,n/2));u=(u*u)%mo;if(n%2!=0)u=(u*x%mo)%mo;return u;}
inline ll modinv(ll x){return modpow(x,mo-2);}
inline ll mmul(ll a,ll b){    if(a>=mo)a=a%mo;if(b>=mo)b=b%mo;if(a*b>=mo)return(a*b)%mo;return(a*b);}
inline ll madd(ll a, ll b){if(a>=mo)a=a%mo;if(b>=mo)b=b%mo;if(a+b>=mo)return(a+b)%mo;return(a+b);}
inline ll msub(ll a, ll b){if(a>=mo)a=a%mo;if(b>=mo)b=b%mo;return(((a-b)%mo+mo)%mo);}
inline ll mdiv(ll a,ll bb){if(a>=mo)a=a%mo;ll b=modinv(bb);if(b>=mo)b=b%mo;if(a*b>=mo)return(a*b)%mo;return(a*b);}
inline ll gcd(ll a,ll b){return __gcd(a,b);}

ll dp[2001][2001];

int main()
{
io
int testcases=1;//cin>>testcases;
while(testcases--)
{


int n,m;
cin>>n>>m;
int s[n];
int t[m];
for(int i=0;i<n;i++)
cin>>s[i];

for(int i=0;i<m;i++)
cin>>t[i];


for(int i=0;i<=n;i++)
{
	for(int j=0;j<=m;j++)
	dp[i][j]=0;
}


for(int i=0;i<=n;i++)
{
	for(int j=0;j<=m;j++)
	{
		if(i==0||j==0)
		dp[i][j]=1;
		else
		{
			
			dp[i][j]=madd(dp[i][j],madd(dp[i-1][j],dp[i][j-1]));
			if(s[i-1]!=t[j-1])
			dp[i][j]=msub(dp[i][j],dp[i-1][j-1]);
		}
	}
}

cout<<dp[n][m];

}return 0;}