#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll MOD = 1000000007LL; // = 10^9 + 7
const double PI = 3.14159265358979;

void solve()
{
  int n, v1, v2;
  cin >> n;
  vector<int> hist1(100003, 0);
  vector<int> hist2(100003, 0);
  for(int i = 0; i < n / 2; ++i)
  {
    cin >> v1 >> v2;
    hist1[v1]++;
    hist2[v2]++;
  }

  vector<P> h1{ P(0, -1) };
  vector<P> h2{ P(0, -1) };
  for(int i = 0; i < (int)hist1.size(); ++i)
  {
    if (hist1[i] > 0) h1.emplace_back( P(hist1[i], i) );
  }
  for(int i = 0; i < (int)hist2.size(); ++i)
  {
    if (hist2[i] > 0) h2.emplace_back( P(hist2[i], i) );
  }
  sort(h1.rbegin(), h1.rend());
  sort(h2.rbegin(), h2.rend());

  ll ans = 0;
  int i1 = 0, i2 = 0;
  if (h1[0].second == h2[0].second)
  {
    if (h1[0].first == h2[0].first)
    {
      h1[1] > h2[1] ? i1++ : i2++;
    }
    else
    {
      h1[0] < h2[0] ? i1++ : i2++;
    }
  }
  ans = n - h1[i1].first - h2[i2].first;
  cout << ans;
}

int main()
{
  fastio;
  solve();

  return 0;
}