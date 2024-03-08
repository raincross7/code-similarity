bool DBG = false;
// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
// #pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_dec_float.hpp>
//#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using ll = long long;
using ld = long double;
//using i128 = __int128_t;
//using bint = boost::multiprecision::cpp_int
//using d1024 = boost::multiprecision::number<mp::cpp_dec_float<1024>>;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define IFOR(i,a,b) for(int i=((b)-1);i>=(a);--i)
#define RPT(i,a,b) for(int i=(a);i<((a)+(b));++i)
#define IRPT(i,a,b) for(int i=((a)+(b)-1);i>=(a);--i)
#define ALL(x) x.begin(),x.end()
#define RALL(x) x.rbegin(),x.rend()
#define fs first
#define sd second
#define couts(x) cout << (x) << (" ")
#define coutn(x) cout << (x) << ("\n")
#define ncouts(x) numout(x),outst[outst_N++] = ' '
#define ncoutn(x) numout(x),outst[outst_N++] = '\n'
#define scouts(x) strout(x),outst[outst_N++] = ' '
#define scoutn(x) strout(x),outst[outst_N++] = '\n'
#define dcouts(x) if(DBG) couts(x)
#define dcoutn(x) if(DBG) coutn(x)
#define endl "\n"
#define psb push_back
#define ppb pop_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound
#define LBIT(x,a) (((x)>>(a))&1LL)
#define IBIT(x,a) (((x)>>(a))&1)
#define BCOUNT(x) (__builtin_popcount(x))
template<typename T> std::istream &operator>>(std::istream &is, std::vector<T> &vec){ for (auto &v : vec) is >> v; return is; }
template<typename T1, typename T2> std::istream &operator>>(std::istream &is, std::pair<T1,T2> &p){is >> p.first >> p.second; return is; }
template<typename T> std::ostream &operator<<(std::ostream &os, const std::vector<T> &vec){ os << "["; for (auto v : vec) os << v << ","; os << "]"; return os; }
template<typename T> std::ostream &operator<<(std::ostream &os, const std::deque<T> &vec){ os << "deque["; for (auto v : vec) os << v << ","; os << "]"; return os; }
template<typename T> std::ostream &operator<<(std::ostream &os, const std::set<T> &vec){ os << "{"; for (auto v : vec) os << v << ","; os << "}"; return os; }
template<typename T> std::ostream &operator<<(std::ostream &os, const std::unordered_set<T> &vec){ os << "{"; for (auto v : vec) os << v << ","; os << "}"; return os; }
template<typename T> std::ostream &operator<<(std::ostream &os, const std::multiset<T> &vec){ os << "{"; for (auto v : vec) os << v << ","; os << "}"; return os; }
template<typename T> std::ostream &operator<<(std::ostream &os, const std::unordered_multiset<T> &vec){ os << "{"; for (auto v : vec) os << v << ","; os << "}"; return os; }
template<typename T1, typename T2> std::ostream &operator<<(std::ostream &os, const std::pair<T1, T2> &pa){ os << "(" << pa.first << "," << pa.second << ")"; return os; }
template<typename TK, typename TV> std::ostream &operator<<(std::ostream &os, const std::map<TK, TV> &mp){ os << "{"; for (auto v : mp) os << v.first << "=>" << v.second << ","; os << "}"; return os; }
template<typename TK, typename TV> std::ostream &operator<<(std::ostream &os, const std::unordered_map<TK, TV> &mp){ os << "{"; for (auto v : mp) os << v.first << "=>" << v.second << ","; os << "}"; return os; }

template<class T> using V = vector<T>;
template<class T> using V2 = V<V<T>>;
template<class T> using V3 = V<V2<T>>;
template<class T> using V4 = V<V3<T>>;


char outst[20'000'000]; int outst_N = 0;
char outst_tmp[200];
template<class NUM >
void numout(NUM n){
  if(n<0) { n*=-1; outst[outst_N++] = '-';}
  if(n==0){ outst[outst_N++] = '0'; return;}
  int cnt = 0;
  while(n>0){
    outst_tmp[cnt++] = '0' + (n % 10);
    n /= 10;
  }
  IFOR(i,0,cnt){
    outst[outst_N++] = outst_tmp[i];
  }
}
void strout(std::string s){
  for(auto x: s){
    outst[outst_N++] = x;
  }
}

constexpr ll LINF = 1LL << 60;
constexpr int IINF = 1 << 28;
constexpr ll mod =  998244353;




void solve(){
  int n, m; cin >> n >> m;
  V< int > cost = {2,5,5,4,5,6,3,7,6};
  FOR(i,0,9) cost[i] += IINF;
  FOR(i,0,m){int a; cin >> a; --a; cost[a] -= IINF;}
  map< int, int > mp;
  FOR(i,0,9){ if(cost[i]<IINF) mp[cost[i]] = max( mp[cost[i]] , i+1); }
  //coutn( mp );
  V< int > degit(n+100,-IINF), degit2(n+100,IINF-IINF); degit[0] = 0;
  FOR(i,0,n+1){
    for(auto x: mp){
      if(x.sd == 0 ) continue;
      if( degit[i+x.fs] < degit[i] + 1 || ( degit[i+x.fs]==degit[i]+1 && degit2[i+x.fs]<x.sd  )  ){
        degit[i+x.fs] = max(degit[i+x.fs], degit[i] + 1 );
        degit2[i+x.fs] = x.sd;
      }
      
    }
  }
  //FOR(i,0,n+1) couts( degit[i] ); coutn("");
  //FOR(i,0,n+1) couts( degit2[i] ); coutn("");coutn("");
  int nd = n; string so;
  while(nd > 0){
    so += '0'+degit2[nd];
    nd -= cost[ degit2[nd] - 1 ];
    if(cost[ degit2[nd] - 1 ]==0) break;
  }
  coutn(so);
  
}






int main(void){
  //std::cout << std::fixed << std::setprecision(20);
  cin.tie(0);
  //ios::sync_with_stdio(false);
  solve();
  printf("%s", outst);
  return 0;
}



