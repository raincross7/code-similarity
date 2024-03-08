#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <iostream>
#include <istream>
#include <iterator>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <tuple>
#include <iomanip>
#include <climits>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
//typedef pair<ll, ll> P;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define revrep(i, n) for(int i = (n)-1; i >= 0; i--)
#define pb push_back
#define f first
#define s second
#define chmin(x, y) x = min(x, y);
#define chmax(x, y) x = max(x, y);

//const ll INFL = LLONG_MAX;//10^18 = 2^60
const ll INFL = 1LL<<60;
//const int INF = INT_MAX;
const int INF = 1 << 30;//10^9
ll MOD = 1000000007;
//ll MOD = 998244353;
double EPS = 1e-11;

vector<ll> dy = {0, 1, 0, -1, 1, 1, -1, -1, 0};
vector<ll> dx = {1, 0, -1, 0, 1, -1, 1, -1, 0};

void pres(double A){printf("%.9lf\n", A);}
void BinarySay(ll x, ll y = 60){rep(i, y) cout << (x>>(y-1-i) & 1); cout << endl;}
ll cnt_bit(ll x){return __builtin_popcountll(x);}

ll pow_long(ll x, ll k){
  ll res = 1;
  while(k > 0){
    if(k % 2) res *= x;
    x *= x; k /= 2;
  }
  return res;
}

ll pow_mod(ll x, ll k){
  x %= MOD;
  ll res = 1;
  while(k > 0){
    if(k % 2){
      res *= x; res %= MOD;
    }
    x *= x; x %= MOD;
    k /= 2;
  }
  return res;
}

ll inverse(ll x){return pow_mod(x, MOD - 2);};

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll x, ll y){
  ll res = x / gcd(x, y);
  res *= y;
  return res;
};


//コンビネーション
const int MAXcomb = 2000010;
ll fac[MAXcomb], finv[MAXcomb], inv[MAXcomb];
//facはn!,finvは1/n!
//invは逆元
void COMinit(){
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for(int i = 2; i < MAXcomb; i++){
        fac[i] = fac[i-1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD/i) % MOD;
        finv[i] = finv[i-1] * inv[i] % MOD;
    }
}
ll comb(int n, int k){
    if(n < k) return 0;
    if(n < 0 || k < 0) return 0;
    return fac[n] * finv[k] % MOD * finv[n-k] % MOD;
}

const int MAXkai = 200010;
ll kai_memo[MAXkai];
ll kai(ll N){
  if(kai_memo[N] != 0) return kai_memo[N];
  if(N <= 1) return 1;
  return kai_memo[N] = N * kai(N-1) % MOD;
}

ll disit(ll s, ll base = 10){
  ll res = 0;
  while(s){
    res++;
    s /= base;
  }
  return res;
}

//Union Find
const ll MAX_V = 1000010;

ll par[MAX_V];//
ll Rank[MAX_V];
ll child[MAX_V];

void init_UF(){
  for(ll i = 0; i < MAX_V; i++){
    par[i] = i;
    Rank[i] = 1;
    child[i] = 1;
  }
}

ll find(ll x){
  if(par[x] == x) return x;
  else{
    return par[x] = find(par[x]);
  }
}

bool same(ll x, ll y){
  return find(x) == find(y);
}

void unite(ll x, ll y){
  ll rx = find(x), ry = find(y);
  if(rx != ry){
    if(Rank[rx] >= Rank[ry]){
      par[ry] = rx;
      if(Rank[rx] == Rank[ry]) Rank[rx]++;
      child[rx] += child[ry];
    }else{
      par[rx] = ry;
      child[ry] += child[rx];
    }
  }
}


void solve(){
  int M, K;
  cin >> M >> K;
  if(M == 1 && K == 0){
    cout << 0 << " " << 0 << " " << 1 << " " << 1 << endl;
    return;
  }
  if(M == 1 && K == 1){
    cout << -1 << endl;
    return;
  }
  if(K >= (1<<M)){
    cout << -1 << endl;
    return;
  }
  rep(i, 1<<M){
    if(i == K) continue;
    cout << i << endl;
  }
  cout << K << endl;
  revrep(i, 1<<M){
    if(i == K) continue;
    cout << i << endl;
  }
  cout << K << endl;
}


int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  solve();
}