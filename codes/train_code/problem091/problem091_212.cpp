// template version 1.6
// {{{ define basic macro
using namespace std;
#include <iostream>
#include <bits/stdc++.h>
// varibable settings
#define int long long
#define INF 1000000000000000000LL
// #define INF 2147483647
#define MOD 1000000007LL
// #define MOD 998244353LL
#define infile "../test/sample-1.in"

#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#define _rrep(i,n) rrepi(i,0,n)
#define rrepi(i,a,b) for(int i=(int)(b-1);i>=(int)(a);--i)
#define rrep(...) _overload3(__VA_ARGS__,rrepi,_rrep,)(__VA_ARGS__)
#define all(x) (x).begin(),(x).end()
#define sz(x) ((int)(x).size())
#define pb(a) push_back(a)
#define mp(a, b) make_pair(a, b)
#define uni(x) sort(all(x));x.erase(unique(all(x)),x.end())
#define ten(n) ((int)1e##n)
template<class T, size_t N> size_t sza(const T (&array)[N]) { return N; }
template<class T> inline void chmax(T &a, const T &b) { if(a < b) a = b; }
template<class T> inline void chmin(T &a, const T &b) { if(a > b) a = b; }
template<class T=int> T in() {T x; cin>>x; return (x);}
struct Fast { Fast(){ std::cin.tie(0); ios::sync_with_stdio(false); } } fast;

// dump macro
#ifdef PCM
  #include "dump.hpp"
#else
  #define dump(...) 42
  #define dump_1d(...) 42
  #define dump_2d(...) 42
#endif

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long double ld;
typedef pair<int,int> pii;
typedef tuple<int,int,int> iii;
template<typename T> using PQ = priority_queue<T, vector<T>, greater<T>>;
int dx[]={1, -1, 0, 0};
int dy[]={0, 0, 1, -1};
#define fi first
#define se second

// }}}

using POS = int;
using COST = int;
using EDGES = map<POS, vector<pair<POS, COST>>>;

PQ<pair<COST, POS>> q;
map<POS, COST> d;
EDGES es;
int k;

void add_edge(POS from, POS to, COST cost){
  es[from].emplace_back(mp(to, cost));
}

void init_d(){
}

void init_es(){
  rep(i, k){
    es[i].pb(mp((i+1)%k, 1));
    es[i].pb(mp((i*10)%k, 0));
  }
}

int solve(){
  cin>>k;

  init_es();
  init_d();

  q.push(mp(1LL, 1LL));
  while (!q.empty()){
    // 取り出し
    auto cp = q.top(); q.pop();
    auto cost = cp.first;
    auto pos = cp.second;

    if (d.find(pos)==d.end() || cost < d[pos]) {
      d[pos] = cost;
      for (const auto &e:es[pos]){
        auto npos = e.fi;
        auto ncost = cost + e.se;
        q.push(mp(ncost, npos));
      }
    }
  }
  // dump(d);
  // dump(es);
  cout << d[0] << endl;

  return 0;
}

signed main() { //{{{
#ifdef INPUT_FROM_FILE
  std::ifstream in(infile);
  std::cin.rdbuf(in.rdbuf());
#endif
  solve();
  return 0;
} //}}}
