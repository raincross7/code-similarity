#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  string s;
  cin >> s;
  
  string t = "";
  rep(i, s.size()) {
    if (s[i] == 'B') {
      if (t.size()) t.pop_back();
    }
    else t.push_back(s[i]);
  }
  cout << t << endl;
  return 0;
}