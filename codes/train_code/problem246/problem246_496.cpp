#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, n) for (int i = (int)(n); i >= 0; i--)
#define REP(i, m, n) for (int i = (int)(m); i <= (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;

int main(){
  int N, T;
  cin >> N >> T;

  int sum = 0;
  int t, bt;
  cin >> bt;
  rep(i, N-1){
    cin >> t;
    sum += min(T, t - bt);
    bt = t;
  }
  sum += T;

  cout << sum << endl;

  return 0;
}
