#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int i=0,i##_max=(N);i<i##_max;++i)
#define repp(i,l,r) for(int i=(l),i##_max=(r);i<i##_max;++i)
#define per(i,N) for(int i=(N)-1;i>=0;--i)
#define perr(i,l,r) for(int i=r-1,i##_min(l);i>=i##_min;--i)
#define all(arr) (arr).begin(), (arr).end()
#define SP << " " <<
#define SPF << " "
#define SPEEDUP cin.tie(0);ios::sync_with_stdio(false);
#define MAX_I INT_MAX //1e9
#define MIN_I INT_MIN //-1e9
#define MAX_UI UINT_MAX //1e9
#define MAX_LL LLONG_MAX //1e18
#define MIN_LL LLONG_MIN //-1e18
#define MAX_ULL ULLONG_MAX //1e19
  typedef long long ll;
  typedef pair<int,int> PII;
  typedef pair<char,char> PCC;
  typedef pair<ll,ll> PLL;
  typedef pair<char,int> PCI;
  typedef pair<int,char> PIC;
  typedef pair<ll,int> PLI;
  typedef pair<int,ll> PIL; 
  typedef pair<ll,char> PLC; 
  typedef pair<char,ll> PCL; 

inline void YesNo(bool b){ cout << (b?"Yes" : "No") << endl;}
inline void YESNO(bool b){ cout << (b?"YES" : "NO") << endl;}
inline void Yay(bool b){ cout << (b?"Yay!" : ":(") << endl;}

const ll INF = 1e15;
int main(void){
  SPEEDUP
  cout << setprecision(15);
  int N,K;cin >> N >> K;
  vector<ll> v(N+1,0);
  rep(i,N)cin >> v[i+1];
  ll dp[N+1][N+1];
  rep(y,N+1) dp[0][y] = INF;
  rep(x,N+1) dp[x][0] = INF;
  dp[0][0] = 0;

  rep(y,N-K){
    rep(x,N){
      dp[x+1][y+1] = INF;
      if(x<y)continue;
      rep(i,x+1) dp[x+1][y+1] = min(dp[x+1][y+1], dp[i][y] + max(0ll,v[x+1]-v[i]) );
    }
  }
  /*
  rep(y,N-K+1){
    rep(x,N+1) cout << dp[x][y] SPF;
    cout << endl;
  }
  */
  ll ans = INF;
  rep(x,N+1) ans = min(ans,dp[x][N-K]);
  cout << ans << endl;
  return 0;
}
