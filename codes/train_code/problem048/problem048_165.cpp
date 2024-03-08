#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<cmath>
#include<iomanip>
#include<cstring>
#define initdp(a,b) for(int i=0;i<=a;i++)for(int j=0;j<=b;j++)dp[i][j]=-1;
#define fi first
#define se second
#define pb push_back
#define pii pair<int,int>
#define ppi pair<pii,int>
#define pip pair<int,pii>
#define ll long long
#define pll pair<ll,ll>
#define rep(i,n) for(int i=0;i<n;i++)
#define repd(i,n) for(int i=n-1;i>=0;i--)
#define inf 1000000001
#define inf1 1000000000000000001
#define mod 1000000007
#define pie 3.14159265358979323846
#define N 1000005
#define mid(l,r) l+(r-l)/2
using namespace std;
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
int ddx[8]={1,1,0,-1,-1,-1,0,1},ddy[8]={0,1,1,1,0,-1,-1,-1};
void mad(ll &a,ll b){a=(a+b)%mod;if(a<0)a+=mod;}
ll gcd(ll a,ll b){ if(!a)return b;return gcd(b%a,a);}

void solve(){
	int n,k;
	cin>>n>>k;
	int a[n+2];
	rep(i,n)cin>>a[i+1];
	while(k--){
		int b[n+2];
		memset(b,0,sizeof(b));
		for(int i=1;i<=n;i++){
			int l=max(1,i-a[i]);
			int r=min(n,i+a[i]);
			b[l]++;
			b[r+1]--;
		}
		int c=0;
		for(int i=1;i<=n;i++){
			a[i]=b[i]=b[i-1]+b[i];
			if(a[i]==n)c++;
		}
		if(c==n)break;
	}
	rep(i,n)cout<<a[i+1]<<" ";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	//cin>>t;
	t=1;
	while(t--){
		solve();
	}
}