#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

const int A = 1001001;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> c(A);
  rep(i,n) {
    cin >> a[i];
    c[a[i]]++;
  }
  
  bool pairwise = true;
  for(int i = 2; i < A; i++) {
    int cnt = 0;
    for(int j = i; j < A; j += i) {
      cnt += c[j];
    }
    if (cnt > 1) pairwise = false;
  }
  if (pairwise) {
    cout << "pairwise coprime" << endl;
    return 0;
  }
  
  int g = 0;
  rep(i,n) g = gcd(g,a[i]);
  if (g == 1) {
    cout << "setwise coprime" << endl;
    return 0;
  }
  cout << "not coprime" << endl;
  return 0;
}
