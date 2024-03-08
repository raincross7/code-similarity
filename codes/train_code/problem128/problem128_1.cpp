#include "bits/stdc++.h"

using namespace std;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<VVI> VVVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef vector<PII> VPII;
typedef long long LL;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;
typedef vector<VVLL> VVVLL;
typedef pair<LL, LL> PLL;
typedef vector<PLL> VPLL;

#define SORT_ASC(c) sort((c).begin(), (c).end())
#define SORT_DESC(c) sort((c).begin(), (c).end(), greater<typeof((c).begin())>())

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define FORL(i,a,b) for(LL i=(a);i<(b);++i)
#define REPL(i,n)  FORL(i,0,n)
#define SIZE(a) int((a).size())
#define ALL(a) (a).begin(),(a).end()

const double EPS = 1e-10;
const double PI  = acos(-1.0);

 //debug func
template<typename T>
void vprint(vector<T> v) {
    for(auto x : v) {
        cerr << x << " ";
    }
    cerr << endl;
}

template<typename T>
void vvprint(vector<vector<T>> vv) {
    REP(i, SIZE(vv)) {
        REP(j, SIZE(vv[i])) {
            cerr << vv[i][j] << " ";
        }
        cerr << endl;
    }
}

template<typename T1, typename T2>
void vpprint(vector<pair<T1, T2>> vp) {
    REP(i, SIZE(vp)) {
        cerr << vp[i].first << ", " << vp[i].second << endl;
    }
}

template<typename T1, typename T2>
void mprint(map<T1, T2> m) {
    for(auto x : m) cerr << x.first << ", " << x.second << endl;
}

template <typename Iterator>
inline bool next_combination(const Iterator first, Iterator k, const Iterator last)
{
   /* Credits: Thomas Draper */
   if ((first == last) || (first == k) || (last == k))
      return false;
   Iterator itr1 = first;
   Iterator itr2 = last;
   ++itr1;
   if (last == itr1)
      return false;
   itr1 = last;
   --itr1;
   itr1 = k;
   --itr2;
   while (first != itr1)
   {
      if (*--itr1 < *itr2)
      {
         Iterator j = k;
         while (!(*itr1 < *j)) ++j;
         iter_swap(itr1,j);
         ++itr1;
         ++j;
         itr2 = k;
         rotate(itr1,j,last);
         while (last != j)
         {
            ++j;
            ++itr2;
         }
         rotate(k,itr2,last);
         return true;
      }
   }
   rotate(first,k,last);
   return false;
}

inline double get_time_sec(void){
    return static_cast<double>(chrono::duration_cast<chrono::nanoseconds>(chrono::steady_clock::now().time_since_epoch()).count())/1000000000;
}

template<typename T>
T gcd(T a, T b) {
    if(a > b) swap(a, b);
    if(a == 0) return b;
    else return gcd(b%a, a);
}

template<typename T>
T lcm(T a, T b) {
    return (a / gcd(a, b)) * b;
}

template<typename T>
map<T, T> prime_list(T n) {
    map<T, T> ret;
    for(T i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            ret[i] = 0;
            while(n % i == 0) {
                n /= i;
                ret[i]++;
            }
        }
    }
    if(n != 1) ret[n]++;
    return ret;
}

#define MOD 1000000007

LL mypow(LL a, LL n) {
    if(n == 0) return 1;
    if(n == 1) return a % MOD;
    if(n % 2 == 1) return (a * mypow(a, n-1)) % MOD;
    LL t = mypow(a, n/2);
    return (t * t) % MOD;
}

#define FACT_SZ 100010
VLL _fact, _inv;
bool _fact_flg = true;

void _fact_init() {
    _fact = VLL(FACT_SZ);
    _inv = VLL(FACT_SZ);
    _fact[0] = 1;
    FOR(i, 1, FACT_SZ) _fact[i] = (_fact[i-1] * i) % MOD;
    _inv[FACT_SZ-1] = mypow(_fact[FACT_SZ-1], MOD - 2);
    for(int i = FACT_SZ - 2; i >= 0; i--) {
        _inv[i] = ((i + 1) * _inv[i + 1]) % MOD;
    }
}

LL mycomb(LL n, LL k) {
    if(_fact_flg) {
        _fact_flg = false;
        _fact_init();
    }
    if(n < k) return 0;
    return (((_fact[n] * _inv[k]) % MOD) * _inv[n-k]) % MOD;
}

VLL par, rnk, sz;

int root(int x) {
    if(par[x] == x) return x;
    else return par[x] = root(par[x]);
}

bool same(int x, int y) {
    x = root(x);
    y = root(y);
    return x == y;
}

void unite(int x, int y) {
    x = root(x);
    y = root(y);
    if(rnk[x] < rnk[y]) {
        par[x] = y;
        // sz[y] += sz[x];
    } else {
        par[y] = x;
        // sz[x] += sz[y];
        if(rnk[x] == rnk[y]) rnk[x]++;
    }
}

#define INF 1e15

int main(void) {
    LL a, b;
    cin >> a >> b;
    LL sup = max(a, b), inf = min(a, b);
    LL infinit = inf;
    VVLL board(100, VLL(100, 0));
    inf--;
    REP(i, 25) REP(j, 25) {
        if(sup > 0 && inf > 0) {
            board[4*i][4*j] = 1;
            board[4*i][4*j+1] = 1;
            board[4*i][4*j+2] = 1;
            board[4*i+1][4*j] = 1;
            board[4*i+1][4*j+2] = 1;
            board[4*i+2][4*j] = 1;
            board[4*i+2][4*j+1] = 1;
            board[4*i+2][4*j+2] = 1;
            sup--;
            inf--;
        } else if(sup > 0) {
            board[4*i+1][4*j+1] = 1;
            sup--;
        }
    }
    // vvprint(board);
    cout << "100 100" << endl;
    REP(i, 100) {
        if(infinit == a) REP(j, 100) cout << (board[i][j] ? '#' : '.');
        else REP(j, 100) cout << (board[i][j] ? '.' : '#');
        cout << endl;
    }
}