#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
typedef long double ld;
#define fr first
#define sc second
#define pb push_back
const ll mod = 998244353;
const int N = 1e6+205;
void solve(){
	int x,y,xx,yy;
	cin>>x>>y>>xx>>yy;
	int dx = x-xx;
	int dy = y-yy;
	cout<<xx+dy<<" "<<yy-dx<<" "<<x+dy<<" "<<y-dx<<endl;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1; 
//	cin>>t; 
	while(t--){
		solve();
	}
	return 0;
}
