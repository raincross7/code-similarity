#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
const ll MOD = 1000000007;

int main() {
  int r;
  cin >> r;
  if (r < 1200) {
    cout << "ABC" << endl;
  } else if (r < 2800) {
    cout << "ARC" << endl;
  } else {
    cout << "AGC" << endl;
  }
  return 0;
}