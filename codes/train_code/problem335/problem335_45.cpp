#include <bits/stdc++.h>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;
//template<typename key, typename val>
//using ordered_tree =
//  tree<key, val, greater<>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long int64;
typedef complex<double> comp;
const double pi = 3.14159265358979323846;
const int inf = (int)1e+9 + 2;
const int64 inf64 = (int64)1e+18 + 2;
const double dinf = 1e+20;
const int mod = 1'000'000'007;//998244353;
const int base = 2187;
const double eps = 1e-8;
const int N = 500'001;
const int LOGN = 19;

int n, m, k;

void solve(int test)
{
  string s;
  cin >> n >> s;
  int64 ans = 1;
  int c = 1;
  int mode = 0;
  int cnt = 0;
  for (int i = 1; i < n + n; ++i) {
    if (s[i - 1] == s[i]) {
      mode ^= 1;
    }
    cnt += mode;
    if (!mode) {
      ++c;
    }
    else {
      ans *= c;
      ans %= mod;
      --c;
    }
  }
  if (s.front() == 'W' || s.back() == 'W' || cnt != n) {
    cout << "0\n";
    return;
  }
  for (int i = 1; i <= n; ++i) {
    ans *= i;
    ans %= mod;
  }
  cout << ans << '\n';
}

void precalc()
{
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  precalc();
  int test = 1;
  //cin >> test;
  //auto start = chrono::high_resolution_clock::now();
  for (int i = 1; i <= test; ++i)
    solve(i);
  //cerr << chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - start).count() << '\n';
  return 0;
}
