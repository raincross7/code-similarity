// need
#include <iostream>
#include <algorithm>

// data structure
#include <bitset>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
//#include <array>
//#include <unordered_map>
//#include <complex>
//#include <deque>
#include <valarray>

// stream
//#include <istream>
//#include <sstream>
//#include <ostream>
#include <fstream>

// etc
#include <cassert>
#include <cmath>
#include <functional>
#include <iomanip>
#include <chrono>
#include <random>
#include <numeric>

// input
#define INIT std::ios::sync_with_stdio(false);std::cin.tie(0);
#define VAR(type, ...)type __VA_ARGS__;MACRO_VAR_Scan(__VA_ARGS__);
template<typename T> void MACRO_VAR_Scan(T& t) { std::cin >> t; }
template<typename First, typename...Rest>void MACRO_VAR_Scan(First& first, Rest&...rest) { std::cin >> first; MACRO_VAR_Scan(rest...); }
#define VEC_ROW(type, n, ...)std::vector<type> __VA_ARGS__;MACRO_VEC_ROW_Init(n, __VA_ARGS__); for(int i=0; i<n; ++i){MACRO_VEC_ROW_Scan(i, __VA_ARGS__);}
template<typename T> void MACRO_VEC_ROW_Init(int n, T& t) { t.resize(n); }
template<typename First, typename...Rest>void MACRO_VEC_ROW_Init(int n, First& first, Rest&...rest) { first.resize(n); MACRO_VEC_ROW_Init(n, rest...); }
template<typename T> void MACRO_VEC_ROW_Scan(int p, T& t) { std::cin >> t[p]; }
template<typename First, typename...Rest>void MACRO_VEC_ROW_Scan(int p, First& first, Rest&...rest) { std::cin >> first[p]; MACRO_VEC_ROW_Scan(p, rest...); }
#define VEC(type, c, n) std::vector<type> c(n);for(auto& i:c)std::cin>>i;
#define MAT(type, c, m, n) std::vector<std::vector<type>> c(m, std::vector<type>(n));for(auto& r:c)for(auto& i:r)std::cin>>i;

// output
#define OUT(d) std::cout<<d;
#define FOUT(n, d) std::cout<<std::fixed<<std::setprecision(n)<<d;
#define SOUT(n, c, d) std::cout<<std::setw(n)<<std::setfill(c)<<d;
#define SP std::cout<<" ";
#define TAB std::cout<<"\t";
#define BR std::cout<<"\n";
#define SPBR(i, n) std::cout<<(i + 1 == n ? '\n' : ' ');
#define ENDL std::cout<<std::endl;
#define FLUSH std::cout<<std::flush;
#define SHOW(d) {std::cerr << #d << "\t:" << d << "\n";}
#define SHOWVECTOR(v) {std::cerr << #v << "\t:";for(const auto& xxx : v){std::cerr << xxx << " ";}std::cerr << "\n";}
#define SHOWVECTOR2(v) {std::cerr << #v << "\t:\n";for(const auto& xxx : v){for(const auto& yyy : xxx){std::cerr << yyy << " ";}std::cerr << "\n";}}
#define SHOWQUEUE(a) {auto tmp(a);std::cerr << #a << "\t:";while(!tmp.empty()){std::cerr << tmp.front() << " ";tmp.pop();}std::cerr << "\n";}

// utility
#define ALL(a) (a).begin(),(a).end()
#define FOR(i, a, b) for(int i=(a);i<(b);++i)
#define RFOR(i, a, b) for(int i=(b)-1;i>=(a);--i)
#define REP(i, n) for(int i=0;i<int(n);++i)
#define RREP(i, n) for(int i=int(n)-1;i>=0;--i)
#define FORLL(i, a, b) for(ll i=ll(a);i<ll(b);++i)
#define RFORLL(i, a, b) for(ll i=ll(b)-1;i>=ll(a);--i)
#define REPLL(i, n) for(ll i=0;i<ll(n);++i)
#define RREPLL(i, n) for(ll i=ll(n)-1;i>=0;--i)
#define IN(a, x, b) (a<=x && x<b)
template<typename T> inline T CHMAX(T& a, const T b) { return a = (a < b) ? b : a; }
template<typename T> inline T CHMIN(T& a, const T b) { return a = (a > b) ? b : a; }
#define EXCEPTION(msg) throw std::string("Exception : " msg " [ in ") + __func__ + " : " + std::to_string(__LINE__) + " lines ]"
#define TRY(cond, msg) try {if (cond) EXCEPTION(msg);}catch (std::string s) {std::cerr << s << std::endl;}
void CHECKTIME(std::function<void()> f) { auto start = std::chrono::system_clock::now(); f(); auto end = std::chrono::system_clock::now(); auto res = std::chrono::duration_cast<std::chrono::nanoseconds>((end - start)).count(); std::cerr << "[Time:" << res << "ns  (" << res / (1.0e9) << "s)]\n"; }

// test
template<class T> std::vector<std::vector<T>> VV(int n) {
	return std::vector<std::vector<T>>(n);
}
template<class T> std::vector<std::vector<T>> VV(int n, int m, T init = T()) {
	return std::vector<std::vector<T>>(n, std::vector<T>(m, init));
}
template<typename S, typename T>
std::ostream& operator<<(std::ostream& os, std::pair<S, T> p) {
	os << "(" << p.first << ", " << p.second << ")"; return os;
}

// type/const

//#define int ll
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using PAIR = std::pair<int, int>;
using PAIRLL = std::pair<ll, ll>;
constexpr int INFINT = 1 << 30;                          // 1.07x10^ 9
constexpr int INFINT_LIM = (1LL << 31) - 1;              // 2.15x10^ 9
constexpr ll INFLL = 1LL << 60;                          // 1.15x10^18
constexpr ll INFLL_LIM = (1LL << 62) - 1 + (1LL << 62);  // 9.22x10^18
constexpr double EPS = 1e-9;
constexpr int MOD = 1000000007;
constexpr double PI = 3.141592653589793238462643383279;

int dp[1 << 26];

signed main() {
	INIT;
	VAR(std::string, s);
	REP(i, 1 << 26) dp[i] = INFINT;
	dp[0] = 0;
	int now = 0;
	REP(i, s.size()) {
		now ^= 1 << (s[i] - 'a');
		REP(j, 26) {
			CHMIN(dp[now], dp[now ^ (1 << j)] + 1);
		}
	}
	OUT(std::max(1, dp[now]))BR;
	return 0;
}