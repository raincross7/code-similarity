#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b)/gcd
#define rep(i,n)   for(int i=0;i<n;i++)
#define Rep(i,n)   for(int i=1;i<=n;i++)
#define REP(i,j,n) for(int i=j;i<=n;i++)
#define fast   ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)


int main()
{ 
	fast;
	ll n,m;
	cin>>n>>m;
	ll maxi=max(n,m);
	ll mini=min(n,m);
	for(int i=1;i<=maxi;i++){
		cout<<mini;
	}
	cout<<endl;
	return 0;

}