#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<string>
#include<sstream>
#include<cmath>
#include<climits>
#include<algorithm>
#include<bitset>
#include<set>
#include<stack>
#include<queue>
#include<iomanip>
#include<memory.h>
#include<complex>
using namespace std;  
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef tuple<int,int> tii;
#define rep(i,n) for(ll i=0;i<(n);i++)  
#define pb push_back
#define mt make_tuple
#define ALL(a) (a).begin(),(a).end()
#define FST first
#define SEC second  
const int INF = (INT_MAX/2);
const ll LLINF = (LLONG_MAX/2);
const double eps = 1e-5;
const double PI = M_PI;  
#define DEB cerr<<"!"<<endl
#define SHOW(a,b) cerr<<(a)<<" "<<(b)<<endl
#define SHOWARRAY(ar,i,j) REP(a,i)REP(b,j)cerr<<ar[a][b]<<((b==j-1)?((a==i-1)?("\n\n"):("\n")):(" "))
#define DIV int(1e9+7)
inline ll pow(ll x,ll n,ll m){ll r=1;while(n>0){if((n&1)==1)r=r*x%m;x=x*x%m;n>>=1;}return r%m;}
 
/* Coding Space*/

int opt[1 << 26] = {}; // dp[hash] = min
int dp[200001] = {}; // dp[i] = can sparate ans[i] area.

int main(){
  string s; cin >> s;
  fill_n(opt,1<<26,INF);
  fill_n(dp,200001,INF);
  dp[0] = opt[0] = 0;
  int d = 0;
  rep(i,s.size()){
    d ^= 1<<(s[i] - 'a');
    rep(j,26)
      dp[i+1] = min(dp[i+1],opt[d^(1<<j)]+1);
    dp[i+1] = min(dp[i+1],opt[d]+1);
    opt[d] = min(opt[d],dp[i+1]);
  }
  
  cout << dp[s.size()] << endl;
  
  return 0;
}