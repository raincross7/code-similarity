#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

using Pair = pair<int, int>;
using lint = long long;

// const int mod = 1e9 + 7;
// const int mod = 998244353;

template <typename T> vector<T> make_v(size_t a) { return vector<T>(a); }

template <typename T, typename... Ts> auto make_v(size_t a, Ts... ts) {
  return vector<decltype(make_v<T>(ts...))>(a, make_v<T>(ts...));
}

int main(){
  string s;
  cin>>s;
  int n = s.size();
  int x, y;
  cin >> x >> y;

  int st = 0;
  while(s[st]=='F'){
    st++;
    x--;
  }
  int w = 0;
  vector<vector<int>> m(2, vector<int>());
  for (int i = st; i < n; i++) {
    if (s[i] == 'T') {
      w = 1 - w;
    } else if (s[i] == 'F') {
      if(i>0&&s[i-1]=='F'){
        m[w][m[w].size() - 1]++;
      }else {
        m[w].push_back(1);
      }
    }
  }

  bool ret = true;
  for (int i = 0; i < 2;i++){
    int s;
    if (i == 0) s = x;
    else
      s = y;
    int sum = 0;
    for (int j = 0;j<m[i].size();j++){
      sum += m[i][j];
    }
    if ((sum - s) % 2 == 1||sum<s) ret = false;
    else {
      s = (sum - s) / 2;

      auto dp = make_v<bool>(2, s+1);

      dp[1][0] = true;
      for (int j = 0; j < m[i].size(); j++) {
        int t = j % 2;
        for (int k = 0;k<s+1;k++)
          dp[t][k] = dp[1 - t][k];
        for (int k = 0; k < s+1; k++) {
          if (dp[1 - t][k] && k + m[i][j] <= s) dp[t][k + m[i][j]] = true;
        }
      }
      if (dp[(m[i].size() - 1) % 2][s] == false) ret = false;
    }
  }
  if (ret) cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
