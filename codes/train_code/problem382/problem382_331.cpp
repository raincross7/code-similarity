#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize ("-ffloat-store") // to restrict undesirable precision
#pragma GCC optimize ("-fno-defer-pop")// to pop argument of function as soon as it returns
#define all(a) a.begin(),a.end()
#define ll long long int
#define ld long double
ll power(ll a,ll b,ll m){ if(b==0) return 1; if(b==1) return a%m; ll t=power(a,b/2,m)%m; t=(t*t)%m; if(b&1) t=((t%m)*(a%m))%m; return t;}
ll modInverse(ll a, ll m) { return power(a, m-2, m); }
#define ps push_back
#define fs first
#define sc second
#define takeline cin.ignore();
#define iactive cout.flush();
#define N 200005
#define endl "\n"
#define mod 1000000007
//((1.0l)*BIG MULTIPLY MAGIC?)
// string to integer stoi()
// string to long long stoll()
// string.substr(position,length);
// integer to string to_string();
//-----------------------------------------------
ll ar[N];
void preprs(ll n){
	for(ll i=1;i<=n;i++){
		ar[i]=i;
	}
}
ll root(ll i){
	while(ar[i]!=i){
		ar[i]=ar[ar[i]];
		i=ar[i];
	}
	return i;
}
void dunion(ll x,ll y){
	x=root(x); y=root(y);
	if(x==y) return ;
	if(y<x) swap(x,y);
	ar[y]=x;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	ll i,j,k,l,n,q;
	cin>>n>>q;
	preprs(n);
	while(q--){
		cin>>i>>k>>l;
		if(i==0){
			dunion(k,l);
		}
		else{
			if(root(k)==root(l)) cout<<"1"<<endl;
			else cout<<"0"<<endl;
		}
	}
	return 0;
}