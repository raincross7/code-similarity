#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	string str1, str2;
	cin>>str1;
	cin>>str2;
	reverse(str2.begin(),str2.end());
	if(str1 == str2)
		cout<<"YES"<<endl;
	else
	{
		cout<<"NO"<<endl;
	}
	

	return 0;
}