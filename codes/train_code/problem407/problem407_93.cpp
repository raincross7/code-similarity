#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll N, K;
  cin >> N >> K;

  ll ans = K * pow(K - 1, N - 1);

  cout << ans << endl;
}