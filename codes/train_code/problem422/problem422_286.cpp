#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {
  int n, a;
  cin >> n >> a;
  if (n % 500 <= a) {
    cout << "Yes" << '\n';
  } else {
    cout << "No" << '\n';
  }
  return 0;
}