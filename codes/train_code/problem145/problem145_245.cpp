// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, n) for (int i = 0; i < n; ++i)
#define range(i,a,b) ((a)<=(i) && (i)<(b))
#define debug(x) cout << #x << " = " << (x) << endl;
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define SP << " " <<

typedef long long ll;
typedef pair<ll, ll> P;
typedef tuple<ll, ll, ll> T;
typedef vector<ll> vec;
typedef vector<P> pvec;
typedef vector<vector<ll>> vvec;
typedef vector<vector<P>> pvvec;
typedef priority_queue<ll> PQI;
typedef priority_queue<P> PQP;
typedef priority_queue<ll,vector<ll>,greater<ll>> PQIG;
typedef priority_queue<P,vector<P>,greater<P>> PQPG;

const vector<int> dx = {0, -1, 0, 1, 1, 1, -1, -1};
const vector<int> dy = {1, 0, -1, 0, 1, -1, 1, -1};
constexpr int MOD = (1000000007);
// const int MOD = (998244353);
// const int INF = (1 << 30); // 1073741824
const int INF = (1LL << 60); // 1152921504606846976
const double EPS = (1 >> 30);

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return 1;} return 0;}
template<class T> inline T ceil(T a, T b) {return T((a + b - 1) / b);}
template<class T> inline T round(T a, T b) {return T(a / b);}
template< typename T1, typename T2 > istream &operator>>(istream &is, pair< T1, T2 > &p) { is >> p.first >> p.second; return is; }
template <class T> inline void out(T &a) { bool flag=true; for(auto&x:a){if(flag) {flag=false;} else{ cout << ' '; } cout<<x; } cout << endl; }



//----------------------------------------------------------------
int nmax=200000; // 2*(10^5)
vvec g(nmax);





void solve4ts()
{
    
    int h,w;cin>>h>>w;
    vector<string> s(h);
    rep(i,h) cin>>s[i];
    vvec dp(110,vec(110,INF));
    dp[0][0]=0;
    if(s[0][0]=='#') dp[0][0]++;

    rep(i,h){
        rep(j,w){
            int nx=i+1;
            int ny=j;
            if(nx<h){
            if(s[nx][ny]=='#'&&s[i][j]=='.') chmin(dp[nx][ny],dp[i][j]+1);
            else chmin(dp[nx][ny],dp[i][j]);
            }
            nx=i;
            ny=j+1;
            if(ny<w){
            if(s[nx][ny]=='#'&&s[i][j]=='.') chmin(dp[nx][ny],dp[i][j]+1);
            else chmin(dp[nx][ny],dp[i][j]);
            }
        }
    }    
    cout<<dp[h-1][w-1]<<endl;
}
//-----------------------------------------------------------------

signed main(){ ios::sync_with_stdio(false); cin.tie(0); cout << fixed << setprecision(15);
    int repeat = 1;
    // cin >> repeat;
    while(repeat--) solve4ts();
}