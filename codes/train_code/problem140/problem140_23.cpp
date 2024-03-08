#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define rrep(i, a, b) for (int i = a; i >= (b); i--)
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;
template <class T>
inline bool chmin(T& a, T b) {
   if (a > b) {
      a = b;
      return true;
   }
   return false;
}
template <class T>
inline bool chmax(T& a, T b) {
   if (a < b) {
      a = b;
      return true;
   }
   return false;
}
void hr() {
   cerr << "--------------" << endl;
}
const int INF = 1001001001;
const int MOD = 1000000007;

int main() {
   cin.tie(0);
   ios_base::sync_with_stdio(0);

   int n, m;
   cin >> n >> m;
   vector<int> l(m), r(m);
   rep(i, 0, m) cin >> l[i] >> r[i];

   int maxL = 0, minR = 1e6;
   rep(i, 0, m) {
      chmax(maxL, l[i]);
      chmin(minR, r[i]);
   }
   int ans = minR - maxL + 1;
   if (ans < 0) ans = 0;
   cout << ans << endl;

   return 0;
}