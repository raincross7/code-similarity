#include<bits/stdc++.h>
using namespace std;
long long ans;
int a[1005];
int main()
{
	int n,k;cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=k;i++)
	{
		ans+=a[i];
	}
	cout<<ans;
}