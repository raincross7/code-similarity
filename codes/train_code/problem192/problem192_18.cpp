//include
//------------------------------------------
#include <bits/stdc++.h>
using namespace std;
//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
//math
//-------------------------------------------
template<class T> inline T sqr(T x) {return x*x;}
//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> P;
typedef long long ll;
//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);
const long long INF = 1000000007;
//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))
//debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
// chmax chmin
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main(void){
    int N,K; cin >> N >> K;
    ll x[N],y[N],maxy=0; REP(i,N){cin >> x[i] >> y[i];}
    vector<pair<ll,int>> vx, tmpy;
    REP(i,N){
        vx.push_back(pair<ll,int>(x[i],i));
        tmpy.push_back(pair<ll,int>(y[i],i));
    }
    SORT(vx); SORT(tmpy);
    ll ans = (vx[N-1].first-vx[0].first)*(tmpy[N-1].first-tmpy[0].first);
    REP(i,N-K+1)FOR(j,i+K-1,N){
        vector<ll> vy;
        FOR(k,i,j+1) vy.push_back(y[vx[k].second]);
        SORT(vy);
        int ny = j-i+1;
        ll yoko=vx[j].first-vx[i].first;
        REP(a,ny-K+1){
            ll tate = vy[a+K-1]-vy[a];
            chmin(ans, tate*yoko);
        }
    }
    cout << ans << endl;
    return 0;
}