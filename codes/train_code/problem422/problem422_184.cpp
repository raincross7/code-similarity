#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, A;
  cin >> N >> A;

  if ((N - A) <= N / 500 * 500) {
    cout << "Yes" << endl;
  }
  
  else  {
    cout << "No" << endl;
  }
}