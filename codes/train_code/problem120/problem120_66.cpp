#pragma GCC optimize(2)
#include<bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define inf 1e9
#define pb push_back
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define per(i,a,b) for(int i=a;i>=b;i--)
using namespace std;

inline int read()
{
	int x=0,w=1; char c=getchar();
	while(c<'0'||c>'9') {if(c=='-') w=-1; c=getchar();}
	while(c<='9'&&c>='0') {x=(x<<1)+(x<<3)+c-'0'; c=getchar();}
	return w==1?x:-x;
}

int t[maxn],F,n,ind[maxn],ans[maxn];
vector <int> mp[maxn];

int main()
{
	n=read();
	rep(i,1,(n-1))
	{
		int u=read(),v=read();
		mp[u].pb(v); mp[v].pb(u); ind[u]++; ind[v]++;
	}
	rep(i,1,n)
	{
		for(int j=0;j<mp[i].size();j++)
		{
			int v=mp[i][j];
			t[i]+=(ind[v]==1);
		}
	}
	rep(i,1,n)
	{
		if(t[i]==0&&ind[i]!=1)
		for(int j=0;j<mp[i].size();j++)
		{
			int v=mp[i][j];
			ans[i]+=(t[v]>=1);
		}
		if(ans[i]==mp[i].size()) F=1;
	}
	rep(i,1,n) if(t[i]>=2) F=1;
	if(F||n%2==1) puts("First"); else puts("Second");
	return 0;
}