#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);
  int ans = 0;
  int now = 1;
  for (int i = 0; i < N; i++) {
    if (A.at(i) == now) {
      now++;
    } else ans++;
  }
  cout << ((ans == N) ? -1 : ans) << "\n";
}