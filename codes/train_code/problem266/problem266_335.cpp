#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> p_ll;

template<class T>
void debug(T itr1, T itr2) { auto now = itr1; while(now<itr2) { cout << *now << " "; now++; } cout << endl; }
#define repr(i,from,to) for (int i=(int)from; i<(int)to; i++)
#define all(vec) vec.begin(), vec.end()
#define rep(i,N) repr(i,0,N)
#define per(i,N) for (int i=(int)N-1; i>=0; i--)

const ll MOD = pow(10,9)+7;
const ll LLINF = pow(2,61)-1;
const int INF = pow(2,30)-1;

vector<ll> fac;
void c_fac(int x=pow(10,6)+10) { fac.resize(x,true); rep(i,x) fac[i] = i ? (fac[i-1]*i)%MOD : 1; }
ll inv(ll a, ll m=MOD) { ll b = m, x = 1, y = 0; while (b!=0) { int d = a/b; a -= b*d; swap(a,b); x -= y*d; swap(x,y); } return (x+m)%m; }
ll nck(ll n, ll k) { return fac[n]*inv(fac[k]*fac[n-k]%MOD)%MOD; }
ll gcd(ll a, ll b) { if (a<b) swap(a,b); return b==0 ? a : gcd(b, a%b); }
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }


int main() {
  ll N, P; cin >> N >> P;
  ll A[N]; rep(i,N) { cin >> A[i]; A[i] %= 2; }
  ll dp[N+1][2] = {}; dp[0][0] = 1;
  rep(i,N) {
    if (A[i]%2==0) {
      dp[i+1][0] = dp[i][0]*2; 
      dp[i+1][1] = dp[i][1]*2;
    }
    else {
      dp[i+1][0] = dp[i][0] + dp[i][1];
      dp[i+1][1] = dp[i][0] + dp[i][1];
    }
  }

  ll result = dp[N][P];
  cout << result << endl;
  return 0;
}