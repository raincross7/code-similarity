#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const int N=1e5+5;

int main(){
	string s,t;cin>>s>>t;
	int a,b;cin>>a>>b;
	string u;cin>>u;
	if(u==s)a--;
	else b--;
	cout<<a<<' '<<b;
}