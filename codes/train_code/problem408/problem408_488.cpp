#include <bits/stdc++.h>
 
const double pi = 3.141592653589793238462643383279;
 
 
using namespace std;
//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
typedef pair<int, PII> TIII;
typedef long long LL;
typedef unsigned long long ULL;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;
 
 
//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define SQ(a) ((a)*(a))
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
 
 
//repetition
//------------------------------------------
#define FOR(i,s,n) for(int i=s;i<(int)n;++i)
#define REP(i,n) FOR(i,0,n)
#define MOD 1000000007
 
 
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
const double EPS = 1E-10;
 
#define chmin(x,y) x=min(x,y)
#define chmax(x,y) x=max(x,y)


//ここから編集

 
ll modPow(ll x, ll n, ll mod = MOD){
    ll res = 1;
    while(n){
        if(n&1) res = (res * x)%mod;
 
        res %= mod;
        x = x * x %mod;
        n >>= 1;
    }
    return res;
}

vector<int> A(20);

vector<vector<int>> x(20), y(20);
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(10);

  ll N; cin >> N;
  
  vector<ll> A(N);
  REP(i,N) cin >> A[i];
  if(N == 1){
    cout << "YES" << endl;
    return 0;
  }
  ll sum = 0;
  REP(i,N) sum += A[i];

  if(sum % (N*(N+1)/2) != 0){
    cout << "NO" << endl;
    return 0;
  }

  vector<ll> v;
  ll tim = sum/(N*(N+1)/2);
  ll t = 0;

  REP(i,N){
    if(i == N-1){
      v.push_back(A[0]-A[N-1]);
    }else{
      v.push_back(A[i+1] - A[i]);
    }
    v[i] -= tim;
  }

  REP(i,N){
    if(abs(v[i])%N != 0){
      cout << "NO" << endl;
      return 0;
    }
    tim -= abs(v[i])/N;
  }

  if(tim == 0){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  

  return 0;
}