#include <bits/stdc++.h>

#define REP(i, x) REPI(i, 0, x)
#define REPI(i, a, b) for (int i = int(a); i < int(b); ++i)
#define ALL(x) (x).begin(), (x).end()

typedef long long ll;
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string S;
  cin >> S;
  int l = S.length();

  REP(i, l) {
    if (i % 2 == 0) {
      cout << S.at(i);
    }
  }
  cout << endl;

  return 0;
}
