#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, l;
  cin >> n >> l;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  sort(s.begin(), s.end());
  rep(i, n) cout << s[i];
  cout << endl;
  return 0;
}