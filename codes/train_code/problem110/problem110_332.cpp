#include <bits/stdc++.h>
using namespace std;
#define itn int
#define nibu(K,x) binary_search(K.begin(),K.end(),x)
#define rep(i,n) for(int i=0;i<n;i++)
#define all(x) x.begin(),x.end()
#define sz(x) x.size()
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define out(x) cout<<x<<endl
#define put(x) out(x)
#define in(x) cin>>x
#define maxx(a,b,c) max(a,max(b,c))
#define minn(a,b,c) min(a,min(b,c))
using ll = long long;
using vl = vector<ll>;
using vs = vector<string>;
const double pi = 3.14159265358979;
const ll mod = 1000000007;

int main() {
 int N,M,K;
  in(N>>M>>K);
  if(K%N==0||K%M==0){
out("Yes");
   return 0; 
  }
  bool f =false;
  for(int i=1;i<=N;i++){
    for(int j=1;j<=M;j++){
   if(K==M*i+j*(N-i*2)) f = true;
  }
  }
  if(f) out("Yes");
  else out("No");
}
  