#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }

  long long max_A = A[0], ans = 0;
  for (int i = 1; i < N; ++i) {
    if (A[i] < max_A) {
      ans += max_A - A[i];
    } else {
      max_A = A[i];
    }
  }

  cout << ans << endl;
}
