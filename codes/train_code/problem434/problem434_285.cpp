// template version 1.14
using namespace std;
#include <bits/stdc++.h>

// varibable settings
#define int long long
const int INF=1e18;
const int MOD=1e9+7;

// define basic macro {{{
#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#define _rrep(i,n) rrepi(i,0,n)
#define rrepi(i,a,b) for(int i=(int)((b)-1);i>=(int)(a);--i)
#define rrep(...) _overload3(__VA_ARGS__,rrepi,_rrep,)(__VA_ARGS__)
#define each(i,a) for (auto&& i : a)
#define all(x) (x).begin(),(x).end()
#define sz(x) ((int)(x).size())
#define pb(a) push_back(a)
#define mp(a, b) make_pair(a, b)
#define mt(a, b, c) make_tuple(a, b, c)
#define ceil(a,b) ((a)+(b)-1)/(b)
#define is_in(x, a, b) ((a)<=(x) && (x)<(b))
#define uni(x) sort(all(x));x.erase(unique(all(x)),x.end())
#define ub upper_bound
#define lb lower_bound
#define posl(A, x) (lower_bound(all(A), x)-A.begin())
#define posu(A, x) (upper_bound(all(A),x)-A.begin())
template<class T> inline void chmax(T &a, const T &b) { if((a) < (b)) (a) = (b); }
template<class T> inline void chmin(T &a, const T &b) { if((a) > (b)) (a) = (b); }

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long double ld;
typedef pair<int,int> pii;
typedef tuple<int,int,int> iii;

template<typename T> using PQ = priority_queue<T, vector<T>, greater<T>>;
struct Fast { Fast(){ std::cin.tie(0); ios::sync_with_stdio(false); } } fast;

#if defined(PCM) || defined(LOCAL)
  #include "lib/dump.hpp"
#else
  #define dump(...) 42
  #define dump_1d(...) 42
  #define dump_2d(...) 42
#endif
//}}}

signed main() {
  int n;cin>>n;
  vector<int> a(n);
  vi cnt(n+1);
  rep(i, n) {
    cin>>a[i];
    cnt[a[i]]++;
  }
  sort(all(a));
  dump(a);
  int M = a[n-1];
  dump(M);

  int x = ceil(M, 2);
  int even = (M%2==0?1:0);
  rep(i, n){
    if (a[i]<x){
      cout << "Impossible" << endl;
      return 0;
    }
  }
  //すべての要素がx+1
  if (even){
    if (cnt[x]==1){
    }
    else{
      cout << "Impossible" << endl;
      return 0;
    }
  }
  else{
    if (cnt[x]==2){
    }
    else{
      cout << "Impossible" << endl;
      return 0;
    }
  }
  rep(i, x+1, M+1){
    if (cnt[i]<2){
      cout << "Impossible" << endl;
      return 0;
    }
  }
  cout << "Possible" << endl;

  return 0;
}
