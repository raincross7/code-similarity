/*
Though leaves are many , the root is one.
Through all the lying days of my youth
I swayed my leaves and flowers in the sun.
Now I may wither into the truth.
	  	  	- William Butler Yeats
*/
//#pragma GCC optimize("Ofast,no-stack-protector")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
//#pragma GCC target("avx,tune=native")
#include<bits/stdc++.h>
#pragma comment("-Wl,--stack=1024000000")
//#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;
const int inf=0x3f3f3f3f;
const double eps=1e-6;
const int mod=1000000007;
typedef long long ll;
#ifndef LOCAL
#define cerr if(0)cout
#define eprintf(...) 0
#else
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
#endif
inline string getstr(string &s,int l,int r){string ret="";for(int i=l;i<=r;i++)ret.push_back(s[i]);return ret;}
int modpow(int x,int y,int md=mod){int ret=1;do{if(y&1)ret=(ll)ret*x%md;x=(ll)x*x%md;}while(y>>=1);return ret;}
inline int Rand(){return rand()*32768+rand();}
int n,m,sz,cnt;
vector<int>g[100005]; 
int col[100005],id[100005];
void dfs(int x,int ind){
	sz++;
	for(auto to:g[x]){
		if(!col[to]){
			col[to]=3-col[x];
			id[to]=ind;
			dfs(to,ind);
		}
	}
}
bool bin[100005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	int tot=0;
	for(int i=1;i<=n;i++){
		if(!col[i]){
			col[i]=1;
			id[i]=++tot;
			sz=0;
			dfs(i,tot);
			if(sz==1)cnt++;
		}
	}
	for(int i=1;i<=tot;i++)bin[i]=1;
	for(int i=1;i<=n;i++){
		for(auto to:g[i]){
			if(col[i]==col[to]){
				bin[id[i]]=0;
			}
		}
	}
	int cnt1=-cnt,cnt2=0;
	for(int i=1;i<=tot;i++){
		if(bin[i])cnt1++;
		else cnt2++;
	}
	cout<<(ll)n*n-(ll)(n-cnt)*(n-cnt)+(ll)(tot-cnt)*(tot-cnt)+(ll)cnt1*cnt1<<endl;
	return 0;
}