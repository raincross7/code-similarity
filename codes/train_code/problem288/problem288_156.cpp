#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
#define F first
#define S second
const ll mod = 1e9 + 7;
const ll INF = 922337203685477;
#define pb push_back
#define deb(x) cout << '>' << #x << ':' << x << endl;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define maxN 200007
using namespace std;
int main() {
  fastio;
  ll n = 0;
  cin >> n;
  ll curr_max = 0;
  ll ar[n];
  for (ll i = 0; i < n; ++i)
    cin >> ar[i];
  ll ans = 0;
  for (ll i = 0; i < n; ++i) {
    curr_max = max(curr_max, ar[i]);
    ans += (curr_max - ar[i]);
  }
  cout << ans;
}