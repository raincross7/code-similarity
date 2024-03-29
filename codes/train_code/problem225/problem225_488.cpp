//
//                               S i r o t a n   w a t c h e s   o v e r   y o u .
//
//                                          ...Jggg+J+JJJg@NQmgJa.....,       
//                                 ....gH@@@@HHB""""7"YYYYHMMMMMMM@@@@@@@Hma,.   
//                            ...JH@@MMHY"!                        ? __""YH@@@@N&...     
//                        ..JH@@HY"~                                          _TW@@@Mme.    
//                     .Jg@@#"=                                                   _TTM@@N..     
//                  .Jg@@MY!                                                          ?T@@@h,.   
//                .-@@@B!                                                                (TM@@@L     
//              .(H@MY                                                                      ?W@@@+    
//             .W@@@                                                                          .T@@@[       
//           .d@@M!                                                                             .T@@N,   
//          .d@M@'                                                                                -W@@o. 
//         (@@M\                                                                                    ?M@N,
//        -d@M%                    ..,                                      ..,                      j@@b  
//       d@@M=                     TM9                                      ?MD                       W@@[ 
//      .H@M:                                                                                         .W@H,
//      H@Ht                                                                                           ,@@#   
//     (@@M~                                                                                           .@@h.
//    .@@M%                        ..gmHHJ.                             .JdHga.                        .H@@e  
//    j@@#_                       .@@@@@@@b                            J@@@@@@@h.                      .H@@\ 
//    d@@@                       .4@@@@@@MF                            (@@@@@@@@                        H@@b  
//    d@@[                         ?"BMY"=            .d@@@@H,          ?TWHHY"!                        d@@e    
//    J@@b          .JJJ-..,                         ,@@@@@@M%                       .........         -@@@M. 
//    ?@@M\         ?YHHM@@@@b                ..      .W@@HP                        X@@HMWY"=          d@@@#
//    ,@@@L.                                 ?H@Ng&+gd@@#H@@NHaJ+gH@[                                  J@@@] 
//     X@@@[            ......                 ?"YYYYY""   ?"YHHHB"^                 .....            (@@@#   
//      WH@N+.      .W@@@@MHB=                                                      .TWH@M@Hmc       .H@@M~    
//     .H@@@@N,      _!~                                                                            .d@@@N,   
//   .J@@#T@@@N,                                                                                  .d@@@@@@@b. 
//  (@@@@! .T@@@n,                                                                              .(H@@@H>.W@@@x  
// (@@@F      4@@@@MaJ.                                                                       .d@@@@Y77   4@@@r 
//.H@@P         ?TM@@@@N...                                                               .-JH@HMY=        d@@N,
//(@@@F             ?"WM@@@MQa-,.                                                  .(J(JN@@M#"             Z@@@L
// d@@H,                 (M@@@@@@@Ng&maJ....                           .. ...J.J+W@@@@@@HY!               .dH@b 
// ?M@@@N&.        ..(JW@@@MM"?7""TYHMH@@HH@@@@@HHHgkHagHa(mggdmmagH@H@@Q@@HMMMHY"7!TMM@@@HaJ,.        ..H@@@M^ 
//   ?"W@@@@MN@@@@@H@@MMY"                  _???!"= ?WMMBYYTMH=7""Y@""?"~^             _"YM@@@@@@@@MH@@@@@#"^ 
//       ?77WMMMYB""!                                                                        _7"WWMMMY"7=     

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
#include <complex>
//#include <deque>
#include <valarray>
#include <unordered_map>
#include <unordered_set>
#include <array>
// etc
#include <cassert>
#include <cmath>
#include <functional>
#include <iomanip>
#include <chrono>
#include <random>
#include <numeric>
#include <fstream>

// input
#define INIT std::ios::sync_with_stdio(false);std::cin.tie(0);
#define VAR(type, ...)type __VA_ARGS__;MACRO_VAR_Scan(__VA_ARGS__);
template<typename T> void MACRO_VAR_Scan(T& t) { std::cin >> t; }
template<typename First, typename...Rest>void MACRO_VAR_Scan(First& first, Rest& ...rest) { std::cin >> first; MACRO_VAR_Scan(rest...); }
#define VEC_ROW(type, n, ...)std::vector<type> __VA_ARGS__;MACRO_VEC_ROW_Init(n, __VA_ARGS__); for(int w_=0; w_<n; ++w_){MACRO_VEC_ROW_Scan(w_, __VA_ARGS__);}
template<typename T> void MACRO_VEC_ROW_Init(int n, T& t) { t.resize(n); }
template<typename First, typename...Rest>void MACRO_VEC_ROW_Init(int n, First& first, Rest& ...rest) { first.resize(n); MACRO_VEC_ROW_Init(n, rest...); }
template<typename T> void MACRO_VEC_ROW_Scan(int p, T& t) { std::cin >> t[p]; }
template<typename First, typename...Rest>void MACRO_VEC_ROW_Scan(int p, First& first, Rest& ...rest) { std::cin >> first[p]; MACRO_VEC_ROW_Scan(p, rest...); }
#define VEC(type, c, n) std::vector<type> c(n);for(auto& i:c)std::cin>>i;
#define MAT(type, c, m, n) std::vector<std::vector<type>> c(m, std::vector<type>(n));for(auto& R:c)for(auto& w:R)std::cin>>w;
// output
template<typename T>void MACRO_OUT(const T t) { std::cout << t; }
template<typename First, typename...Rest>void MACRO_OUT(const First first, const Rest...rest) { std::cout << first << " "; MACRO_OUT(rest...); }
#define OUT(...) MACRO_OUT(__VA_ARGS__);
#define FOUT(n, dist) std::cout<<std::fixed<<std::setprecision(n)<<(dist);
#define SOUT(n, c, dist) std::cout<<std::setw(n)<<std::setfill(c)<<(dist);
#define EOUT(...) { OUT(__VA_ARGS__)BR; exit(0); }
#define SP std::cout<<" ";
#define TAB std::cout<<"\t";
#define BR std::cout<<"\n";
#define SPBR(w, n) std::cout<<(w + 1 == n ? '\n' : ' ');
#define ENDL std::cout<<std::endl;
#define FLUSH std::cout<<std::flush;
#define SHOW(dist) {std::cerr << #dist << "\t: " << (dist) << "\n";}
#define SHOWVECTOR(v) {std::cerr << #v << "\t: ";for(const auto& xxx : v){std::cerr << xxx << " ";}std::cerr << "\n";}
#define SHOWVECTOR2(v) {std::cerr << #v << "\t:\n";for(const auto& xxx : v){for(const auto& yyy : xxx){std::cerr << yyy << " ";}std::cerr << "\n";}}
#define SHOWQUEUE(a) {auto tmp(a);std::cerr << #a << "\t: ";while(!tmp.empty()){std::cerr << tmp.front() << " ";tmp.pop();}std::cerr << "\n";}
#define SHOWSTACK(a) {auto tmp(a);std::cerr << #a << "\t: ";while(!tmp.empty()){std::cerr << tmp.top() << " ";tmp.pop();}std::cerr << "\n";}
// utility
#define ALL(a) (a).begin(),(a).end()
#define FOR(w, a, n) for(int w=(a);w<(n);++w)
#define RFOR(w, a, n) for(int w=(n)-1;w>=(a);--w)
#define REP(w, n) for(int w=0;w<int(n);++w)
#define RREP(w, n) for(int w=int(n)-1;w>=0;--w)
#define IN(a, x, b) (a<=x && x<b)
template<class T> inline T CHMAX(T & a, const T b) { return a = (a < b) ? b : a; }
template<class T> inline T CHMIN(T& a, const T b) { return a = (a > b) ? b : a; }
// test
template<class T> using V = std::vector<T>;
template<class T> using VV = V<V<T>>;

template<typename S, typename T>
std::ostream& operator<<(std::ostream& os, std::pair<S, T> p) {
	os << "(" << p.first << ", " << p.second << ")"; return os;
}

// type/const
#define int ll
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using PAIR = std::pair<int, int>;
using PAIRLL = std::pair<ll, ll>;
constexpr int INFINT = (1 << 30) - 1;                    // 1.07x10^ 9
constexpr int INFINT_LIM = (1LL << 31) - 1;              // 2.15x10^ 9
constexpr ll INFLL = 1LL << 60;                          // 1.15x10^18
constexpr ll INFLL_LIM = (1LL << 62) - 1 + (1LL << 62);  // 9.22x10^18
constexpr double eps = 1e-6;
constexpr int MOD = 998244353;
constexpr double PI = 3.141592653589793238462643383279;
template<class T, size_t N> void FILL(T(&a)[N], const T & val) { for (auto& x : a) x = val; }
template<class ARY, size_t N, size_t M, class T> void FILL(ARY(&a)[N][M], const T & val) { for (auto& b : a) FILL(b, val); }
template<class T> void FILL(std::vector<T> & a, const T & val) { for (auto& x : a) x = val; }
template<class ARY, class T> void FILL(std::vector<std::vector<ARY>> & a, const T & val) { for (auto& b : a) FILL(b, val); }
// ------------>8---------



signed main() {
	INIT;

	VAR(int, n);
	VEC(int, a, n);

	int ans = 0;
	while (true) {
		bool end = true;
		REP(i, n) {
			if (a[i] < n) continue;
			end = false;
			int t = a[i] / n;
			ans += t;
			a[i] -= t * n;
			REP(j, n) if (i != j) {
				a[j] += t;
			}
		}
		if (end) break;
	}
	OUT(ans)BR;

	return 0;
}