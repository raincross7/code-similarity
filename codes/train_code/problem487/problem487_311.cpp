#include <iostream>
#define rep(S, L) for (int i = S; i < L; ++i)
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int ans = 0;
  if (a <= c && b <= c) {
    ans = c * 10 + a + b;
  } else if (a <= b && c <= b) {
    ans = b * 10 + a + c;
  } else {
    ans = a * 10 + b + c;
  }
  cout << ans << endl;
  return 0;
}
