#include <bits/stdc++.h>
#define rep(i, to) for (int i = 0; i < (to); ++i)
#define repf(i, from, to) for (int i = (from); i < (to); ++i)
#define unless(cond) if (!(cond))
using namespace std;
using ll = long long;
template <typename T>
using V = vector<T>;
template <typename T, typename U>
using P = pair<T, U>;

int main() {
  int a, b;
  cin >> a >> b;

  int product = a * b;

  if(product % 2 == 1) {
    cout << "Odd" << endl;
  } else {
    cout << "Even" << endl;
  }
}