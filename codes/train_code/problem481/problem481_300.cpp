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
	string s; cin>>s;
  int n=s.size();
  string a,b;
  rep(i,1,n+1){
    if(i%2==0){
      a.push_back('0');
      b.push_back('1');
    }
    else{
      a.push_back('1');
      b.push_back('0');
    }
  }
  int ans=0;
  int ans2=0;
  rep(i,0,n){
    if(s[i]!=a[i])ans++;
    if(s[i]!=b[i])ans2++;
  }
  cout<<min(ans,ans2)<<endl;

  
	
	
	return 0;
}