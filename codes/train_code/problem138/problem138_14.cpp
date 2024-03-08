#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;
using ll = long long;

const ll MOD = 1000000007LL; // = 10^9 + 7
const double PI = 3.14159265358979;

void solve()
{
  int n, h;
  cin >> n;
  int max_h = 0, ans = 0;
  for(int i = 0; i < n; ++i)
  {
    cin >> h;
    if (max_h <= h)
    {
      max_h = h;
      ans ++;
    }
  }
  cout << ans;
}

int main()
{
  fastio;
  solve();

  return 0;
}