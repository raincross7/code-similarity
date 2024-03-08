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
typedef long long LL;
typedef pair<int, int> PII;
typedef pair<LL,LL> PLL;
typedef map<int,int> MII;
typedef queue<int> QI;
typedef queue<PII> QPII;
typedef stack<int> SI;
typedef stack<PII> SPII;
typedef deque<int> DI;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;
typedef vector<bool> VB;
typedef vector<VB> VVB;
typedef vector<double> VD;
typedef vector<VD> VVD;
typedef vector<string> VS;
typedef vector<VS> VVS;
typedef vector<char> VC;
typedef vector<VC> VVC;
typedef vector<PII> VPII;
typedef vector<PLL> VPLL;
typedef priority_queue<int> PQGI; //大きい順
typedef priority_queue<int, VI, greater<int>> PQLI;
typedef priority_queue<PII> PQGP; 
typedef priority_queue<PII, VPII, greater<int>> PQLP;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define PB push_back
#define PF push_front
#define POB pop_back
#define POF pop_front
#define MP make_pair
#define SZ(a) int((a).size())
#define SQ(a) ((a)*(a))
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define SORTR(c) sort((c).rbegin(), (c).rend())
#define LB lower_bound
#define UB upper_bound
#define NEXP next_permutation
#define FI first
#define SE second

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define FORR(i,a,b) for(int i = (b-1);i>=a;i--)
#define REPR(i,n) FORR(i,0,n)
#define BREP(bit,N) for(int bit = 0; bit < (1<<N); ++bit)

//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);
const int INF = INT_MAX/2;
const LL LINF = LLONG_MAX/2;
const int RINF = INT_MIN/2;
const LL RLINF = LLONG_MIN/2;
const LL MOD = 1e9+7;
const LL MODD = 998244353;
const int MAX = 510000;

inline bool Eq(double a, double b) { return fabs(b - a) < EPS; }

//other
//-------------------------------------------
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define COUT(x) cout << (x) << endl
#define COUT2(x,y) cout << (x) << " " << (y) << endl
#define PR(x) cout << (x)
#define ENDL cout << endl
#define SPACE cout << " "
#define BC(x) __builtin_popcountll(x)

void cYes(){ COUT("Yes");exit(0); }
void cNo(){ COUT("No");exit(0); }
void cYES(){ COUT("YES");exit(0); }
void cNO(){ COUT("NO");exit(0); }
void cyes(){ COUT("yes");exit(0); }
void cno(){ COUT("no");exit(0); }
void cMINU(){ COUT(-1);exit(0); }
void cZERO(){ COUT(0);exit(0); }

VI dx = {1,0,-1,0,1,1,-1,-1};
VI dy = {0,1,0,-1,1,-1,1,-1};
VC dc = {'R','D','L','U'};
VS ds = {"R","D","L","U","RD","RU","LD","LU"};

LL Gcd(LL a, LL b) {return __gcd(a,b);}
LL Lcm(LL a, LL b) {return a/Gcd(a,b)*b;}

LL ModPow(LL A, LL N, LL M){
  LL res = 1;
  while(N>0){
    if(N&1) res = res * A % M;
    A = A * A % M;
    N >>= 1;
  }
  return res;
}

LL fac[MAX], finv[MAX], inv[MAX];

void ConInit(LL M) {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % M;
        inv[i] = M - inv[M%i] * (M / i) % M;
        finv[i] = finv[i - 1] * inv[i] % M;
    }
}

LL COM(int n, int k, LL M){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % M) % M;
}

void VCout(auto &v){
  int N = SZ(v);
  REP(i,N){
    cout << v.at(i);
    if(i == N-1) cout << endl;
    else cout << " ";
  }
  return;
}



int main() {
  
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(12);
  
  
  int N;
  cin >> N;
  VVC bofi(N,VC(N));
  REP(i,N)REP(j,N) cin >> bofi.at(i).at(j);
  int ans = 0;
  
  REP(k,N){
    VVC bose(N,VC(N));
    
    REP(i,N)REP(j,N){
      bose.at(i).at(j) = bofi.at((i+k)%N).at(j);
    }
    auto f = [&]() {
      REP(i,N)REP(j,N){
        if(bose.at(i).at(j) != bose.at(j).at(i)){
          return;
        }
      }
      ans += N;
      return;
    };
    f();
  }
  
  COUT(ans);
  
  
  return 0;
}