#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int K;
  cin >> K;
  int A, B;
  cin >> A >> B;
  if (B - A + 1 >= K) {
    cout << "OK" << endl;
  }
  else {
    for (int i = A; i <= B; i++) {
      if (i % K == 0) {
        cout << "OK" << endl;
        break;
      }
      if (i == B) {
        cout << "NG" << endl;
      }
    }
  }
}