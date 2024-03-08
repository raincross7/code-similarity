#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(c) (c).begin(),(c).end()
#define ZERO(a) memset(a,0,sizeof(a))
#define MINUS(a) memset(a,0xff,sizeof(a))
#define MINF(a) memset(a,0x3f,sizeof(a))
#define POW(n) (1LL<<(n))
#define IN(i,a,b) (a <= i && i <= b)
using namespace std;
template <typename T> inline bool CHMIN(T& a,T b) { if(a>b) { a=b; return 1; } return 0; }
template <typename T> inline bool CHMAX(T& a,T b) { if(a<b) { a=b; return 1; } return 0; }
template <typename T> inline void SORT(T& a) { sort(ALL(a)); }
template <typename T> inline void REV(T& a) { reverse(ALL(a)); }
template <typename T> inline void UNI(T& a) { sort(ALL(a)); a.erase(unique(ALL(a)),a.end()); }
const int MOD = 1000000007;
const int INF = 0x3f3f3f3f3f3f3f3f;
const double EPS = 1e-10;
/* ---------------------------------------------------------------------------------------------------- */

int Q;
int A,B;

bool check(int x) {
  int n = x-A;
  return (A+n/2)*(x-n/2) < A*B;
}

void solve() {
  int ans = 2*(A-1);
  if (A+1 < B && A*(A+1) < A*B) {
    int ok = A+1, ng = B;
    while (ng - ok > 1) {
      int mid = (ok + ng) / 2;
      if (check(mid)) ok = mid;
      else ng = mid;
    }
    ans += ok-A;
  }
  cout << ans << endl;
}

signed main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(10);

  cin >> Q;
  REP(i,Q) {
    cin >> A >> B;
    if (A > B) swap(A,B);
    solve();
  }

  return 0;
}