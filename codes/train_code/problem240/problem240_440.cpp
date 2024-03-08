/* author:hellojim */
#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<set>
#include<map>
#include<utility>
#include<queue>
#include<vector>
#include<stack>
#include<sstream>
#include<algorithm>
#define forn(i,a,b)for(int i=(a),_b=(b);i<=_b;i++)
#define fore(i,b,a)for(int i=(b),_a=(a);i>=_a;i--)
#define rep(i,n)for(int i=0,_n=n;i<n;i++)
#define ll long long
#define pii pair<int,int>
#define vi vector<int>
#define vpii vector<pii>
#define m_p make_pair
#define re return
#define pb push_back
#define si set<int>
#define ld long double
#define X first
#define Y second
#define st string
#define ull unsigned long long
#define mod 1000000007
#define INF 1000000007
#define x1 XZVJDFADSPFOE
#define y1 GASDIJSLDAEJF
#define x2 DFDAJKVOHKWIW
#define y2 PSFSAODSXVNMQ
#define LLINF 0x3f3f3f3f3f3f3f3fLL
using namespace std;
inline void read(int &x)
{
	short negative=1;
    x=0;
    char c=getchar();
    while(c<'0' || c>'9')
    {
		if(c=='-')
			negative=-1;
		c=getchar();
	}
    while(c>='0' && c<='9')
        x=(x<<3)+(x<<1)+(c^48),c=getchar();
    x*=negative;
}
ll quickpower(ll n,ll k){
	ll ans=1;
	while(k){
		if(k%2){
			ans*=n;
			ans%=mod;
		}
		n*=n;
		n%=mod;
		k/=2;
	}
	return ans;
}
string int_to_string(int n)
{
	string s="";
	while(n)
	{
		int now=n%10;
		s+=now+'0';
		n/=10;
	}
	reverse(s.begin(),s.end());
	return s;
}
int string_to_int(string s)
{
	int n=0;
	rep(i,s.size())
	{
		n*=10;
		n+=s[i]-'0';
	}
	return n;
}
ll dp[2020][2020];
ll sum[2020][2020];
int main()
{
	ios::sync_with_stdio(0);
	//think twice,code once
	int n;
	cin>>n;
	if(n<=2)
	{
		cout<<0<<endl;
		return 0;
	}
	ll ans=0;
	memset(dp,0,sizeof(dp));
	memset(sum,0,sizeof(sum));
	rep(i,n+1)sum[0][i]=1;
	dp[0][0]=1;
	for(int i=1;i<=1000;i++)
	{
		if(i*3>n)break;
		for(int j=3;j<=n;j++)
			dp[i][j]=sum[i-1][j-3];
		sum[i][0]=dp[i][0];
		for(int j=1;j<=n;j++)
			sum[i][j]=(sum[i][j-1]+dp[i][j]+mod)%mod; 
	}
	for(int i=1;i<=1000;i++)ans=(ans+dp[i][n])%mod;
	cout<<ans<<endl; 
	return 0;
}

