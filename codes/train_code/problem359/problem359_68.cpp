#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/* clang-format off */
#define MOD 1000000007
#define INF 1000000000
#define REP(i, n) for (ll i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(a) (a).begin(), (a).end()
#define __DEBUG__
#ifdef __DEBUG__
#define CH_P(a) cout <<"check_point("<<#a<<")" << "\n";
#define DEBUG(x) cout<<#x<<":"<<x<<"\n"
#define DEBUGS(v) cout << #v << ":";for(auto x:v){cout<<x<<" ";}cout<<"\n"
#endif
#ifndef __DEBUG__
#define CH_P(a) 
#define DEBUG(x) 
#define DEBUGS(v) 
#endif
#define TIMER_S(start) chrono::system_clock::time_point start = chrono::system_clock::now();
#define TIMER_E(end) chrono::system_clock::time_point end = chrono::system_clock::now();
#define TIME(start, end) cout << static_cast<double>(chrono::duration_cast<chrono::microseconds>(end - start).count()) << "ms" << "\n";
/* clang-format on */

int main() {
  ll n, ans = 0;
  cin >> n;
  vector<ll> a(n + 1), b(n);
  REP(i, n + 1) { cin >> a[i]; }
  REP(i, n) { cin >> b[i]; }

  REP(i, n) {
    if (b[i] <= a[i])
      ans += b[i];
    else {
      ans += a[i] + min((b[i] - a[i]), a[i + 1]);
      a[i + 1] -= min((b[i] - a[i]), a[i + 1]);
    }
  }
  cout << ans << endl;
  return 0;
}
