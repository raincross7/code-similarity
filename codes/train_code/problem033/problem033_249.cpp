#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
  int n;
  while (cin >> n, n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int min_ = 1e+9;
    for (int i = 0; i < n - 1; i++) {
      min_ = min(min_, v[i + 1] - v[i]);
    }
    cout << min_ << endl;
  }
  
  return 0;
  
}