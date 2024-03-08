#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <numeric>
#include <cmath>
 
using namespace std;
 
// typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<string> vs;
 
// container util
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for (typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
 
// repetition
#define FOR(i,m,n) for (ll (i) = ((ll) m); (i) < ((ll) n); ++(i))
#define RFOR(i,m,n) for (ll (i) = ((ll) (m)-1); (i) >= ((ll) n); --(i))
#define REP(i,n) FOR(i,0,n)
 
// i/o
#define TFOUT(b,t,f) cout << ((b)? (t) : (f)) << endl
 
//constant
const double    EPS     = 1e-10;
const double    PI      = acos(-1.0);
const int       INFTY   = (1<<21);
const ll        INFTY_LL = (1LL<<60);
 
//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))
 
//debug
#define dump(x)  cerr << #x << " = " << (x) << endl
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl


int main() {
    int n, m, r; cin >> n >> m >> r;
    vector<int> v;
    REP(i, r) {
        int e; cin >> e;
        e--;
        v.push_back(e);
    }
    vector< vector<ll> > wf(n, vector<ll>(n, INFTY_LL));
    REP(i, n) {
        wf[i][i] = 0;
    }
    REP(i, m) {
        int a, b; ll c; cin >> a >> b >> c;
        a--; b--;
        wf[a][b] = c;
        wf[b][a] = c;
    }
    REP(k, n) {
        REP(i, n) {
            REP(j, n) {
                ll x = wf[i][k] + wf[k][j];
                if (wf[i][j] > x) wf[i][j] = x;
            }
        }
    }

    ll ans = INFTY_LL;
    SORT(v);
    do {
        ll score = 0;
        REP(i, r-1) score += wf[v[i+1]][v[i]];
        if (ans > score) ans = score;
    } while(next_permutation(ALL(v)));
    cout << ans << endl;
}
