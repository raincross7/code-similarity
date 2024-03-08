#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define ALL(a) (a).begin(),(a).end()

using namespace std;
using ll = long long;

const double PI = 3.14159265358979;

void solve()
{
  ll n, y;
  cin >> n >> y;
  y /= 1000;
  if (n > y)
  {
    cout << "-1 -1 -1";
    return;
  }
  set<ll> hash;

  queue<tuple<ll, ll, ll>> que;
  if (n <= y / 10) que.emplace(y / 10, 0, y - (y / 10) * 10);
  else if (n <= y / 5) que.emplace(0, y / 5, y - ((y / 5) * 5));
  else que.emplace(0, 0, y);

  while(!que.empty())
  {
    ll x, y, z;
    tie(x, y, z) = que.front();
    que.pop();

    ll hv = (x << 40LL) + (y << 20LL) + z;
    if (hash.find(hv) != hash.end()) continue;
    hash.insert(hv);

    if (x + y + z < n) continue;
    if (x + y + z == n)
    {
      cout << x << " " << y << " " << z;
      return;
    }
    if (z >= 5)
    {
      que.emplace(x, y + 1, z - 5);
    }
    if (z >= 10)
    {
      que.emplace(x + 1, y, z - 10);
    }
    if (y >= 2)
    {
      que.emplace(x + 1, y - 2, z);
    }
  }
  cout << "-1 -1 -1";

}

int main()
{
  fastio;
  solve();

  return 0;
}