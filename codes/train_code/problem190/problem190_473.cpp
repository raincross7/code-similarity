#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  cout << ((S.substr(0, N / 2) == S.substr(N / 2)) ? "Yes" : "No") << "\n";
}