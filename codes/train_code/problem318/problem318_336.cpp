#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int P, Q, R;
  cin >> P >> Q >> R;

  cout << P+Q+R -max(P,max(Q,R)) << endl;
  
}