#include <bits/stdc++.h>
using namespace std;

using pp=pair<int,int>;

int main() {
  vector<int> A(3);
  cin >> A[0] >> A[1] >> A[2];
  sort(A.begin(), A.end());
  cout << A[2]-A[0] << endl;
}