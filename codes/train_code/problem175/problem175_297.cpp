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
  cout << (expr ? "Yes" : "No") << "\n";
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int N;
  cin >> N;
  vector<lint> A(N);
  vector<lint> B(N);
  bool flg = false;
  REP(i, N) {
    cin >> A[i] >> B[i];
    if(A[i] != B[i]) flg = true;
  }
  if(!flg) {
    cout << 0 << endl;
    return 0;
  }
  lint sum = 0;
  lint min = INF;
  REP(i, N) {
    sum += A[i];
    if(A[i] > B[i] && B[i] < min) min = B[i];
  }
  cout << sum-min << endl;

}