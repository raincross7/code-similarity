#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define INF 1000000010
#define EPS 1e-9
#define fst first
#define scd second

#define debug(x) cout<<x<<endl;
#define repi(i,x,n) for(int i=x;i<n;i++)
#define rep(i,n) repi(i,0,n)
#define lp(i,n) repi(i,0,n)
#define repn(i,n) for(int i=n;i>=0;i--)
#define int long long
#define endl "\n"


signed main(){
  cin.tie(0);	
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  string s;
  rep(i,n){
    rep(j,m){
      cin>>s;
      if(s=="snuke"){
        cout<<(char)('A'+j)<<i+1<<endl;
        return 0;
      }
    }
  }
  

  return 0;
}