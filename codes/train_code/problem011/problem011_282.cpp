#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
#define f first
#define s second
#define mp make_pair
using namespace std;

ll func(ll n, ll x)
{
	if(n<x) swap(n,x);
	if(n%x==0) return 2*(n/x)*x-x;
	return 2*(n/x)*x+func(n%x,x);
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,x;
	cin>>n>>x;
	ll ans =0;
	ans += n;
	ans += func(n-x,x);
	cout<<ans<<endl;
	return 0;
}