#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
#define mp make_pair
#define pb push_back
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)  ((a)*((b)/gcd(a,b)))
#define pi 3.14159265358979323846
#define mod 1000000007
#define reus ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int32_t main()
{
	reus;
	
//	#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//	#endif
	
	string s;
	cin>>s;
	int sum=0;
	for(int i=0;i<s.length();i++)
	{
		sum+=(s[i]-'0');
	}
	if(sum%9==0)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	return 0;
}