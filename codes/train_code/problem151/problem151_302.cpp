#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;
using ll = long long;

const ll MOD = 1000000007LL; // = 10^9 + 7
const double PI = 3.14159265358979;

void solve()
{
  int d;
  cin >> d;
  string ans;
  if (d == 25) ans = "Christmas";
  if (d == 24) ans = "Christmas Eve";
  if (d == 23) ans = "Christmas Eve Eve";
  if (d == 22) ans = "Christmas Eve Eve Eve";
  cout << ans;
}

int main()
{
  fastio;
  solve();

  return 0;
}