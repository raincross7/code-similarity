#include <bits/stdc++.h>
using namespace std;
using lint = long long int;
using P = pair<lint, lint>;
#define FOR(i, begin, end) for(int i=(begin),i##_end_=(end);i<i##_end_;i++)
#define IFOR(i, begin, end) for(int i=(end)-1,i##_begin_=(begin);i>=i##_begin_;i--)
#define REP(i, n) FOR(i,0,n)
#define IREP(i, n) IFOR(i,0,n)
#define ALL(a)  (a).begin(),(a).end()
constexpr int MOD = 1000000007;
constexpr int INF = 2147483647;
void yes(bool expr) {
  cout << (expr ? "Possible" : "Impossible") << "\n";
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int N;
  cin >> N;
  vector<int> cnt(N);
  REP(i, N) {
    int a;
    cin >> a;
    cnt[a]++;
  }
  int min = -1;
  int max = -1;
  IREP(i, N) {
    if(max == -1 && cnt[i] > 0) {
      max = i;
      min = (max+1) / 2;
    }
    if(max == -1) continue;
    if(i != min) {
      if(cnt[i] <= 1) {
        cout << "Impossible" << "\n";
        return 0;
      }
    } else {
      yes((max%2 == 0 && cnt[i] == 1) || (max%2 != 0 && cnt[i] == 2));
      return 0;
    }
  }

}