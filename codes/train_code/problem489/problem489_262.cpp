#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

int main(){
	string s; cin>>s;
	puts(s.length()>=4&&s.substr(0,4)=="YAKI"?"Yes":"No");
	return 0;
}
