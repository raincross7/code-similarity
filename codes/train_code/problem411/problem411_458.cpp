#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B,C,D;
  cin >> A >> B >> C >> D;
  cout << min({A+C,A+D,B+C,B+D}) << endl;
}