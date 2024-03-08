#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

ll gcd(ll a, ll b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}

int main() {
  ll n;
  cin >> n;
  ll g = 0;
  rep(i, n) {
    ll a;
    cin >> a;
    g = gcd(g, a);
  }
  cout << g << endl;
}