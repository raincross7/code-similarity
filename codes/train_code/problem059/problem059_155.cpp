/* Author: $%U%$
 * Time: $%Y%$-$%M%$-$%D%$ $%h%$:$%m%$:$%s%$
**/
#include <bits/stdc++.h>
using namespace std;
#define fore(i, a, b) for (int i = a, to = b; i < to; i++)
#define foref(i, a, b) for (int i = b - 1, to = a; i >= to; i--)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define SZ(v) (int)v.size()
#define pb push_back
typedef long long Long;
typedef pair<int, int> Pair;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  Long n, x, t;
  cin >> n >> x >> t;
  cout << (n + x - 1) / x * t << endl;

  return 0;
}