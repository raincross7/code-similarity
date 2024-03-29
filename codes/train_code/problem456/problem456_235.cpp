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

void solve(long long N, vector<long long> A) {
    vector<ll> rev(N);
    for (int i = 0; i < N; i++) {
        rev[A[i]-1] = i+1;
    }
    for (int i = 0; i < N - 1; i++) {
        cout << rev[i] << " ";
    }
    cout << rev[N-1] << endl;
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips:
// You use the default template now. You can remove this line by using your
// custom template)
int main() {
  long long N;
  cin >> N;
  vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  solve(N, move(A));
  return 0;
}
