#include<bits/stdc++.h>
#define title "title"
#define ll long long
#define ull unsigned ll
#define fix(x) fixed<<setprecision(x)
#define pii pair<int,int>
#define vint vector<int>
#define pb push_back
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define red(i,a,b) for(int i=(a);i>=(b);i--)
#define db double
#define ld long db
using namespace std;
void Freopen(){
	freopen(title".in","r",stdin);
	freopen(title".out","w",stdout);
}
ll read(){
	ll g=0,f=1;
	char ch=getchar();
	while(ch<'0'||'9'<ch){if(ch=='-')f=-1;ch=getchar();}
	while('0'<=ch&&ch<='9'){g=g*10+ch-'0';ch=getchar();}
	return g*f;
}
const int N=1e5+5;
map<ll,int>id,fid;
ll a[N],ans;
int n,siz[N];
vint G[N];
void dfs(int x,int dis){ans+=dis;for(auto y:G[x])dfs(y,dis+1);}
signed main(){
	//freopen("a","r",stdin);
	n=read();rep(i,1,n)a[i]=read(),fid[a[i]]=i;
	sort(a+1,a+n+1,[](ll a,ll b){return a>b;});
	rep(i,1,n)id[a[i]]=i,siz[i]=1;
	rep(i,1,n-1){
		ll to=a[i]+siz[i]-(n-siz[i]);
		if(!id[to])return cout<<-1,signed();
		G[id[to]].pb(i);siz[id[to]]+=siz[i];
	}dfs(n,0);if(ans^a[n])return cout<<-1,signed();
	rep(i,1,n)for(auto j:G[i])cout<<fid[a[i]]<<' '<<fid[a[j]]<<'\n';
	return signed();
}