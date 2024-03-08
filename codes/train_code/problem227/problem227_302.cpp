#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b)
{
  return b ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b)
{
  return a / gcd(a, b) * b;
}

int main()
{
  ll a, b;
  cin >> a >> b;
  ll ans = lcm(a, b);
  cout << ans << endl;
}
