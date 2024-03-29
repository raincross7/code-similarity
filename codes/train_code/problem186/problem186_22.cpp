#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;
using ll = long long;

const ll MOD = 1000000007LL; // = 10^9 + 7
const double PI = 3.14159265358979;

void solve()
{
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for(int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }

  if (n == k) cout << 1;
  else cout << 1 + (n - k - 1) / (k - 1) + 1;

}

int main()
{
  fastio;
  solve();

  return 0;
}