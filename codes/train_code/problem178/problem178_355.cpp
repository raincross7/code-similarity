#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, s, e) for (int i = (int)(s); i <= (int)(e); i++)
#define printYesNo(is_ok) puts(is_ok ? "Yes" : "No");
#define printVector(v) rep(i, v.size()) cout << v[i] << endl;

int main()
{
  int A, B, C;
  cin >> A >> B >> C;
  bool is_ok = false;
  if (A <= C && C <= B)
    is_ok = true;
  printYesNo(is_ok);
  return 0;
}