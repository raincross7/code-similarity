/*
khoi orz, go check out his algo
-normie-
*/
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int64_t i=0;i < (int64_t)(n);i++)
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define FILE_IN "robot.inp"
#define FILE_OUT "robot.out"
#define ofile freopen(FILE_IN,"r",stdin);freopen(FILE_OUT,"w",stdout)
#define fio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define nfio cin.tie(0);cout.tie(0)
#define max(x,y) (((x)>(y))?(x):(y))
#define min(x,y) (((x)<(y))?(x):(y))
#define ord(a,b,c) ((a>=b)and(b>=c))
#define MOD (ll(1000000007))
#define MAX 300001
#define mag 1048576
#define fi first
#define se second
#define pow2(x) (ll(1)<<x)
#define pii pair<int,int>
#define piii pair<int,pii>
#define pll pair<ll,ll>
#define plll pair<ll,pll>
#define For(i,__,___) for(int i=__;i<=___;i++)
#define Rep(i,__,___) for(int i=__;i>=___;i--)
#define ordered_set tree<long long,null_type,less<long long>,rb_tree_tag,tree_order_statistics_node_update>
#define endl "\n"
#define bi BigInt
#define ll long long
#define pi 3.1415926535897
//------START-----------//
struct node
{
	int match;
	int gt[2];
	node()
	{
		match=0;
		gt[0]=-1; gt[1]=-1;
	}
};
//------END-----------//
ll n,m,k,t,t1,i,j,a,b, res=-1,resi,resj;
vector<node> trie(1);
vector<ll> v;
void pus (ll k)
{
	ll cur=0, bt[64];
	for (ll i=63;i>=0;i--)
	{
		bt[i]=k%2; k/=2;
	}
	for (ll i=0;i<64;i++)
	{
		if (trie[cur].gt[bt[i]]==-1)
		{
			trie.push_back(node());
			trie[cur].gt[bt[i]]=trie.size()-1;
		}
		cur=trie[cur].gt[bt[i]];
		trie[cur].match++;
	}
}
int main()
{
//	ofile;
	fio;
	cin>>n>>m;
	for (i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
		k=0;
		for (j=i;j>=0;j--)
		{
			k+=v[j];
			pus(k);
		}
	}
	vector<ll> vn,vn2;
	vn.push_back(0);
	res=0;
	for (i=0;i<64;i++)
	{
		vn2.clear();
		res*=2;
		ll cnt=0;
		for (ll g:vn) 
		{
			ll nxt=trie[g].gt[1];
			if (nxt>0) cnt+=trie[nxt].match;
			if (nxt>0) vn2.push_back(nxt);
		}
		if (cnt>=m) res++;
		else
		for (ll g:vn) 
		{
			ll nxt=trie[g].gt[0];
			if (nxt>0) vn2.push_back(nxt);
		}
		vn=vn2;
	}
	cout<<res;
}