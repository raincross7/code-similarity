#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x,y;
	cin>>x>>y;
	int ans=1;
	while(x<=y)
	{
		x*=2;
		if(x<=y) ans++;
		else  break;
	}
	cout<<ans<<endl;
	return 0;
}
