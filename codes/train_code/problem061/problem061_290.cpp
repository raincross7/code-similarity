#include <iostream>
#include <iomanip>
#include <algorithm>
#include <stdio.h>
#include <string>
#include <vector>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <stack>
#include <utility>
#include <queue>
using namespace std;
typedef long long int lld;
typedef long double llf;
typedef pair<lld, lld> pii;


int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  string s;
  int k;
  cin >> s;
  cin >> k;

  if (s.size() == 1) {
    cout << k / 2 << endl;
    return 0;
  }

  int cnt = 0;
  int lastChanged = -1;
  bool flag = true;
  int a = 1;

  for (int i = 1; i < s.size(); ++i) {
    if (s[i] != s[0]) flag = false;
    if (flag) {
      a++;
    }
    if (s[i] == s[i-1] && lastChanged != i-1) {
      lastChanged = i;
      cnt++;
    }
  }

  if (flag) {
    lld aux = (lld)s.size() * (lld)k;
    cout << aux / 2 << "\n";
    return 0;
  }

  lld ans = (lld)cnt * (lld)k;
  if (s.front() == s.back() && lastChanged != s.size()-1 && (a & 1)) {
    ans += k-1;
  }

  cout << ans << "\n";
  return 0;
}
