#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main() {
  string s;
  cin >> s;
  if(s[0] == s[1] || s[1] == s[2] || s[0] == s[2]) cout << "No" << endl;
  else cout << "Yes" << endl;
}