#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n)                    \
  for (int i = 0; i < (int)(n); i++) \
    ;

#define _GLIBCXX_DEBUG
#define _LIBCPP_DEBUG 0

int main() {
  ll k, x;
  cin >> k >> x;

  if (500 * k >= x) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
