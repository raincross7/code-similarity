#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <functional>
#include <bitset>

using namespace std;
using lint = long long int;
long long int INF = 1001001001001001LL;
int inf = 1000000007;
long long int MOD = 1000000007LL;
double PI = 3.1415926535897932;

template<typename T1,typename T2>inline void chmin(T1 &a,const T2 &b){if(a>b) a=b;}
template<typename T1,typename T2>inline void chmax(T1 &a,const T2 &b){if(a<b) a=b;}

#define ALL(a) a.begin(),a.end()
#define RALL(a) a.rbegin(),a.rend()

/* do your best */

int main() {
  
  int n, m; cin >> n >> m;
  if (n % 2 == 1) {
    for (int l = 1, r = n - 1; l <= m; l++, r--) {
      cout << l << " " << r << endl;
    }
  } else {
    for (int l = 1, r = n - 1; l <= m; l++, r--) {
      if (r - l <= n / 2) {
        cout << l << " " << r - 1 << endl;
      } else {
        cout << l << " " << r << endl;
      }
    }
  }
  return 0;
}
