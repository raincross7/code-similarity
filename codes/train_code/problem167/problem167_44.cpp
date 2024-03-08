#include <bits/stdc++.h>
#define rep2(i,m,n) for (int i = (int)(m); i < (int)(n); i++)
#define rep(i,n) rep2(i,0,n)
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
using namespace std;
using ll = long long;
template <typename T>
T sq(T x){
  return x * x;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> a(n), b(m);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) cin >> b[i];
  for (int i = 0; i + m <= n; i++) {
    for (int j = 0; j + m <= n; j++) {
      bool ok = true;
      for (int ii = 0; ii < m; ii++) {
        for (int jj = 0; jj < m; jj++) {
          if (a[i + ii][j + jj] != b[ii][jj]) {
            ok = false;
          }
        }
      }
      if (ok) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}

