#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  if ((N % 1000) % 111 == 0 || (N - N % 10) % 111 == 0){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}