#include<bits/stdc++.h>
using namespace std;

int main () {
  int k, a, b;
  cin >> k >> a >> b;
  string ans = "NG";
  for (int i = a; i <= b; i++) {
    if (i%k==0) {
      ans = "OK";
      break;
    }
  }
  cout << ans << endl;
}