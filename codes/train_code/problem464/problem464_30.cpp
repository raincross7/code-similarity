#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>
using namespace std;

using ll = long long;
using ld = long double;
const int INF = 1e9;
const double EPS = 1e-9;
const ll MOD = 1e9 + 7;

const string YES = "YES";
const string NO = "NO";

int main()
{
  long long N;
  scanf("%lld", &N);
  long long M;
  scanf("%lld", &M);
  std::vector<long long> a(M);
  std::vector<long long> b(M);
  vector<int> cost(N + 1, 0);
  for (int i = 0; i < M; i++)
  {
    scanf("%lld", &a[i]);
    scanf("%lld", &b[i]);
    if (min(a[i], b[i]) == 1)
    {
      cost[max(a[i], b[i])]++;
    }
    else
    {
      cost[a[i]]++, cost[b[i]]++;
    }
  }
  bool flag = true;
  for (int i = 0; i <= N; ++i)
    if (cost[i] % 2 == 1)
      flag = false;
  cout << (flag ? YES : NO) << endl;

  return 0;
}
