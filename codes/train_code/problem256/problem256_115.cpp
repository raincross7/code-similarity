#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int k, x;
  cin >> k >> x;
  if(500 * k >= x) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}