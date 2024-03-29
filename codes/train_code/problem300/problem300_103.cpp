// https://atcoder.jp/contests/abc128/tasks/abc128_c
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<int,int> P;

#define rep(i,n) for(int i=0;i<(n);++i)
#define repi(i,a,b) for(int i=int(a);i<(b);i++)
#define repr(i,b,a) for(int i=int(b);i>=(a);i--)
#define all(x) x.begin(),x.end()

const ll mod = 1e9+7;
const ll INF = 1e9;

ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool valid(int lx,int ux,int ly,int uy,int x,int y){
	return lx<=x&&x<ux&&ly<=y&&y<uy; 
}
ll power(ll x,ll p){
	if(p==0)return 1;
	ll res=power(x*x%mod,p/2);
	if(p%2==1)res=res*x%mod;
	return res;
}

int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>> s(m,vector<int>());
	rep(i,m){
		int k;
		cin>>k;
		s[i].resize(k);
		rep(j,k)cin>>s[i][j];
	}
	vector<int> p(m);
	rep(i,m)cin>>p[i];

	int ans=0;
	rep(bit,(1<<n)){
		int light=0;
		rep(i,m){
			int cnt=0;
			rep(j,s[i].size()){
				if((bit>>s[i][j]-1)&1)cnt++;
			}
			if(cnt%2==p[i])light++;
		}
		if(light==m)ans++;
	}
	cout<<ans<<endl;
	return 0;
}