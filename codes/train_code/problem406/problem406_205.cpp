#pragma region
#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < int(n); i++)
#define rrep(i, n) for (int i = int(n) - 1; i >= 0; i--)
#define reps(i, n) for (int i = 1; i <= int(n); i++)
#define rreps(i, n) for (int i = int(n); i >= 1; i--)
#define repc(i, n) for (int i = 0; i <= int(n); i++)
#define rrepc(i, n) for (int i = int(n); i >= 0; i--)
#define repi(i, a, b) for (int i = int(a); i < int(b); i++)
#define repic(i, a, b) for (int i = int(a); i <= int(b); i++)
#define each(x, y) for (auto &x : y)
#define all(a) (a).begin(), (a).end()
#define bit32(x) (1 << (x))
#define bit64(x) (1ll << (x))

using namespace std;

using i32 = int;
using i64 = long long;
using u64 = unsigned long long;
using f80 = long double;
using vi32 = vector<i32>;
using vi64 = vector<i64>;
using vu64 = vector<u64>;
using vf80 = vector<f80>;
using vstr = vector<string>;

inline void yes() { cout << "Yes" << '\n'; exit(0); }
inline void no() { cout << "No" << '\n'; exit(0); }
inline i64 gcd(i64 a, i64 b) { if (min(a, b) == 0) return max(a, b); if (a % b == 0) return b; return gcd(b, a % b); }
inline i64 lcm(i64 a, i64 b) { if (min(a, b) == 0) return max(a, b); return a / gcd(a, b) * b; }
inline u64 xorshift() { static u64 x = 88172645463325252ull; x = x ^ (x << 7); return x = x ^ (x >> 9); }
template <typename T> class pqasc : public priority_queue<T, vector<T>, greater<T>> {};
template <typename T> class pqdesc : public priority_queue<T, vector<T>, less<T>> {};
template <typename T> inline void amax(T &x, T y) { if (x < y) x = y; }
template <typename T> inline void amin(T &x, T y) { if (x > y) x = y; }
template <typename T> inline T exp(T x, i64 n, T e = 1) { T r = e; while (n > 0) { if (n & 1) r *= x; x *= x; n >>= 1; } return r; }
template <typename T> inline T bis(T ok, T ng, function<bool(T)> f, T eps = 1) { while (abs(ok - ng) > eps) { T mi = (ok + ng) / 2; (f(mi) ? ok : ng) = mi; } return ok; }
template <typename T> istream& operator>>(istream &is, vector<T> &v) { each(x, v) is >> x; return is; }
template <typename T> ostream& operator<<(ostream &os, vector<T> &v) { rep(i, v.size()) { if (i) os << ' '; os << v[i]; } return os; }
void solve(); int main() { ios::sync_with_stdio(0); cin.tie(0); cout << fixed << setprecision(16); solve(); return 0; }
#pragma endregion

void solve() {
  int N;
  cin >> N;
  vi64 A(N);
  cin >> A;
  i64 xor_sum = 0;
  {
    rep(i, N) xor_sum ^= A[i];
    rep(i, N) A[i] &= ~xor_sum;
  }
  int p = 0;
  rrep(i, 60) {
    bool f = false;
    repi(j, p, N) if ((A[j] >> i) & 1) {
      swap(A[p], A[j]);
      f = true;
      break;
    }
    if (!f) {
      continue;
    }
    rep(j, N) {
      if (j == p) continue;
      if ((A[j] >> i) & 1) A[j] ^= A[p];
    }
    p++;
  }
  A.resize(60);
  i64 acc = 0;
  int src = -1;
  rrep(i, 60) {
    int pre = src;
    repi(j, src + 1, 60) if (A[j] & bit64(i)) {
      src = j;
      break;
    }
    if (src == pre) {
      continue;
    }
    acc ^= A[src];
  }
  i64 ans = acc * 2 + xor_sum;
  cout << ans << endl;
}
