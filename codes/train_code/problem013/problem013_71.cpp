// This amazing code is by Eric Sunli Chen.
#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <utility>
#include <vector>
using namespace std;
template<typename T> void get_int(T &x)
{
	char t=getchar();
	bool neg=false;
	x=0;
	for(; (t>'9'||t<'0')&&t!='-'; t=getchar());
	if(t=='-')neg=true,t=getchar();
	for(; t<='9'&&t>='0'; t=getchar())x=x*10+t-'0';
	if(neg)x=-x;
}
template<typename T> void print_int(T x)
{
	if(x<0)putchar('-'),x=-x;
	short a[20]= {},sz=0;
	while(x>0)a[sz++]=x%10,x/=10;
	if(sz==0)putchar('0');
	for(int i=sz-1; i>=0; i--)putchar('0'+a[i]);
}
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define get1(a) get_int(a)
#define get2(a,b) get1(a),get1(b)
#define get3(a,b,c) get1(a),get2(b,c)
#define printendl(a) print_int(a),puts("")
typedef long long LL;
typedef unsigned long long uLL;
typedef pair<int,int> pii;
const int inf=0x3f3f3f3f;
const LL Linf=1ll<<61;
const double pi=acos(-1.0);

vector<int> g[100111];
int n,m,mark[100111],tot[2],all[2];
bool dfs(int x,int mk)
{
	if(mark[x])
	{
		if(mark[x]!=mk)return false;
		else return true;
	}
//	printf("dfs %d %d\n",x,mk);
	mark[x]=mk;
	tot[mk-1]++;
	bool ret=true;
	for(int i=0;i<(int)g[x].size();i++)
		if(!dfs(g[x][i],3-mk))ret=false;
	return ret;
}
int main()
{
	get2(n,m);
	for(int i=1,u,v;i<=m;i++)
	{
		get2(u,v);
		g[u].pb(v);
		g[v].pb(u);
	}
	LL ans=0;
	int spare=0;
	for(int i=1;i<=n;i++)
	{
		if(mark[i])continue;
		tot[0]=tot[1]=0;
		int tmp=dfs(i,1);
		if(tot[0]+tot[1]==1)spare++;
		else all[tmp]++;
	}
//	printf("all %d %d spare= %d\n",all[0],all[1],spare);
	ans=1ll*n*n-1ll*(n-spare)*(n-spare)+2ll*all[1]*all[1]+2ll*all[0]*all[1]+1ll*all[0]*all[0];
	printendl(ans);
	return 0;
}