#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int a,b,k; cin>>a>>b>>k;
	for(int i=min(a,b); i>=0; i--){
		if(a%i==0 && b%i==0)k--;
		if(k==0){cout<<i<<endl; break;}
	}
}
