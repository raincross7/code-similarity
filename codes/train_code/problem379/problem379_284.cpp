/**
 *    author:  math2do
 *    created: 26.08.2020 15:12:47
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int x, y;
  cin >> x >> y;
  bool found = false;
  for (int dx = 0; dx <= x; dx++) {
    int dy = x - dx;
    int total = 2 * dx + 4 * dy;
    if (total == y) {
      found = true;
      break;
    } 
  } 
  puts(found ? "Yes" : "No");
  // form 2
  return 0;
}
