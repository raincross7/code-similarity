#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007
#define exp pow(10,-9)
#define F first
#define S second
#define PB push_back 
#define MP make_pair
#define daman ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define lowercase(str) transform(str.begin(), str.end(), str.begin(), ::tolower);
#define uppercase(str) transform(str.begin(), str.end(), str.begin(), ::toupper);
main()
{
	string str;
	cin>>str;
	
	if(str.length() == 6 && str[2] == str[3] && str[4] == str[5])
		cout<<"Yes\n";
	else
		cout<<"No\n";
}