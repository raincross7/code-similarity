#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define endl "\n"

int main()
{
  i64 N;
  cin >> N;
  i64 ans = 0;
  for (i64 i = 1; i <= N; i++)
    ans += (N - 1) / i;
  cout << ans << endl;
  return 0;
}
