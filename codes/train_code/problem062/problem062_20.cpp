#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i ,n) for(int i = 0 ; i < (n) ; i ++ )
#define mp(x,y) make_pair(x,y)
#define all(x) (x).begin(),(x).end()
using namespace std;
using ll = long long;
using vin=vector<int>;
using P = pair<int, int>;
const int inf=1e9+7;
const ll INF=1e18;

int main() {
  ll n,k,s;
  cin>>n>>k>>s;
  ///////
  vector<ll> ans(n,s+1);
  rep(i,k){
    ans[i]=s;
    
  }
  if(s==1e9){
     
    ans.assign(n,1);
    rep(i,k){
     ans[i]=s; 
    }
      
    
    
    
    
    

  }
  rep(i,n){
   cout<<ans[i]<<" "; 
  }
}