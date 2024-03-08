#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ll long long
#define MOD 1000000007
#define MAX 100010
#define aout(a) REP(i,sizeof(a)) cout << a[i] << " "; cout << endl;
#define vout(v) REP(i,v,size()) cout << v[i] << " "; cout << endl;
using namespace std;
using Graph = vector<vector<int>>;
#define PI 3.1415926535897932384
int N;
ll ans = 0;
bool flag = false;

int main(){
  cin >> N;
  int MA = 1000001;
  int A[201010];
  int cnt[1010101];
  bool ok[1010101];
  FOR(i, 0, N) cin >> A[i];

  FOR(i, 0, N) cnt[A[i]]++;
  FOR(x, 1, MA) ok[x] = true;
  FOR(x, 1, MA) if(0 < cnt[x]) {
    if (1 < cnt[x]) ok[x] = false;
    for (int x2 = x * 2; x2 < MA; x2 += x) ok[x2] = false;
  }

  int ans = 0;
  FOR(i, 0, N) if (ok[A[i]]) ans++;
  cout << ans << endl;
}