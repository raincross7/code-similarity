#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main() {
  string s, t;
  cin >> s >> t;
  string ta = t.substr(0, s.size());
  if (s == ta) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}