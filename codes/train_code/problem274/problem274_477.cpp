#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;cin>>s;
    int ans = 0;
    if(s[0]==s[1] && s[0]==s[2])ans=1;
    if(s[1]==s[2] && s[1]==s[3])ans=1;
    
    if(ans==1)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

	return 0;
}