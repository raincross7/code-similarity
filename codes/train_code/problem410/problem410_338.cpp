#include <bits/stdc++.h>
#define arep(a,i,n) for(ll i=(a);i<(n);i++)
#define rep(i,n) for(ll i=0;i<(n);i++)
#define cinf(x,n) for(ll i=0;i<(n);i++)cin>>x[i];
#define coutf(x,n) for(ll i=0;i<(n);i++)cout<<x[i]<<endl;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
 
using namespace std;
 
ll cnt;
 
int main(){
	ll n;
	cin >> n;
	ll a[n];
	cinf(a,n);
	ll start=1;
	while(start!=2){
		start=a[start-1];
		cnt++;
		if(cnt>n){
			cout << -1 << endl;
			return 0;
		}
	}
	cout << cnt << endl;
}