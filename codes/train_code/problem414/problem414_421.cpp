#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define SZ(x) ((int)x.size())
#define L(i,u) for (register int i=head[u]; i; i=nxt[i])
#define rep(i,a,b) for (register int i=(a); i<=(b); i++)
#define per(i,a,b) for (register int i=(a); i>=(b); i--)
using namespace std;
typedef long long ll;
typedef unsigned int ui;
typedef pair<int,int> Pii;
typedef vector<int> Vi;
inline void read(int &x) {
	x=0; char c=getchar(); int f=1;
	while (!isdigit(c)) {if (c=='-') f=-1; c=getchar();}
	while (isdigit(c)) {x=x*10+c-'0'; c=getchar();} x*=f;
}
inline ui R() {
	static ui seed=416;
	return seed^=seed>>5,seed^=seed<<17,seed^=seed>>13;
}
const int N = 555555;
Vi e[N];int n,f[N];
void dfs(int u, int fa){
	per(i,SZ(e[u])-1,0)
		if(e[u][i]!=fa)dfs(e[u][i],u),f[u]^=f[e[u][i]]+1;
}
int main() {
	read(n);rep(i,2,n){int u,v;read(u);read(v);e[u].pb(v);e[v].pb(u);}
	dfs(1,0);if(f[1])puts("Alice");else puts("Bob");
	return 0;
}
