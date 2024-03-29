#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <queue>
#include <stack>

using namespace std;

typedef long long int ll;
typedef pair<int, int> Pii;

const ll mod = 1000000007;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s, t;
  cin >> s;
  cin >> t;

  int n = s.length();

  vector<char> st(26, '.');
  for (int i = 0; i < n; i++) {
    if (st[s[i]-'a'] == '.') {
      st[s[i]-'a'] = t[i];
    }
    else if (st[s[i]-'a'] != t[i]) {
      cout << "No" << endl;
      return 0;
    }
  }

  swap(s, t);
  st = vector<char>(26, '.');
  for (int i = 0; i < n; i++) {
    if (st[s[i]-'a'] == '.') {
      st[s[i]-'a'] = t[i];
    }
    else if (st[s[i]-'a'] != t[i]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}
