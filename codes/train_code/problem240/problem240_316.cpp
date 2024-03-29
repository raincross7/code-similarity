#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod =1e9+7;
vector<ll>fat,fat_inv,inv; 
//a^(phi(m)-1)=a^-1 mod m
//a^(m-2)=a^-1 mod m if m prime
void fill_fat(int n){
	fat=vector<ll>(n+1,1);
	fat_inv=vector<ll>(n+1,-1);
	for(ll i=2;i<=n;i++){
		fat[i]=fat[i-1]*i %mod;
	}
}

ll binExp(ll b, ll e){
	ll ret=1;
	while(e){
		if(e&1){
			ret=ret*b %mod;
		}
		b=b*b %mod;
		e/=2;
	}
	return ret;
}

ll comb(ll n, ll k){
	if(fat_inv[k]==-1)fat_inv[k]=binExp(fat[k],mod-2);
	if(fat_inv[n-k]==-1)fat_inv[n-k]=binExp(fat[n-k],mod-2);
 
	ll ret = fat[n]*fat_inv[k]%mod;
	return ret = ret*fat_inv[n-k]%mod;
}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	fill_fat((int)1e6);
	ll s=0,ans=0;
	cin>>s;

	ll n=0;
	while(s-3>=0){
		s-=3;
		n++;

		ans= (ans+comb(s+n-1,n-1))%mod;
	}
	cout<<ans<<'\n';
	return 0;
}