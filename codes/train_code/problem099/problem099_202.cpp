#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<ll> vl;
typedef vector<vector<ll> > vvl;
#define REP(var, a, b) for (int var = (a); var < (b); var++)
#define rep(var, n) for (int var = 0; var < (n); ++var)
#define ALL(c) (c).begin(), (c).end()
#define rALL(c) (c).rbegin(), (c).rend()
ll MOD = 1000000007;

int main() {
  //
  ll n;
  cin >> n;
  vl a(n), b(n);
  rep(i, n) {
    a[i] = 30000 * (1 + i);
    b[n - 1 - i] = 30000 * (1 + i);
  }
  map<ll, ll> r;
  int idx = 1;
  rep(i, n) {
    ll p;
    cin >> p;
    p--;
    r[p] = idx++;
  }
  rep(i, n) { b[i] += r[i]; }
  rep(i, n) {
    cout << a[i];
    if (i < n - 1) {
      cout << " ";
    } else {
      cout << endl;
    }
  }
  rep(i, n) {
    cout << b[i];
    if (i < n - 1) {
      cout << " ";
    } else {
      cout << endl;
    }
  }
  return 0;
}
