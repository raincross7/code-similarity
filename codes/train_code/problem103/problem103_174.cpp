#include <bits/stdc++.h>
using namespace std;
int cnt[26];

int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
		cnt[s[i]-'a']++;
	for(int i=0;i<26;i++)
		if(cnt[i]>1){
			cout<<"no"<<endl;
			return 0;
		}
	cout<<"yes"<<endl;
	return 0;
}