#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int K, X;
  cin >> K >> X;
  if (500*K >= X) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}