#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using ll = long long;
int mod = 1000000000+7;

int main(){

	int n;
	cin>>n;

	int ans=0,count=0;
	for(int i=1;i<=n;i+=2){
		count=0;
		for(int j=1;j<=i;j++){
			if(i%j==0)count++;
		}
		if(count==8)ans++;
	}

	cout<<ans<<endl;

	return 0;
}
