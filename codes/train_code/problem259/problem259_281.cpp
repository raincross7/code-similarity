#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);


  int R;
  cin >> R;

  if (R<1200) {
    cout << "ABC" << endl;
  }

  else if (R<2800) {
    cout << "ARC" << endl;
  }

  else if (R>=2800) {
    cout << "AGC" << endl;
  } 
  return 0;
}
