         /*"Success isn't permanent, failure isn't fatal,
                                      it's the courage to continue that counts"*/
#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define ll long long 
#define scn(n) scanf("%d",&n)
#define lscn(n) scanf("%lld",&n)
#define lpri(n) printf("%lld",n)
#define pri(n) printf("%d",n)
#define pln() printf("\n")
#define priln(n) printf("%d\n",n)
#define lpriln(n) printf("%lld\n",n)
#define rep(i,init,n) for(int i=init;i<n;i++)
#define pb push_back     
#define mp make_pair
#define F first
#define S second
#define gcd __gcd
#define inf INT_MAX
#define ninf INT_MIN
const int mod=1e9+7;         
const int N=5e2+4;

int me(int a,int b)
{
	int res=1;

	while(b)
	{
		if(b&1)
		res=(1LL*res*a)%mod;

		b>>=1; 

		a=(1LL*a*a)%mod;
	}

	return res;
}

int main()
{
	int n,k;

	scn(n); scn(k);

	int dp[k+1];

	for(int i=k;i>=1;i--)
	{
		int choices=k/i;

		dp[i]=me(choices,n);

		for(int j=2*i;j<=k;j+=i)
		dp[i]=(dp[i]-dp[j]+mod)%mod;

		//cout<<i<<" "<<dp[i]<<endl;
	}

	int ans=0;

	rep(i,1,k+1)
	ans=(ans+(1LL*i*dp[i])%mod)%mod;

	pri(ans);


    return 0;
}