#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

const ll INF = 1LL << 62;
const double PI = acos(-1);
const double eps = 1e-10;

int main() {
  ll n;
  string s, t;
  cin >> n >> s >> t;
  rep(i, n) cout << s[i] << t[i];
  cout << endl;
  return 0;
}
