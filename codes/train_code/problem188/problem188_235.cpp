#include <bits/stdc++.h>
using namespace std;

using VI = vector<int>;
using VVI = vector<VI>;
using PII = pair<int, int>;
using LL = long long;
using VL = vector<LL>;
using VVL = vector<VL>;
using PLL = pair<LL, LL>;
using VS = vector<string>;

#define ALL(a)  begin((a)),end((a))
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define SZ(a) int((a).size())
#define SORT(c) sort(ALL((c)))
#define RSORT(c) sort(RALL((c)))
#define UNIQ(c) (c).erase(unique(ALL((c))), end((c)))

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

#define FF first
#define SS second
template<class S, class T>
istream& operator>>(istream& is, pair<S,T>& p){
  return is >> p.FF >> p.SS;
}
template<class S, class T>
ostream& operator<<(ostream& os, const pair<S,T>& p){
  return os << p.FF << " " << p.SS;
}
template<class T>
void maxi(T& x, T y){
  if(x < y) x = y;
}
template<class T>
void mini(T& x, T y){
  if(x > y) x = y;
}


const double EPS = 1e-10;
const double PI  = acos(-1.0);
const LL MOD = 1e9+7;

int dp[1<<26];
int cnt[200010];
int opt[200010];

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  string S;
  cin >> S;
  int N = SZ(S);

  cnt[0] = 0;
  REP(i,N){
	cnt[i+1] = cnt[i] ^ (1 << (S[i]-'a'));
  }

  fill(opt, opt+200010, 1e9);
  fill(dp, dp+(1<<26), 1e9);
  dp[0] = 0;
  opt[0] = 0;
  for(int i=0;i<N;++i){
	mini(opt[i+1], dp[cnt[i+1]] + 1);
	REP(k,26){
	  mini(opt[i+1], dp[cnt[i+1] ^ (1<<k)] + 1);
	}
	mini(dp[cnt[i+1]], opt[i+1]);
  }

  cout << opt[N] << endl;

  return 0;
}
