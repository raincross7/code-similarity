#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << setprecision(20) << fixed;

  long long r, D, x;
  cin >> r >> D >> x;
  for(int i = 0; i < 10; i++){
    x = r * x - D;
    cout << x <<endl;
  }
}