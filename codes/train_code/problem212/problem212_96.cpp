#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 105; i <= n; i += 2)
  {
    int cnt = 0;
    for (int j = 1; j <= i; j++)
    {
      if (i % j == 0)
        cnt++;
    }
    if (cnt == 8)
      ans++;
  }
  cout << ans << endl;
  return 0;
}