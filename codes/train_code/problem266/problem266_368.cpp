#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <cassert>
#include <climits>
#include <string>
#include <bitset>
#include <cfloat>
#include <random>
#include <iomanip>
#include <unordered_set>
#pragma GCC optimize("Ofast")
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int,int> > vpii;
typedef vector<pair<ll,ll> > vpll;
typedef vector<vector<int> > vvi;
typedef vector<vector<char> > vvc;
typedef vector<vector<string> > vvs;
typedef vector<vector<ll> > vvll;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rrep(i,n) for(int i = 1; i <= (n); ++i)
#define irep(it, stl) for(auto it = stl.begin(); it != stl.end(); it++)
#define drep(i,n) for(int i = (n) - 1; i >= 0; --i)
#define fin(ans) cout << (ans) << '\n'
#define STLL(s) strtoll(s.c_str(), NULL, 10)
#define mp(p,q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int
// #define endl '\n';
#define fi first
#define se second
#define NONVOID [[nodiscard]]
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
template <class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;} return 0;}
template <class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;} return 0;}
template <class T> inline void dump(T &v){irep(i, v){cout<<*i<<((i==--v.end())?'\n':' ');}}
inline string getline(){string s; getline(cin,s); return s;}
inline void yn(const bool b){b?fin("yes"):fin("no");}
inline void Yn(const bool b){b?fin("Yes"):fin("No");}
inline void YN(const bool b){b?fin("YES"):fin("NO");}
struct io{io(){ios::sync_with_stdio(false);cin.tie(0);}};
const int INF = INT_MAX;
const ll LLINF = 1LL<<60;
const ll MOD = 1000000007;
const double EPS = 1e-9;


#define MAX_NCK 101010
ll f[MAX_NCK], rf[MAX_NCK];

// modinvも呼ぶ！！
// (a/b)%P の場合は，(a%P)*modinv(b)%P とする
ll modinv(ll a) {
    ll b = MOD, u = 1, v = 0;
    while (b) {
        ll t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= MOD;
    if (u < 0) u += MOD;
    return u;
}

bool isinit = false;

void init(void) {
    f[0] = 1;
    rf[0] = modinv(1);
    for(int i = 1; i < MAX_NCK; i++) {
        f[i] = (f[i - 1] * i) % MOD;
        rf[i] = modinv(f[i]);
    }
}

ll nCk(int n, int k) {
    if(!isinit) {
        init();
        isinit = 1;
    }
    ll nl = f[n]; // n!
    ll nkl = rf[n - k]; // (n-k)!
    ll kl = rf[k]; // k!
    ll nkk = (nkl * kl) % MOD;

    return (nl * nkk) % MOD;
}

int main() {

    int n,p;
    cin>>n>>p;
    vi v(n);
    rep(i,n)cin>>v[i];
    vi a(2,0);
    rep(i,n)a[v[i]%2]++;
    ll ans=0;
    if(p==0){
        ll c=0;
        for(int i=0;i<=a[1];i+=2){
            c+=nCk(a[1],i);
        }
        ans+=pow(2,a[0])*c;
    } else {
        ll c=0;
        for(int i=1;i<=a[1];i+=2){
            c+=nCk(a[1],i);
        }
        ans+=pow(2,a[0])*c;
    }
    fin(ans);
}
