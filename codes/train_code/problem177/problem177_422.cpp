#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	if(s[0]==s[1] && s[2]==s[3] && s[1]!=s[3] && s[1]!=s[4]) cout<<"Yes";
	else cout<<"No";
 
}