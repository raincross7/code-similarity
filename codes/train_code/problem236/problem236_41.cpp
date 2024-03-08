#include <bits/stdc++.h>

//Common
using namespace std;using f64 = double;using i64=long long;using u64=unsigned long long;
template<typename T> using Arr=vector<T>;template<typename T> using Func=function<T>;template<typename T> using Str=basic_string<T>;
#define hfor(v, s, e) for(int v=(s);(s)<=v&&v<(e);++v)//half-opened range
#define hfori(v, s, e) for(int v=(e)-1;(s)<=v&&v<(e);--v)//inversion
#define hforo(v, s, e) int v=(s);for(;(s)<=v&&v<(e);++v)//out declaration
#define hforoi(v, s, e) int v=(e)-1; for(;(s)<=v&&v<(e);--v)
#define cfor(v, s, e) hfor(v,(s),(e)+1)//closed range
#define cfori(v, s, e) hfori(v,(s),(e)+1)
#define cforo(v, s, e) hforo(v,(s),(e)+1)
#define cforoi(v, s, e) hforoi(v,(s),(e)+1)
#define rep(v,x) hfor(v,0,(x))
#define repi(v,x) hfori(v,0,(x))
#define repo(v,x) hforo(v,0,(x))
#define all(x) (x).begin(),(x).end()
#define pushb push_back
#define pushf push_front
#define popb pop_back
#define popf pop_front
#define empl emplace
#define emplb emplace_back
#define emplf emplace_front
#define fi first
#define se second
#define cxp constexpr
#define PQ std::priority_queue

//Math
template<typename T> cxp T inf() { return numeric_limits<T>::max() / 2; }
template<typename T> inline T sq(T x){return x*x;}
cxp int lgc(int x){return 64-__builtin_clzll(x-1);}
cxp int lgf(int x){return 63-__builtin_clzll(x);}
int rd(int lb, int ub){static mt19937 rng(time(0)^i64(new int)); return uniform_int_distribution<int>(lb, ub-1)(rng);}
int rd(int ub=inf<int>()){return rd(0,ub);}
const f64 pi=acosl(-1), eps=1e-10;

//IO
template<typename T>ostream& operator<<(ostream& s, const Arr<T>& a) {for(auto i:a) cout<<i<<' '; return s;}
int getint(){int x;cin>>x;return x;}
char getchr(){char x;cin>>x;return x;}
#ifndef DEBUG
	//#pragma GCC optimize ("Ofast") //somtimes it become more slower
	auto __PRE_RUN__=(ios::sync_with_stdio(0), cin.tie(0), cout.tie(0),(cout<<fixed<<setprecision(11)), 0);
#endif

//Misc
int sz(const auto& x){return x.size();}
auto split(auto s, auto p){
	Arr<decltype(s)> ret;
	auto it1=s.begin();
	for(auto it2=it1; (it2 = find(it1,s.end(),p)) != s.end(); it1=it2+1)
		ret.pushb({it1, it2});
	ret.pushb({it1,s.end()});
	return ret;
}
template<typename T> T rev(const T& a){return {a.rbegin(),a.rend()};}
Arr<int> range(int n){ Arr<int> ret(n); rep(i,n)ret[i]=i; return ret; }
struct defer{ defer(auto f):f(f){} ~defer(){f();} function<void()> f; };
#define defer(x) auto _##__COUNTER__ = defer([&](){x;});
#define lam(expr, ...) [&](__VA_ARGS__){return expr;}
#define reduce accumulate

#define endl '\n'//not interactive?
#define int i64//MLE?
using pint = pair<int,int>;
using tint = tuple<int,int,int>;

int len(int n){
	if(!n) return 1;
	return len(n-1)*2+3;
}
int p(int n){
	if(!n) return 1;
	return p(n-1)*2+1;
}

int f(int n, int k){
	if(k<=0) return 0;
	if(!n) return 1;
	if(len(n-1)+1>=k)
		return f(n-1,k-1);
	return p(n-1)+f(n-1,k-1-len(n-1)-1)+1;
}

signed main(){
	int n,k; cin>>n>>k;
	cout<<f(n,k)<<endl;
	return 0;
}

