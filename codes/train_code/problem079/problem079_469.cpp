#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <iomanip>
#include <set>
#include <sstream>
#include <queue>
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> broken(n+1);
  for (int i = 0; i < m; i++) {
    int a;
    cin >> a;
    broken[a] = 1;
  }
  vector<int> dp(n+2);
  const int mod = 1000000007;
  dp[n] = 1;
  for (int i = n-1; i >= 0; i--) {
    if (broken[i]) {
      dp[i] = 0;
      continue;
    }
    dp[i] = (dp[i+1] + dp[i+2]) % mod;
  }
  cout << dp[0] << endl;

  return 0;
}