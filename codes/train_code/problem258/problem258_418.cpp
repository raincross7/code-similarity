#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define cool ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
#define ll long long
#define MAX 1000001
#define mod 1000000007
#define pie 3.14159265358979323846
void solve()
{
	string s;
	cin>>s;
	for(int i=0;i<3;i++){
		if(s[i]=='1')
		s[i]='9';
		else if(s[i]=='9')
		s[i]='1';
	}
	cout<<s;
}
int main()
{ 
    cool;
    int t;
    //cin>>t;
    t=1;
    while(t--){
    	solve();
	}
    return 0;
}
