#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define rep(i, n) FOR(i, 0, n - 1)
using namespace std;
typedef long long ll;
template <class T> inline bool dpmin(T &a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> inline bool dpmax(T &a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}

void solve(long long s) {
    ll N = 1e7;
    vector<ll> seq(N);
    seq[0] = s;

    ll n = 1;
    for (n = 1; n < N; n++) {
        if (n >= 3 && seq[n-3] == 4 && seq[n-2] == 2 && seq[n-1] == 1) {
            break;
        }

        if (seq[n-1]%2 == 0) {
            seq[n] = seq[n-1] / 2;
        } else {
            seq[n] = 3*seq[n-1] + 1;
        }
        /* cout << seq[n] << endl; */
    }

    ll ans;

    if (s == 4 || s == 2 || s == 1) {
        ans = 4;
    } else {
        ans = n+1;
    }

    cout << ans << endl;
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips:
// You use the default template now. You can remove this line by using your
// custom template)
int main() {
  long long s;
  cin >> s;
  solve(s);
  return 0;
}
