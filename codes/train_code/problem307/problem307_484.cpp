#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<ld,ld> pdd;
typedef vector<ll> vll;
typedef vector<ld> vld;
typedef vector<pll> vpl;

#define ALL(a) a.begin(),a.end()
#define SZ(a) ((int)a.size())
#define FI first
#define SE second
#define REP(i,n) for(int i=0;i<((int)n);i++)
#define REP1(i,n) for(int i=1;i<((int)n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define PB push_back
#define EB emplace_back
#define MP(a,b) make_pair(a,b)
#define SORT_UNIQUE(c) (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define GET_POS(c,x) (lower_bound(c.begin(),c.end(),x)-c.begin())
#define Decimal fixed<<setprecision(20)
#define INF 1000000000
#define LLINF 1000000000000000000LL

const int inf = 1e9;
const ll linf = 1LL << 50;
const double eps = 1e-10;
const int MOD = 1e9 + 7;
const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, -1, 0, 1};

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin>>s;
  ll n=s.size();
  vll dp1(n),dp2(n);
  REP(i,n){
    if(i==0){
      if(s[i]=='1'){
        dp1[i]=2;
        dp2[i]=1;
      }
      else{
        dp1[i]=1;
        dp2[i]=0;
      }
    }
    else{
      if(s[i]=='1'){
        dp1[i]=dp1[i-1]*2;
        dp2[i]=dp1[i-1]+dp2[i-1]*3;
      }
      else{
        dp1[i]=dp1[i-1];
        dp2[i]=dp2[i-1]*3;
      }

    }

    dp1[i] %=MOD;
    dp2[i] %=MOD;
  }

  ll ans=dp1[n-1]+dp2[n-1];
  ans%=MOD;
  cout<<ans<<endl;
}

