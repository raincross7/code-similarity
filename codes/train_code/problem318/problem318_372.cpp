#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  vector<int> v(3);
  for (int i = 0; i < 3; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  cout << v[0] + v[1] << endl;
}
