// see https://github.com/LumaKernel/vimfiles/tree/master/snippets/cp-cpp/temp.snip
/// --- .lumrc Template {{{ ///
#if 0
#define assert(...)
#endif
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using P = tuple<ll, ll>;
using P3 = tuple<ll, ll, ll>;
using VI = vector<int>;
using VL = vector<ll>;
using VVI = vector<VI>;
using VVL = vector<VL>;
using VP = vector<P>;
using VS = vector<string>;

#define omajinai ios::sync_with_stdio(false);cin.tie(0)

#define FOR(i,a,b) for(int i=int(a);i<int(b);++i)
#define FORI(i,a,b) for(int i=int(a);i<=int(b);++i)
#define REP(i,n) FOR(i,0,n)
#define REPI(i,n) FORI(i,0,n)
#define RFOR(i,a,b) for(int i=int(b)-1;i>=int(a);--i)
#define RFORI(i,a,b) for(int i=int(b);i>=int(a);--i)
#define RREP(i,n) RFOR(i,0,n)
#define RREPI(i,n) RFORI(i,0,n)

#define ALL(a) (a).begin(),(a).end()
#define UNIQUE(a) (a).erase(unique(ALL(a)),(a).end())
#define PB push_back
#define EACH(i,c) REP(i,(c).size())
#define REACH(i,c) RREP(i,(c).size())
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort(ALL(c))

#define BR cout<<"\n";

#ifdef DEBUG
#define dump(...) cerr<<"["<<__LINE__<< "] "<<#__VA_ARGS__<<" = "<<make_tuple(__VA_ARGS__)<<"\n";
#else
#define dump(...)
#endif

#define YES(x) cout<<((x)?"YES":"NO")<<"\n";
#define Yes(x) cout<<((x)?"Yes":"No")<<"\n";
#define yes(x) cout<<((x)?"yes":"no")<<"\n";

inline int omajinai_int_in(){omajinai;int n;cin>>n;return n;}
inline ll omajinai_ll_in(){omajinai;ll n;cin>>n;return n;}
inline string omajinai_string_in(){omajinai;string n;cin>>n;return n;}
inline int int_in(){int n;cin>>n;return n;}
inline ll ll_in(){ll n;cin>>n;return n;}
inline string string_in(){string n;cin>>n;return n;}
#define oini omajinai_int_in()
#define oinl omajinai_ll_in()
#define oins omajinai_string_in()
#define ini int_in()
#define inl ll_in()
#define ins string_in()

#define isInside(y,x) (0<=(y)&&(y)<h&&0<=(x)&&(x)<w)

#define fi(x) (get<0>(x))
#define se(x) (get<1>(x))
#define th(x) (get<2>(x))
#define fo(x) (get<3>(x))
#define fif(x) (get<4>(x))

template <typename T> ostream &operator<<(ostream &o, const vector<T> &v) { o << '{'; EACH(i, v) o << v[i] << (i != v.size()-1 ? ", " : ""); o << "}";  return o; }

template<int n, class...T> typename enable_if<(n>=sizeof...(T))>::type _ot(ostream &, tuple<T...> const &){}
template<int n, class...T> typename enable_if<(n< sizeof...(T))>::type _ot(ostream & os, tuple<T...> const & t){ os << (n==0?"":", ") << get<n>(t); _ot<n+1>(os, t); }
template<class...T> ostream & operator<<(ostream & os, tuple<T...> const & t){ _ot<0>(os, t); return os; }

template <typename T> inline void smax(T &a, T b) { a = a > b ? a : b; }
template <typename T> inline void smin(T &a, T b) { a = a < b ? a : b; }

constexpr double PI = acos(-1);

/// }}}--- ///

constexpr int INF = 1e9+1;
constexpr ll LINF = 1e18+1;
constexpr int MOD = 1e9+7;

constexpr ll M = 1e16 + 1e3;
int main() {
  ll k=inl;
  ll n=k/50;
  ll m=k%50;
  VL a(50, n + 49);
  REP(i, m) a[i] += 50-(m-1);
  FOR(i, m, 50) a[i]-=m;
  cout << 50 << endl;
  EACH(i, a) {
    cout << a[i] << (i==int(a.size()-1) ? "\n" : " ");
  }
}

//
