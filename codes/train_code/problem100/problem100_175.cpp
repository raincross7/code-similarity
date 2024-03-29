#include <iostream>
#include <vector>

using namespace std;

void mark(int a[3][3], int b) {
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      if (a[i][j] == b) {
        a[i][j] = 0;
        return;
      }
    }
  }
}
bool check(int a[3][3]) {
  // check rows
  for (int i = 0; i < 3; ++i) {
    if (a[i][0] + a[i][1] + a[i][2] == 0) return true;
  }
  // check columns
  for (int i = 0; i < 3; ++i) {
    if (a[0][i] + a[1][i] + a[2][i] == 0) return true;
  }

  if (a[0][0] + a[1][1] + a[2][2] == 0) return true;
  if (a[0][2] + a[1][1] + a[2][0] == 0) return true;

  return false;
}

int main() {
  int a[3][3];
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      cin >> a[i][j];
    }
  }
  int n, b;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> b;
    mark(a, b);
  }
  if (check(a)) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}
