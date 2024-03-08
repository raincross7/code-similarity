//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <unordered_map>
#include <climits>
#include <set>
#include <unordered_set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <queue>
#include <random>
#include <chrono>
#include <complex>
#include <regex>
#include <locale>
#include <random>
#include <cassert>
#include <type_traits>

using namespace std;

// typedef
//------------------------------------------
typedef long long LL;
typedef vector<int> VI;
typedef vector<bool> VB;
typedef vector<char> VC;
typedef vector<double> VD;
typedef vector<string> VS;
typedef vector<LL> VLL;
typedef vector<VI> VVI;
typedef vector<VB> VVB;
typedef vector<VS> VVS;
typedef vector<VLL> VVLL;
typedef vector<VVI> VVVI;
typedef vector<VVLL> VVVLL;
typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;
typedef pair<int, string> PIS;
typedef pair<string, int> PSI;
typedef pair<string, string> PSS;
typedef vector<PII> VPII;
typedef vector<PLL> VPLL;
typedef vector<VPII> VVPII;
typedef vector<VPLL> VVPLL;
typedef vector<VS> VVS;
typedef map<int, int> MII;
typedef map<LL, LL> MLL;
typedef map<string, int> MSI;
typedef map<int, string> MIS;

// to-method
//------------------------------------------
inline int toInt(string s) {
    int v;
    istringstream sin(s);
    sin >> v;
    return v;
}

inline LL toLongLong(string s) {
    LL v;
    istringstream sin(s);
    sin >> v;
    return v;
}

template<class T>
inline string toString(T x) {
    ostringstream sout;
    sout << x;
    return sout.str();
}

inline VC toVC(string s) {
    VC data(s.begin(), s.end());
    return data;
}



// container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define SZ(a) int((a).size())
#define EACH(i, arr) for(typeof((arr).begin()) i=(arr).begin(); i!=(arr).end(); ++i)
#define EXIST(str, e) ((str).find(e)!=(str).end())
#define COUNT(arr, v) count((arr).begin(), (arr).end(), v)
#define SEARCH(v, w) search((v).begin(), (v).end(), (w).begin(), (w).end())
#define SORT(c) sort((c).begin(),(c).end())
#define RSORT(c) sort((c).rbegin(),(c).rend())
#define REVERSE(c) reverse((c).begin(), (c).end())
#define ROTATE_LEFT(arr, c) rotate((arr).begin(), (arr).begin()+(c), (arr).end())
#define ROTATE_RIGHT(arr, c) rotate((arr).rbegin(), (arr).rbegin() + (c), (arr).rend())
#define SUMI(arr) accumulate((arr).begin(), (arr).end(), 0)
#define SUMD(arr) accumulate((arr).begin(), (arr).end(), 0.)
#define SUMLL(arr) accumulate((arr).begin(), (arr).end(), 0LL)
#define SUMS(arr) accumulate((arr).begin(), (arr).end(), string())
#define MULD(arr) accumulate((arr).begin(), (arr).end(), 1., multiplies<double>())
#define MULLL(arr) accumulate((arr).begin(), (arr).end(), 1LL, multiplies<long long>())
#define UB(arr, n) upper_bound((arr).begin(), (arr).end(), n)
#define LB(arr, n) lower_bound((arr).begin(), (arr).end(), n)
#define OF_ALL(arr, func) all_of((arr).begin(), (arr).end(), (func))
#define OF_NONE(arr, func) none_of((arr).begin(), (arr).end(), (func))
#define OF_ANY(arr, func) any_of((arr).begin(), (arr).end(), (func))
#define PB push_back
#define MP make_pair
#define ft first
#define sd second



// input output
//------------------------------------------
#define GL(s) getline(cin, (s))
#define INIT() std::ios::sync_with_stdio(false);std::cin.tie(0)
#define OUT(d) std::cout<<(d)
#define OUT_L(d) std::cout<<(d)<<endl
#define FOUT(n, data) std::cout<<std::fixed<<std::setprecision(n)<<(data)
#define FOUT_L(n, data) std::cout<<std::fixed<<std::setprecision(n)<<(data)<<"\n"
#define EL() printf("\n")
#define SHOW_VECTOR(v) {std::cerr << #v << "\t:";for(const auto& xxx : v){std::cerr << xxx << " ";}std::cerr << "\n";}
#define SHOW_MAP(v) {std::cerr << #v << endl; for(const auto& xxx: v){std::cerr << xxx.first << " " << xxx.second << "\n";}}
#define Yes() printf("Yes\n")
#define No() printf("No\n")
#define YES() printf("YES\n")
#define NO() printf("NO\n")
#define Yay() printf("Yay!\n")
#define Nnn() printf(":(\n")


template<typename T1, typename T2>
istream &operator>>(istream &in, pair<T1, T2> &p) {
    in >> p.first >> p.second;
    return in;
}

template<typename T>
istream &operator>>(istream &in, vector<T> &v) {
    for (auto &x: v)
        in >> x;
    return in;
}


template<typename T1, typename T2>
ostream &operator<<(ostream &out, const std::pair<T1, T2> &p) {
    out << "[" << p.first << ", " << p.second << "]" << "\n";
    return out;
}


//repetition
//------------------------------------------
#define FOR(i, a, b) for(int i=(a);i<(b);++i)
#define RFOR(i, a, b) for(int i=(b)-1;i>=(a);--i)
#define REP(i, n)  FOR(i,0,n)
#define RREP(i, n) for(int i = n-1;i >= 0;i--)
#define FORLL(i, a, b) for(LL i=LL(a);i<LL(b);++i)
#define RFORLL(i, a, b) for(LL i=LL(b)-1;i>=LL(a);--i)
#define REPLL(i, n) for(LL i=0;i<LL(n);++i)
#define RREPLL(i, n) for(LL i=LL(n)-1;i>=0;--i)
#define FOREACH(x, arr) for(auto &(x) : (arr))
#define FORITER(x, arr) for(auto (x) = (arr).begin(); (x) != (arr).end(); ++(x))

template<class T>
void chmin(T &a, const T b) { a = min(a, b); }
template<class T>
void chmax(T &a, const T b) { a = max(a, b); }

//------------------------------------------
//------------------------------------------


int main() {

    int N;
    cin >> N;

    vector<LL> a(N);
    cin >> a;

    LL ans = 0;
    for (int i = 0;; i++) {
        int pos = i % N;
        bool good = true;
        for (int j = 0; j < N; j++) if (a[j] > N - 1) good = false;
        if (good)break;
        LL p = a[pos] / N;
        a[pos] -= N * p;
        ans += p;
        for (int j = 0; j < N - 1; j++) a[(pos + j + 1) % N] += p;
    }

    cout << ans << endl;

}












































