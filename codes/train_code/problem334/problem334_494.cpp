#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define Rep(i,s,f) for(int i=(int)s;i<(int)f;i++)
using ll=long long;
using namespace std;


int main()
{
	int N;
	cin>>N;
	string s,t;
	cin>>s>>t;
	rep(i,N)
	{
		cout<<s[i]<<t[i];
	}
	cout<<"\n";
	return 0;
}
