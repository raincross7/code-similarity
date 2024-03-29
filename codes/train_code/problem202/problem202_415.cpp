#include "bits/stdc++.h"

#define MOD 1000000007
#define rep(i, n) for(ll i=0; i < (n); i++)
#define rrep(i, n) for(ll i=(n)-1; i >=0; i--)
#define ALL(v) v.begin(),v.end()
#define rALL(v) v.rbegin(),v.rend()
#define FOR(i, j, k) for(ll i=j;i<k;i++)
#define debug_print(var) cerr << #var << "=" << var <<endl;
#define DUMP(i, v)for(ll i=0;i<v.size();i++)cerr<<v[i]<<" "
#define fi first
#define se second

using namespace std;
typedef long long int ll;
typedef vector<ll> llvec;
typedef vector<double> dvec;
typedef pair<ll, ll> P;
typedef long double ld;
struct edge{ll x, c;};

ll mod(ll a, ll mod){
  ll res = a%mod;
  if(res<0)res=res + mod;
  return res;
}

ll modpow(ll a, ll n, ll mod){
  ll res=1;
  while(n>0){
    if(n&1) res=res*a%mod;
    a=a*a%mod;
    n>>=1;
  }
  return res;
}

ll modinv(ll a, ll mod){
  ll b=mod, u=1, v=0;
  while(b){
    ll t=a/b;
    a-=t*b; swap(a, b);
    u-=t*v; swap(u, v);
  }
  u%=mod;
  if(u<0)u+=mod;
  return u;
}

ll gcd(ll a, ll b){
  ll r = a%b;
  if(r==0) return b;
  else return gcd(b, a%b);
}

bool is_prime(ll n){
  ll i = 2;
  if(n==1)return false;
  if(n==2)return true;
  bool res = true;
  while(i*i <n){
    if(n%i==0){
      res = false;
    }
    i = i+1;
  }

  //if(i==1)res = false;
  if(n%i==0)res=false;
  return res;
}
/**************************************
** A main function starts from here  **
***************************************/
int main(){
  ll N;
  cin >> N;
  llvec A(N);
  rep(i, N){
    cin >> A[i];
    A[i] -=i+1;
  }
  sort(ALL(A));
  ll b = A[N/2];
  if(N%2==0){
    b = (A[N/2] + A[N/2-1])/2;
  }
  ll ans = 0;
  rep(i, N)ans += abs(A[i] - b);
  cout << ans << endl;
  return 0;
}
