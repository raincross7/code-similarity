#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int w;
  cin >> s >> w;
  for(int i=0; i<s.length(); i+=w)
    cout << s[i];
  return 0;
}
