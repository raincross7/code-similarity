#include<bits/stdc++.h>
using namespace std;
#define ll long long int

#define mod 1000000007	 


int main(){
		
	ll n;
	cin>>n;
	ll ar[n];
	for(int i=0;i<n;i++){
	 	cin>>ar[i];
	}
	
	ll ans = 0;	
	for(int i=0;i<60;i++){
		ll num = 1ll<<i;
		ll ones = 0,zeroes = 0;
		for(int j=0;j<n;j++){
			if(num&ar[j]){
				ones++;
			}else{
				zeroes++;
			}	
		}
		ll curr = ((ones%mod)*(zeroes%mod))%mod;
		curr = ((curr%mod)*(num%mod))%mod;
		ans = ((curr%mod)+(ans%mod))%mod;	
	}
	cout<<ans%mod;

	
	
	return 0;
}
