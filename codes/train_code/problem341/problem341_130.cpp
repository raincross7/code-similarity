#include<bits/stdc++.h>
using namespace std;

int main() {
  string s; int w;
  cin >> s >> w;
  for (int i = 0; i < s.size(); i++) {
    if (i % w == 0) cout << s[i];
  }
  cout << endl;
}