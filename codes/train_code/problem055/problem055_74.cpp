#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int cnt=0,ans=0;
	for (int i = 0; i < n-1; ++i)
	{
		if (a[i]==a[i+1])
		{
			++cnt;
		}
		else
		{
			ans+=(cnt+1)/2;
			cnt=0;
		}
	}
	ans+=(cnt+1)/2;
	cout<<ans<<endl;
	return 0;
}
