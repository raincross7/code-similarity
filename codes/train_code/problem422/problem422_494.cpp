#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A; 
  if (A >= N % 500) {
    cout << "Yes" << endl;
  }
  if (A < N % 500) {
    cout << "No" << endl;
  }
}