#include<bits/stdc++.h>
using namespace std; 
#define ll long long int 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin>>s;
	if(s[0]==s[1] && s[1]==s[2])
	{
		cout<<"No"<<endl;
		return 0;
	}
	cout<<"Yes"<<endl;
}