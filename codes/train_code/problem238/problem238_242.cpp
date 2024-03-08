#include<cstdio>
#include<vector>
#define l(x) id[x]
#define r(x) id[x]+sz[x]-1
std::vector<int> a[200005];
int n,q,cnt,fa[200005],id[200005],sz[200005],ans[200005],s[200005];
void add(int x,int y){a[x].push_back(y);a[y].push_back(x);}
void dfs(int v)
{
	id[v]=++cnt;sz[v]=1;
	for (int i=0;i<a[v].size();i++)
	{
	    int u=a[v][i];
	    if (u==fa[v]) continue;
	    fa[u]=v;
	    dfs(u);
	    sz[v]=sz[v]+sz[u];
	}
}
void tag(int x,int v){s[l(x)]=s[l(x)]+v;s[r(x)+1]=s[r(x)+1]-v;}
int main()
{
	scanf("%d%d",&n,&q);
	for (int i=1;i<n;i++)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		add(x,y);
	}
	dfs(1);
	while (q--)
	{
		int x,v;
		scanf("%d%d",&x,&v);
		tag(x,v);
	}
	for (int i=1;i<=n;i++) ans[i]=ans[i-1]+s[i];
	for (int i=1;i<=n;i++) printf("%d ",ans[id[i]]);
	return 0;
}