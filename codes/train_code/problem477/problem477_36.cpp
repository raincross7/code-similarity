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
//(a+b-1)/b

signed main(){
	ll a,b,c,d; cin>>a>>b>>c>>d;
	--a;
	ll m=gcd(c,d);
	m=c*d/m;
	ll k=a/c+a/d-(a/(m));
	a-=k;
	ll l=b/c+b/d-(b/(m));
	b-=l;
	//cout<<"k:"<<k<<" l: "<<l<<endl;
	//cout<<a<<" "<<b<<endl;
	cout<<b-a<<endl;
	
	
	return 0;
}