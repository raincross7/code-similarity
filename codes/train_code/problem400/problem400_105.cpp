#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  int a = 0;
  for(char ch : s) {
    a += ch-'0';
  }
  if(a%9==0) {
    cout<<"Yes\n";
  } else {
    cout<<"No\n";
  }
  return 0;
}
