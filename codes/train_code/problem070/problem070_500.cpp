#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()

using namespace std;
using ll = long long;

const double PI = 3.14159265358979;

void solve()
{
  int x, a, b;
  cin >> x >> a >> b;
  string ans = "";
  if (a >= b) ans = "delicious";
  else if (x >= b - a) ans = "safe";
  else ans = "dangerous";
  cout << ans;
}

int main()
{
  fastio;
  solve();

  return 0;
}