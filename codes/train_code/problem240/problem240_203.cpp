#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(long long i = 0; i < (n); i++)
#define REP(i,s,n) for(long long i = (s); i <= (n); i++)
#define repr(i,n) for(long long i = (n - 1); i >= 0; i--)
#define REPR(i,s,n) for(long long i = (s); i >= (n); i--)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sumvec(v) accumulate(all(v), 0LL)
#define DOUBLE fixed << setprecision(15)
#define OK cerr << "OK\n"
#define OK1 cerr << "OK1\n"
#define OK2 cerr << "OK2\n"
#define sz(s) (long long)s.size()
#define zero(x, n) setw(x) << setfill('0') << n
#define dbg(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ") " << __FILE__ << endl;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<vd> vvd;
typedef vector<vc> vvc;
typedef vector<vb> vvb;
typedef pair<ll,ll> P;
typedef vector<P> vP;


void debug() { cerr << "\n"; }
template<class T, class... Args> void debug(const T &x, const Args &... args) { cerr << x << " "; debug(args...); }
template<class A, class B> ostream& operator<< (ostream& ost, const pair<A, B> &p) { ost << "{" << p.first << ", " << p.second << "} "; return ost; }
template<class T> ostream& operator<< (ostream& ost, const vector<T>&v) { ost << "{"; for (int i = 0; i < (int)v.size(); i++) { if(i) ost << " "; ost << v[i]; } ost << "} \n"; return ost; }
template <typename T> ostream& operator<<(ostream& os, const deque<T> &vec) { os << "deq["; for (auto v : vec) os << v << ","; os << "]\n"; return os; }
template<class A, class B> ostream& operator<< (ostream& ost, const map<A, B>&v) { ost << "{"; for (auto p : v) { ost << "{" << p.first << ", " << p.second << "} "; } ost << "}\n"; return ost; }
template<typename T> istream& operator>> (istream& is, vector<T>& vec) { for(T& e : vec) is >> e; return is; }
template<typename A, typename B> istream& operator>> (istream& is, pair<A, B>& p) { is >> p.first >> p.second; return is; }
template<typename T> string join(vector<T>& vec, string sep=" ") { stringstream ss; for(int i = 0; i < (int)vec.size(); i++) { ss << vec[i] << (i + 1 == (int)vec.size() ? "\n" : sep); } return ss.str(); }
template<typename A, typename B> pair<A, B> operator+ (const pair<A, B> &l, const pair<A, B> &r) { return make_pair(l.first + r.first, l.second + r.second); }
template<typename A, typename B> pair<A, B> operator- (const pair<A, B> &l, const pair<A, B> &r) { return make_pair(l.first - r.first, l.second - r.second); }
template<typename T> ostream& operator<< (ostream &os, const set<T> &vec) { os << "{"; for (auto v : vec) os << v << ","; os << "}\n"; return os; }
template<typename T> ostream& operator<<(ostream &os, const multiset<T> &vec) { os << "{"; for (auto v : vec) os << v << ","; os << "}\n"; return os; }
template<class T> auto min(const T& a){ return *min_element(a.begin(), a.end()); }
template<class T> auto max(const T& a){ return *max_element(a.begin(), a.end()); }
template<class T> inline bool chmax(T& a, T b){ if(a < b){ a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b){ if(a > b){ a = b; return true; } return false; }

#define INT(...) int __VA_ARGS__; IN(__VA_ARGS__)
#define LL(...) long long __VA_ARGS__; IN(__VA_ARGS__)
#define CHR(...) char __VA_ARGS__; IN(__VA_ARGS__)
#define DBL(...) double __VA_ARGS__; IN(__VA_ARGS__)
#define STR(...) string __VA_ARGS__; IN(__VA_ARGS__)
#define LD(...) long double __VA_ARGS__; IN(__VA_ARGS__)

void scan(int& a){ cin >> a; }
void scan(long long& a){ cin >> a; }
void scan(char& a){ cin >> a; }
void scan(double& a){ cin >> a; }
void scan(string& a){ cin >> a; }
void scan(long double& a){ cin >> a; }

void IN(){}
template<class Head, class... Tail> void IN(Head& head, Tail&... tail){ scan(head); IN(tail...); }

void YES(bool b) { cout << ((b) ? "YES\n" : "NO\n"); }
void Yes(bool b) { cout << ((b) ? "Yes\n" : "No\n"); }
void yes(bool b) { cout << ((b) ? "yes\n" : "no\n"); }
void Yay(bool b) { cout << ((b) ? "Yay!\n" : ":(\n"); }
void possible(bool b) { cout << ((b) ? "possible\n" : "impossible\n"); }
void Possible(bool b) { cout << ((b) ? "Possible\n" : "Impossible\n"); }
void POSSIBLE(bool b) { cout << ((b) ? "POSSIBLE\n" : "IMPOSSIBLE\n"); }

const int dy[] = {-1, 0, 0, 1};
const int dx[] = {0, -1, 1, 0};
const int dy8[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dx8[] = {-1, 0, 1, -1, 1, -1, 0, 1};
const int inf = 1001001001;
const long long INF = ((1LL << 62) - (1LL << 31));
const long double pi = acos(-1.0);
const long long mod=1000000007;
const long long MOD=998244353;

ll powmod(ll a, ll b){ ll c = 1; while(b > 0){ if(b & 1){ c = a * c % mod; } a = a * a % mod; b >>= 1; } return c; }
ll nCrmod(ll n, ll r){ ll x = 1, y = 1; for(ll i = 0; i < r; i++) { x = x * (n - i) % mod; y = y * (i + 1) % mod; } return x * powmod(y, mod - 2) % mod; }
ll gcd(ll a, ll b){ while(b){ ll c = b; b = a % b; a = c; } return a; }
ll lcm(ll a, ll b){ if(!a || !b) return 0; return a * b / gcd(a, b); }
vll divisor(ll x){ vll v; for(ll i = 1; i * i <= x; i++) if(x % i == 0){ v.push_back(i); if(i * i != x) v.push_back(x / i); } sort(v.begin(), v.end()); return v; };
map<ll, ll> prime_factor(ll n){ map<ll, ll> m; for(ll i = 2; i * i <= n; i++){ while(n % i == 0){ m[i]++; n /= i; } } if(n != 1) m[n] = 1; return m; }

int main()
{
	LL(s);
	vll dp(s + 1);
	dp[0] = 1;
	REP(i, 3, s) {
		dp[i] = dp[i - 1] + dp[i - 3];
		dp[i] %= mod;
	}
	cout << dp[s] << endl;
    return 0;
}
