#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a + b >= c) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}