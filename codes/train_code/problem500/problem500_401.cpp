#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int (i)=0;(i)<(n);(i)++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
bool custom1 (pair<int, int> a, pair<int, int> b) {
  return (a.first < b.first);
}
bool custom2(pair<int, int> a, pair<int, int> b) {
  return (a.second < b.second);
}

const int MAX = 200005;
const long long MOD = 1000000007;
const long long MODMOD = 998244353;

long long fac[MAX], finv[MAX], inv[MAX];

void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}
long long modinv(long long a, long long m) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}

long long gcd(long long a, long long b) {
  if(a % b == 0) return b;
  else return gcd(b, a % b);
}

int main() {
  string s;
  cin >> s;
  bool yes = true;
  long long ans = 0;
  vector<int> position;
  rep(i, s.size()) {
    if(s[i] == 'x') continue;
    position.emplace_back(i);
  }
  int left = 0, right = 0;
  if(position.size() == 0) {
    cout << 0 << endl;
    return 0;
  }
  else if(position.size() % 2 == 1) {
    left = position[position.size()/2] - 1;
    right = position[position.size()/2] + 1;
  }
  else {
    left = position[position.size()/2-1];
    right = position[position.size()/2];
  }
  while(left >= 0 || right <= s.size()-1) {
    if(right == s.size()) {
      for(int i=left;i>=0;i--) {
        if(s[i] == 'x') ans++;
        else {
          yes = false;
          break;
        }
      }
      break;
    }
    else if(left == -1) {
      for(int i=right;i<s.size();i++) {
        if(s[i] == 'x') ans++;
        else {
          yes = false;
          break;
        }
      }
      break;
    }
    if(s[left] == s[right]) {
      left--;right++;
      continue;
    }
    else if(s[left] == 'x') {
      left--;
      ans++;
    }
    else if(s[right] == 'x') {
      right++;
      ans++;
    }
    else {
      yes = false;
      break;
    }
  }
  if(yes) cout << ans << endl;
  else cout << -1 << endl;
}
