#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
 
using namespace std;
using namespace __gnu_pbds;
 
#define debug(s) cout << #s << " = " << s << endl
#define all(v) (v).begin(), (v).end()
#define mem(a,val) memset(a, val, sizeof a)
 
#define maxn 200010
#define INF 1e15
#define ff first
#define ss second
#define endl '\n'
typedef long long ll;
 
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int n;
int arr[maxn];
int b[maxn][25], cum[maxn][25];

bool check(int l, int r) {
  for (int i = 0; i <= 22; ++i) {
    if (cum[r][i] - cum[l - 1][i] > 1) return false;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  for (int i = 1; i <= n; ++i) cin >> arr[i];
  for (int i = 1; i <= n; ++i) {
    for (int j = 0; j <= 22; ++j) {
      if (arr[i] & (1 << j)) b[i][j] = 1;
    }
  }
  for (int j = 0; j <= 22; ++j) {
    for (int i = 1; i <= n; ++i) cum[i][j] = cum[i - 1][j] + b[i][j];
  }
  ll ans = n;
  for (int i = 1; i <= n; ++i) {
    ll lo = 0, hi = n - i, res = 0;
    while (lo <= hi) {
      int mid = (lo + hi) >> 1;
      if (check(i, i + mid)) {
        res = mid;
        lo = mid + 1;
      }
      else hi = mid - 1;
    }
    ans += res;
  }
  cout << ans << endl;
}
