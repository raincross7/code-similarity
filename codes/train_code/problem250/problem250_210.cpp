#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
int main()
{
  int L; cin >> L;
  double v = L/3.0, l = L/3.0, h = L/3.0;
  double ans;
  ans = v * l * h;
  printf("%.12f\n",ans);
}