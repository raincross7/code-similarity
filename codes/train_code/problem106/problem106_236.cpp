#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, S = 0;
  cin >> n;
  vector<int> v(n);
  for(int i = 0;i < n;i++) {
    cin >> v[i];
  }
  for(int i = 0;i < n;i++) {
    for(int j = i + 1;j < n;j++) {
      S += v[i] * v[j];
    }
  }
  cout << S << endl;
}