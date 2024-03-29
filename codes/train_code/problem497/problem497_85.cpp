#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<ctime>
#include<utility>
#include<functional>
#include<cmath>
#include<vector>
#include<map>
//using namespace std;
using std::min;
using std::max;
using std::swap;
using std::sort;
using std::reverse;
using std::random_shuffle;
using std::lower_bound;
using std::upper_bound;
using std::unique;
using std::vector;
using std::map;
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef std::pair<int,int> pii;
typedef std::pair<ll,ll> pll;
void open(const char *s){
#ifndef ONLINE_JUDGE
	char str[100];sprintf(str,"%s.in",s);freopen(str,"r",stdin);sprintf(str,"%s.out",s);freopen(str,"w",stdout);
#endif
}
void open2(const char *s){
#ifdef DEBUG
	char str[100];sprintf(str,"%s.in",s);freopen(str,"r",stdin);sprintf(str,"%s.out",s);freopen(str,"w",stdout);
#endif
}
int rd(){int s=0,c,b=0;while(((c=getchar())<'0'||c>'9')&&c!='-');if(c=='-'){c=getchar();b=1;}do{s=s*10+c-'0';}while((c=getchar())>='0'&&c<='9');return b?-s:s;}
void put(int x){if(!x){putchar('0');return;}static int c[20];int t=0;while(x){c[++t]=x%10;x/=10;}while(t)putchar(c[t--]+'0');}
int upmin(int &a,int b){if(b<a){a=b;return 1;}return 0;}
int upmax(int &a,int b){if(b>a){a=b;return 1;}return 0;}
const int N=100010;
void failed()
{
	printf("-1\n");
	exit(0);
}
map<ll,int> mp;
pll a[N];
int s[N];
ll d[N];
int n;
int b[N];
vector<int> g[N];
vector<pii> ans;
int sz[N];
ll f[N];
ll h[N];
void dfs(int x,int fa)
{
	sz[x]=1;
	for(auto v:g[x])
	{
		dfs(v,x);
		sz[x]+=sz[v];
		f[x]+=f[v]+sz[v];
	}
}
void dfs2(int x,int fa)
{
	for(auto v:g[x])
	{
		h[v]=h[x]+(n-sz[v])-sz[v];
		dfs2(v,fa);
	}
}
int main()
{
	open2("f");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&d[i]);
		s[i]=1;
		a[i]=pll(d[i],i);
		mp[d[i]]=i;
	}
	sort(a+1,a+n+1,std::greater<pll>());
	for(int i=1;i<n;i++)
	{
		int x=a[i].second;
		int fa=mp[d[x]-(n-s[x])+s[x]];
		if(!fa||b[fa])
			failed();
		g[fa].push_back(x);
		ans.push_back(pii(fa,x));
		s[fa]+=s[x];
		b[x]=1;
	}
	int rt=a[n].second;
	dfs(rt,0);
	h[rt]=f[rt];
	dfs2(rt,0);
	for(int i=1;i<=n;i++)
		if(h[i]!=d[i])
			failed();
	for(auto v:ans)
		printf("%d %d\n",v.first,v.second);
	return 0;
}