//#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
//using namespace atcoder;
#define int long long
   template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
    const int MAX =3001;
const int MOD =998244353;


  
signed main(){
  int n,x,m;
  cin>>n>>x>>m;
  int k=1,s[m];fill(s,s+m,MOD*MOD);
  while(s[x]==MOD*MOD){
    s[x]=k;
    k++;
    x=x*x%m;
  }
  int ans=0;
  
  for(int i=0;i<m;i++)if(s[i]<=n)ans+=i*(1+(s[x]<=s[i])*(n-s[i])/(k-s[x]));
cout<<ans<<endl;

}
