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
const ll MOD = 1000000007;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//(a+b-1)/b
//priority_queue<ll, vector<ll>, greater<ll>> q;

signed main(){
	int n; cin>>n;
	char memo;
	bool ok=true;
	map<string,int> mp;
	rep(i,0,n){
		string s; cin>>s;
		if(mp[s])ok=0;
		if(i!=0)if(s[0]!=memo)ok=0;
		mp[s]++;
		memo=s[s.size()-1];
	}
	cout<<(ok ? "Yes":"No")<<endl;

	return 0;
}