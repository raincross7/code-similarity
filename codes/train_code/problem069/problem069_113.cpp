#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  char c;
  cin >> c;
  if (c == 'A') cout << 'T' << endl;
  else if (c == 'T') cout << 'A' << endl;
  else if (c == 'C') cout << 'G' << endl;
  else cout << 'C' << endl;
}