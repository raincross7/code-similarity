
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
#define all(x) x.begin(),x.end()
#define rep(i,j,n) for (long long i = j; i < (long long)(n); i++)
#define _GLIBCXX_DEBUG
#define MOD 1000000007
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//name[i][j]-> vvl name(i,vl(j))
//map<int,int>mp
//余りを切り上げる =>  (a + b - 1) / b 

signed main(){
	vi v(5);
	rep(i,0,5) cin>>v[i];
	int ans=MOD;
	do{
		ll cnt=0;
		int a=0;
		rep(i,0,5){
			a+=v[i];
			if(a%10!=0 && i!=4){
				a+=10-(a%10);
			}
		}
		chmin(ans,a);
	}while(next_permutation(all(v)));
	cout<<ans<<endl;
	
	return 0;
}