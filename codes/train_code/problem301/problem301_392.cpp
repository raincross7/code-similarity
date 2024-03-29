#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
int main()
{
  int N;
  cin >> N;
  vector<int> vec(N+1);
  REP(i, N) {
    int x;
    cin >> x;
    vec[i+1] = vec[i] + x;
  }
  int ans = INF;  
  REP(i, N) {
    ans = min(ans, abs(vec[i]*2 - vec[N]));
  }
  cout << ans << endl;
  return 0;
}