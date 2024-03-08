#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define pa(x,n) for(ll i=0;i<n;i++){cout<<(x[i])<<" \n"[i==n-1];};
#define pb push_back

using ll = long long;
using namespace std;
using pint = pair<int,int>;
using pll = pair<ll,ll>;
const int INFint = 1e9;
const ll INFll = 1e18;
ll MOD=1e9+7;

ll gcd(ll a, ll b) { return __gcd(a,b); } //最大公約数
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; } //最大公倍数

// aのn乗をMODで割りながら計算する
ll modpow(ll a, ll n) {
  long long res = 1;
  while (n > 0) {
    if (n & 1) res = res * a % MOD;
    a = a * a % MOD;
    n >>= 1; // right shift
  }
  return res;
}

// MODを法としたaの逆元を計算する
ll modinv(ll a) {
  return modpow(a, MOD - 2);
}

int main(){
  int N,L,a[100000];
  cin>>N>>L;
  rep(i,N) cin>>a[i];
  int ma(0);
  int tmpi(0);
  for (int i(0); i < N - 1; i++){
    if (a[i] + a[i+1] > ma){
      ma = max(ma,a[i] + a[i+1]);
      tmpi = i;
    }
  }
  if (ma < L){
    cout << "Impossible" << endl;
  }else{
    cout << "Possible" << endl;
    for (int i(0);i<tmpi;i++){
      cout << i+1 << endl;
    }
    for (int i(N-2);i>=tmpi;i--){
      cout << i+1 << endl;
    }
  }
  return 0;
}
