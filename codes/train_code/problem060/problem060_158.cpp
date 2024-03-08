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
#define N 3000005
#define endl "\n"
#define mod 1000000007
#define PI 3.141592653589793
//((1.0l)*BIG MULTIPLY MAGIC?)
// string to integer stoi()
// string to long long stoll()
// string.substr(position,length);
// integer to string to_string();
//----------------------------------------------
ll n,cl[N],dp[N][2]; vector<ll> vc[N];
ll dfs(ll i,ll p,ll flg){
	if(dp[i][flg]!=-1){
		return dp[i][flg];
	}
	if(flg){
		ll a=1,b=1;	
		for(auto it:vc[i]){
			if(it==p) continue;
			a=(a*dfs(it,i,1))%mod;
			b=(b*dfs(it,i,0))%mod;
		}
		return dp[i][flg]=(a+b)%mod;
	}
	else{
		ll a=1;
		for(auto it:vc[i]){
			if(it==p) continue;
			a=(a*dfs(it,i,1))%mod;
		}
		return dp[i][flg]=a%mod;
	}
}
int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll i,j,k,l;
	cin>>n;
	for(i=1;i<n;i++){
		cin>>k>>l;
		vc[k].ps(l);
		vc[l].ps(k);
	}
	memset(dp,-1,sizeof(dp));
	ll an=dfs(1,1,1);
	cout<<an<<endl;
	return 0;	
}