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
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vc> vvc;
typedef vector<vs> vvs;
typedef vector<vll> vvll;
typedef map<int,int> mii;
typedef set<int> si;
#define rep(i,n) for(ll i = 0; i < (n); ++i)
#define rrep(i,n) for(int i = 1; i <= (n); ++i)
#define arep(i,v) for(auto i : v)
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
#define fi first
#define se second
constexpr int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
constexpr int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
template <class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;} return 0;}
template <class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;} return 0;}
template <class T> inline void dump(T &v){irep(i, v){cout<<*i<<((i==--v.end())?'\n':' ');}}
inline string getline(){string s; getline(cin,s); return s;}
inline void yn(const bool b){b?fin("yes"):fin("no");}
inline void Yn(const bool b){b?fin("Yes"):fin("No");}
inline void YN(const bool b){b?fin("YES"):fin("NO");}
struct io{io(){ios::sync_with_stdio(false);cin.tie(0);}};
const int INF = INT_MAX;
constexpr ll LLINF = 1LL<<60;
constexpr ll MOD = 1000000007;
constexpr ld EPS = 1e-11;


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

ll kai(ll X){
    ll res=1;
    for(ll i=1;i<=X;i++){
        res*=i;
        res%=MOD;
    }
    return res;
}

int main() {

    ll x,y;
    cin>>x>>y;
    ll A=(2*x-y)/3;
    ll B=(2*y-x)/3;
    if((2*x-y)<0||(2*y-x)<0||(2*x-y)%3!=0||(2*y-x)%3!=0){
        fin(0);
        return 0;
    }
    ll ans=kai(A+B);
    ll bo=kai(A)*kai(B);
    bo%=MOD;
    cout<<ans*modinv(bo)%MOD<<endl;
    
}
