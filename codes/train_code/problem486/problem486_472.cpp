#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repr(i, n) for (int i = (n) - 1; i >= 0; i--)
#define range(a) a.begin(), a.end()

int MOD;

class mint {
  int n;
public:
  mint(int n_ = 0) : n(n_) {}
  explicit operator int() { return n; }
  friend mint operator-(mint a) { return -a.n + MOD * (a.n != 0); }
  friend mint operator+(mint a, mint b) { int x = a.n + b.n; return x - (x >= MOD) * MOD; }
  friend mint operator-(mint a, mint b) { int x = a.n - b.n; return x + (x < 0) * MOD; }
  friend mint operator*(mint a, mint b) { return (long long)a.n * b.n % MOD; }
  friend mint &operator+=(mint &a, mint b) { return a = a + b; }
  friend mint &operator-=(mint &a, mint b) { return a = a - b; }
  friend mint &operator*=(mint &a, mint b) { return a = a * b; }
  friend bool operator==(mint a, mint b) { return a.n == b.n; }
  friend bool operator<(mint a, mint b) { return a.n < b.n; }
  friend bool operator!=(mint a, mint b) { return a.n != b.n; }
  friend istream &operator>>(istream &i, mint &a) { return i >> a.n; }
  friend ostream &operator<<(ostream &o, mint a) { return o << a.n; }
};

mint modinv(mint n) {
  int a = (int)n, b = MOD;
  int s = 1, t = 0;
  while (b != 0) {
    int q = a / b;
    a -= q * b;
    s -= q * t;
    swap(a, b);
    swap(s, t);
  }
  return s >= 0 ? s : s + MOD;
}


int main() {
  // S[j] - 10^{j-i} S[i] = 0
  // S[j] = 10^{j-i} S[i]
  // S[j] 10^{-j} = S[i] 10^{-i}
  int N; cin >> N >> MOD;
  string S; cin >> S;
  if (MOD == 2) {
    ll ans = 0;
    rep(i, N) {
      if ((S[i] - '0') % 2 == 0) {
        ans += i + 1;
      }
    }
    cout << ans << endl;
    return 0;
  }
  if (MOD == 5) {
    ll ans = 0;
    rep(i, N) {
      if ((S[i] - '0') % 5 == 0) {
        ans += i + 1;
      }
    }
    cout << ans << endl;
    return 0;
  }
  map<mint, ll> mp;
  mp[0]++;
  mint s = 0;
  mint p = 1;
  ll ans = 0;
  // P = 2, 5
  for (char c : S) {
    s = s * 10 + (c - '0');
    p *= modinv(10);
    ans += mp[s * p]++;
  }
  cout << ans << endl;
}
