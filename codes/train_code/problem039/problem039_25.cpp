#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define REP(i,n) for(int i=0;i<n;i++)
#define REPP(i,n) for(int i=1;i<=n;i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define EPS (1e-9)
#define INF (1e17)
#define PI (acos(-1))
//const double PI = acos(-1);
//const double EPS = 1e-15;
//long long INF=(long long)1E17;
#define i_7 (long long)(1e9+7)
//#define i_7 998'244'353
long mod(long a){
    long long c=a%i_7;
    if(c>=0)return c;
    return c+i_7;
}
using namespace std;

bool prime_(int n){
  if(n==1){
    return false;
  }else if(n==2){
    return true;
  }else{
    for(int i=2;i<=sqrt(n);i++){
      if(n%i==0){
        return false;
      }
    }
    return true;
  }
}

long long gcd_(long long a, long long b){
  if(a<b){
    swap(a,b);
  }
  if(a%b==0){
    return b;
  }else{
    return gcd_(b,a%b);
  }
}
 
long long lcm_(long long x, long long y){
  return (x/gcd_(x,y))*y;
}


int main(){
  
  int n,k;
  cin>>n>>k;
  long long h[n];
  REP(i,n){
    cin>>h[i];
  }
  //iは残す。0~iまででj個残す。
  vector<vector<long long>> dp(n, vector<long long>(n+1, INF));
  REP(i,n){
    REP(j,n+1){
      if(j == 0){
        continue;
      }
      if(j == 1){
        dp[i][j] = h[i];
        continue;
      }
      REP(r,i){
        dp[i][j] = min(dp[i][j], dp[r][j-1] + max(h[i]-h[r], 0LL));
      }
    }
  }
  long long ans = INF;
  if(k>=n){
    cout<<0<<endl;
    return 0;
  }
  REP(i,n){
    for(int j = n; j>=n-k; j--){
      ans = min(ans, dp[i][j]);
    }
  }
  cout<<ans<<endl;
  return 0; 
}
