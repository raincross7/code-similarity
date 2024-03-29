#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define FOR(i, a, b) for (int (i) = (a); (i) <= (b); (i)++)
#define ROF(i, a, b) for (int (i) = (a); (i) >= (b); (i)--)
#define REP(i, n) FOR(i, 0, (n)-1)
#define sqr(x) ((x) * (x))
#define all(x) (x).begin(), (x).end()
#define reset(x, y) memset(x, y, sizeof(x))
#define uni(x) (x).erase(unique(all(x)), (x).end())
#define BUG(x) cerr << #x << " = " << (x) << endl
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define _1 first
#define _2 second
#define chkmin(a, b) a = min(a, b)
#define chkmax(a, b) a = max(a, b)

const int maxn = 212345;

int n, k, a[maxn], cnt[maxn];

int main() {
  scanf("%d%d", &n, &k);
  FOR(i, 1, n) scanf("%d", a + i);
  chkmin(k, 200);
  FOR(i, 1, k) {
    FOR(j, 1, n) cnt[j] = 0;
    FOR(j, 1, n) {
      cnt[max(j - a[j], 1)]++;
      cnt[min(j + a[j] + 1, n + 1)]--;
    }
    int now = 0;
    FOR(j, 1, n) {
      now += cnt[j];
      a[j] = now;
    }
  }
  FOR(i, 1, n) printf("%d ", a[i]);
}
