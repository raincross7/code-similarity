#include <bits/stdc++.h>
using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> P;
typedef long long ll;

#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define SORT(c) sort((c).begin(),(c).end())
#define REVERSE(c) reverse((c).begin(),(c).end())

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define RFOR(i,a,b) for(int i=(a)-1;i>=(b);--i)
#define RREP(i,n) RFOR(i,n,0)

const double EPS = 1e-10;
const double PI  = acos(-1.0);
const int INT_INF = 2147483647;
const long long LL_INF = 1LL<<60;
const long long MOD = 1000000007;

#define CLR(a) memset((a), 0 ,sizeof(a))

#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main(void){
    int N; cin >> N;
    VS s(N); REP(i,N) cin >> s[i];

    int ans = 0;
    REP(i,N){
        REP(j,s[i].size()-1) if(s[i][j]=='A'&&s[i][j+1]=='B') ans++;
    }

    int na=0, nb=0, nab=0;
    REP(i,N){
        if(s[i][0]=='B'&&s[i][s[i].size()-1]=='A') nab++;
        else if(s[i][0]=='B') nb++;
        else if(s[i][s[i].size()-1]=='A') na++;
    }

    if(nab) ans += nab-1;
    if(nab && na){
        ans++;
        na--;
    }
    if(nab && nb){
        ans++;
        nb--;
    }
    ans += min(na,nb);
    cout << ans << endl;
    return 0;
}