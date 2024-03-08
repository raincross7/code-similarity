#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize ("-ffloat-store") // to restrict undesirable precision
#pragma GCC optimize ("-fno-defer-pop")// to pop argument of function as soon as it returns
#define all(a) a.begin(),a.end()
#define ll long long int
#define ld long double
ll power(ll a,ll b,ll m){ if(b==0) return 1; if(b==1) return a%m; ll t=power(a,b/2,m)%m; t=(t*t)%m; if(b&1) t=((t%m)*(a%m))%m; return t;}
ll modInverse(ll a, ll m) { return power(a, m-2, m); }
#define ps push_back
#define fs first
#define sc second
#define takeline cin.ignore();
#define iactive cout.flush();
#define N 100005
#define endl "\n"
#define mod 1000000007
#define PI 3.141592653589793
//((1.0l)*BIG MULTIPLY MAGIC?)
// string to integer stoi()
// string to long long stoll()
// string.substr(position,length);
// integer to string to_string();
//-----------------------------------------------
ll n,k; ll ar[105],dp[105][N];
ll findans(ll i,ll cur_k){
	if(cur_k<0) return 0;
	if(cur_k==0) return 1;
	if(i==n+1) return 0;

	if(dp[i][cur_k]!=-1){
		return dp[i][cur_k];
	}
	ll a,b;
	a=(findans(i+1,cur_k)-findans(i+1,cur_k-min(cur_k,ar[i])-1)+mod)%mod;
	b=findans(i,cur_k-1)%mod;
	return dp[i][cur_k]=(a+b)%mod;
}
int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	ll i,j,l;
	cin>>n>>k;
	for(i=1;i<=n;i++){
		cin>>ar[i];
	}
	memset(dp,-1,sizeof(dp));
	ll an=findans(1,k);
	cout<<an;
	return 0;
}