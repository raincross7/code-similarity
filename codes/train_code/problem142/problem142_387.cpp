#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

int main(){
	string s; cin>>s;
	s+=string(15-s.length(),'o');
	cout<<(count(s.begin(),s.end(),'o')>=8?"YES":"NO")<<'\n';
	return 0;
}
