#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define all(x) (x).begin(),(x).end()

int main(){
	string a,b,c,d; cin>>a>>b>>c>>d;
	string s=a+b+c+d;
	sort(all(s));
	if(s=="1479") cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}