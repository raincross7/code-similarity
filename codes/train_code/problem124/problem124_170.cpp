bool DBG = false;
//#pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_dec_float.hpp>
//#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using ll = long long;
using ld = long double;
//using i128 = __int128_t;
//using bint = boost::multiprecision::cpp_int;
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
//#define ncouts(x) numout(x),outst[outst_N++] = ' '
//#define ncoutn(x) numout(x),outst[outst_N++] = '\n'
//#define scouts(x) strout(x),outst[outst_N++] = ' '
//#define scoutn(x) strout(x),outst[outst_N++] = '\n'
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
#define sorta(x) sort(ALL(x))
#define sortra(x) sort(RALL(x))
#define revall(x) reverse(ALL(x))
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
/*
std::ostream &operator<<(std::ostream &os, const i128 nu){
  i128 co = nu;
  if(co==0){cout << '0';}
  else{
    string ous; if(co<0){cout<<'-'; co*=-1;}
    while(co){
      ous += (co%10)+'0';
      co /= 10;
    }
    reverse(ALL(ous));
    cout<<ous;
  }
  return os;
}
std::istream &operator>>(std::istream &is, i128 &nu){ string cs; cin >> cs; nu=0;int mn=1; for(auto &x:cs) { if(x!='-'){nu*=10;nu+=(x-'0');} else mn *= -1;} nu *= mn;  return is; }

*/


template<class T> using V = vector<T>;
template<class T> using V2 = V<V<T>>;
template<class T> using V3 = V<V2<T>>;
template<class T> using V4 = V<V3<T>>;


constexpr ll LINF = 1LL << 60;
constexpr int IINF = 1 << 28;
constexpr ll mod =  1'000'000'007;
//constexpr ll mod = 998244353;

constexpr ld eps = 1e-8;

void solve(){
  int n; cin >> n;
  V<ll> ts(n+3), vs(n+3), tl(n+3), tr(n+3);
  FOR(i,0,n) cin >> ts[i+1];
  FOR(i,0,n) cin >> vs[i+1];
  FOR(i,0,n+2){
    tr[i] = tl[i]+ts[i];
    tl[i+1] = tr[i];
  }
  tl[0] = 0; tr[0] = 0;
  tr[n+1] = tl[n+1] + 100;
  auto f = [&](int tmain, int tsub)->ld{
    ld t = tsub;
    (t /= 2) += tmain;
    ld vret = LINF;
    FOR(i,0,n+2){
      if( t<=tl[i] ){
        vret = min<ld>(vret, -t+vs[i]+tl[i]);
      }
      else if(t>=tr[i] ){
        vret = min<ld>(vret, t+vs[i]-tr[i]);
      }
      else{
        vret = min<ld>(vret, vs[i] );
      }
    }
    return vret;
  };
  ld ans = 0;
  V<ld> vvv(tl[n+1]*2+20);
  FOR(i,0,tl[n+1]+2){
    FOR(j,0,2){
      vvv[2*i+j] = f(i,j);
    }
  }
  FOR(i,0,tl[n+1]*2){
    ans += (vvv[i]+vvv[i+1]);
  }
  ans /= 4;
  cout<<ans;
}



int main(void){
  std::cout << std::fixed << std::setprecision(20);
  cin.tie(0);
  ios::sync_with_stdio(false);
  solve();
  //printf("%s", outst);
  return 0;
}
