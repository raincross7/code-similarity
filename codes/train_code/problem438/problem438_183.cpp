#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
typedef long double ld;
const int inf=1e9+7;
const ll longinf=1LL<<60;
#define REP(i,m,n) for(int i=(int)(m) ; i < (int) (n) ; ++i )
#define rep(i,n) REP(i,0,n)
#define F first
#define S second
 
const int mx=200010;
const ll mod=1e9+7;



int main(){
  ll n,k;
  cin>>n>>k;

  ll ans=0;
  ll cnt=n/k;
  ans+=pow(cnt,3LL);

  if(k%2==1){ cout<< ans <<endl; return 0; }

  cnt=(n+k/2)/k;
  ans+=pow(cnt,3LL);

  cout<< ans <<endl; return 0;
}
  
