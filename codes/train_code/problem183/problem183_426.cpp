#include <iostream>
#include <vector>
#include <cmath>
using ll = long long;
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

const int MAX = 1100000;
const int mod = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

void COMinit(){
  fac[0] = fac[1] = 1;
  finv[0] = finv[1] = 1;
  inv[1] = 1;
  for (int i = 2; i < MAX; i++){
    fac[i] = fac[i - 1] * i % mod;
    inv[i] = mod - inv[mod%i] * (mod / i) % mod;
    finv[i] = finv[i - 1] * inv[i] % mod;
  }
}

long long COM(int n, int k){
  if (n < k) return 0;
  if (n < 0 || k < 0) return 0;
  return fac[n] * (finv[k] * finv[n-k] % mod) % mod;
}

int main(){
  ll x, y;
  cin >> x >> y;
  if ((x + y) % 3 == 0){
    ll n = (x + y) / 3;
    ll m = abs(x - y);
    ll r = (n + m) / 2;
    COMinit();
    cout << COM(n, r) << endl;
  }
  else {
    cout << 0 << endl;
  }
  return 0;
}