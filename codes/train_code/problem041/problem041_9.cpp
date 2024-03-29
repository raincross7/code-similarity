#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int N, K, l[64];
  cin >> N >> K;
  for (int i = 0; i < N; i++) cin >> l[i];
  sort(l, l + N, greater<int>());
  int ans = 0;
  for (int i = 0; i < K; i++) {
    ans += l[i];
  }
  cout << ans << endl;
  return 0;
}
