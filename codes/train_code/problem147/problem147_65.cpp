#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<cstdio>
#include<tuple>
#include<bitset>

using namespace std;
//#define int long long
#define rep(i,n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define ALL(x) x.begin(),x.end()
#define ll long long
const int inf=1000000007;
const int MOD=1000000007;
signed main(){
  int a,b;
  cin>>a>>b;
  if(a+b==15)cout<<'+'<<endl;
  else if(a*b==15)cout<<'*'<<endl;
  else cout<<'x'<<endl;
  return 0;
}
