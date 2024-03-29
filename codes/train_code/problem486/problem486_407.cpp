#include<bits/stdc++.h>
#define ios std::ios::sync_with_stdio(false)
#define sd(n) scanf("%d",&n)
#define sdd(n,m) scanf("%d%d",&n,&m)
#define sddd(n,m,k) scanf("%d%d%d",&n,&m,&k)
#define pd(n) printf("%d\n", (n))
#define pdd(n,m) printf("%d %d\n", n, m)
#define pld(n) printf("%lld\n", n)
#define pldd(n,m) printf("%lld %lld\n", n, m)
#define sld(n) scanf("%lld",&n)
#define sldd(n,m) scanf("%lld%lld",&n,&m)
#define slddd(n,m,k) scanf("%lld%lld%lld",&n,&m,&k)
#define sf(n) scanf("%lf",&n)
#define sff(n,m) scanf("%lf%lf",&n,&m)
#define sfff(n,m,k) scanf("%lf%lf%lf",&n,&m,&k)
#define rep(i,a,n) for (int i=a;i<=n;i++)
#define per(i,n,a) for (int i=n;i>=a;i--)
#define mm(a,n) memset(a, n, sizeof(a))
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define il inline
#define int long long
#define ll long long
#define ull unsigned long long
#define MOD 1000000007
#define pi 3.14159265358979323
#define debug(x) 			  cout <<#x<<": "<<x<<endl;
#define debug2(x, y)          cout <<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl;
#define debug3(x, y, z)       cout <<#x<<": "<<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl;
#define debug4(a, b, c, d)    cout <<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl;
using namespace std;
const ll INF (0x3f3f3f3f3f3f3f3fll);
const int inf (0x3f3f3f3f);
template<typename T>void read(T &res){bool flag=false;char ch;while(!isdigit(ch=getchar()))(ch=='-')&&(flag=true);
for(res=ch-48;isdigit(ch=getchar());res=(res<<1)+(res<<3)+ch - 48);flag&&(res=-res);}
template<typename T>void Out(T x){if(x<0)putchar('-'),x=-x;if(x>9)Out(x/10);putchar(x%10+'0');}
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a*b/gcd(a,b);}
ll pow_mod(ll x,ll n,ll mod){ll res=1;while(n){if(n&1)res=res*x%mod;x=x*x%mod;n>>=1;}return res;}
ll fact_pow(ll n,ll p){ll res=0;while(n){n/=p;res+=n;}return res;}
ll mult(ll a,ll b,ll p){a%=p;b%=p;ll r=0,v=a;while(b){if(b&1){r+=v;if(r>p)r-=p;}v<<=1;if(v>p)v-=p;b>>=1;}return r;}
ll quick_pow(ll a,ll b,ll p){ll r=1,v=a%p;while(b){if(b&1)r=mult(r,v,p);v=mult(v,v,p);b>>=1;}return r;}
bool CH(ll a,ll n,ll x,ll t)
{ll r=quick_pow(a,x,n);ll z=r;for(ll i=1;i<=t;i++){r=mult(r,r,n);if(r==1&&z!=1&&z!=n-1)return true;z=r;}return r!=1;}
bool Miller_Rabin(ll n)
{if(n<2)return false;if(n==2)return true;if(!(n&1))return false;ll x=n-1,t=0;while(!(x&1)){x>>=1;t++;}srand(time(NULL));
ll o=8;for(ll i=0;i<o;i++){ll a=rand()%(n-1)+1;if(CH(a,n,x,t))return false;}return true;}
void exgcd(ll a,ll b ,ll &x,ll &y){if(!b){x=1,y=0;return;}exgcd(b,a%b,x,y);ll t=x;x=y,y=t-(a/b)*y;}
ll INV(ll a,ll b){ll x,y;return exgcd(a,b,x,y),(x%b+b)%b;}
ll crt(ll x,ll p,ll mod){return INV(p/mod,mod)*(p/mod)*x;}
ll FAC(ll x,ll a,ll b)
{if(!x)return 1;ll ans=1;for(ll i=1;i<=b;i++)if(i%a)ans*=i,ans%=b;
ans=pow_mod(ans,x/b,b);for(ll i=1;i<=x%b;i++)if(i%a)ans*=i,ans%=b;return ans*FAC(x/a,a,b)%b;}
ll C(ll n,ll m,ll a,ll b)
{ll N=FAC(n,a,b),M=FAC(m,a,b),Z=FAC(n-m,a,b),sum=0,i;for(i=n;i;i=i/a)sum+=i/a;
for(i=m;i;i=i/a)sum-=i/a;for(i=n-m;i;i=i/a)sum-=i/a;return N*pow_mod(a,sum,b)%b*INV(M,b)%b*INV(Z,b)%b;}
ll exlucas(ll n,ll m,ll p)
{ll t=p,ans=0,i;for(i=2;i*i<=p;i++){ll k=1;while(t%i==0){k*=i,t/=i;}
ans+=crt(C(n,m,i,k),p,k),ans%=p;}if(t>1)ans+=crt(C(n,m,t,t),p,t),ans%=p;return ans % p;}
/*
int prime[100000],minprime[100000];
void euler(int n)
{int c=0,i,j;for(i=2;i<=n;i++){if(!minprime[i])prime[++c]=i,minprime[i]=i;for(j=1;j<=c&&i*prime[j]<=n;j++)
{minprime[i*prime[j]]=prime[j];if(i%prime[j]==0)break;}}}
struct Tree{ll l,r,sum,lazy,maxn,minn;}tree[100000];
il void push_up(ll rt)
{tree[rt].sum=tree[rt<<1].sum+tree[rt<<1|1].sum;
tree[rt].maxn=max(tree[rt<<1].maxn,tree[rt<<1|1].maxn);
tree[rt].minn=min(tree[rt<<1].minn,tree[rt<<1|1].minn);}
il void push_down(ll rt , ll length)
{if(tree[rt].lazy){tree[rt<<1].lazy+=tree[rt].lazy;tree[rt<<1|1].lazy+=tree[rt].lazy;
tree[rt<<1].sum+=(length-(length>>1))*tree[rt].lazy;tree[rt<<1|1].sum+=(length>>1)*tree[rt].lazy;
tree[rt<<1].minn+=tree[rt].lazy;tree[rt<<1|1].minn+=tree[rt].lazy;
tree[rt<<1].maxn+=tree[rt].lazy;tree[rt<<1|1].maxn+=tree[rt].lazy;tree[rt].lazy=0;}}
il void build(ll l , ll r , ll rt , ll *aa)
{tree[rt].lazy=0;tree[rt].l=l;tree[rt].r=r;if(l==r)
{tree[rt].sum=aa[l];tree[rt].minn=tree[rt].sum;tree[rt].maxn=tree[rt].sum;return;}
ll mid=(l+r)>>1;build(l,mid,rt<<1,aa);build(mid+1,r,rt<<1|1,aa);push_up(rt);}
il void update_range(ll L , ll R , ll key , ll rt)
{if(tree[rt].r<L||tree[rt].l>R)return;if(L<=tree[rt].l&&R>=tree[rt].r){tree[rt].sum+=(tree[rt].r-tree[rt].l+1)*key;
tree[rt].minn+=key;tree[rt].maxn+=key;tree[rt].lazy+=key;return;}push_down(rt,tree[rt].r-tree[rt].l+1);
ll mid=(tree[rt].r+tree[rt].l)>>1;if(L<=mid)update_range(L,R,key,rt << 1);
if(R>mid)update_range(L,R,key,rt << 1 | 1);push_up(rt);}
il ll query_range(ll L, ll R, ll rt)
{if(L<=tree[rt].l&&R>=tree[rt].r){return tree[rt].sum;}push_down(rt,tree[rt].r-tree[rt].l+1);
ll mid=(tree[rt].r+tree[rt].l)>>1;ll ans=0;if(L<=mid)ans+=query_range(L,R,rt << 1);
if(R>mid)ans+=query_range(L,R,rt << 1 | 1);return ans;}
il ll query_min(ll L,ll R,ll rt)
{if(L<=tree[rt].l&&R>=tree[rt].r){return tree[rt].minn;}push_down(rt,tree[rt].r-tree[rt].l+1);
ll mid=(tree[rt].r+tree[rt].l)>>1;ll ans=(0x3f3f3f3f3f3f3f3fll);if(L<=mid)ans=min(ans,query_min(L,R,rt << 1));
if(R>mid)ans=min(ans,query_min(L,R,rt << 1 | 1));return ans;}
il ll query_max(ll L, ll R, ll rt)
{if(L<=tree[rt].l&&R>=tree[rt].r){return tree[rt].maxn;}push_down(rt,tree[rt].r-tree[rt].l+1);
ll mid=(tree[rt].r+tree[rt].l)>>1;ll ans=-(0x3f3f3f3f3f3f3f3fll);if(L<=mid)ans=max(ans,query_max(L,R,rt << 1));
if(R>mid)ans=max(ans,query_max(L,R,rt << 1 | 1));return ans;}
*/
const int N = 3e5 + 10;
int n , mod , now , ans , base = 1;
string s;
map<int , int>vis;

signed main()
{
	ios;
	cin >> n >> mod >> s ;
	if(mod == 2 || mod == 5)
	{
		for(int i = 0 ; i < n ; i ++)
		{
			int x = s[i] - '0';
			if(x % mod == 0) ans += i + 1 ;
		}
		return cout << ans << '\n' , 0;
	}
	reverse(s.begin() , s.end()) , vis[0] = 1;	
	for(auto i : s)
	{
		int x = i - '0';
		now = (now + x * base) % mod;
		ans += vis[now]; 
		vis[now] ++ , base *= 10 , base %= mod;
	}
	cout << ans << '\n';
	return 0;
}









