#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<char> a(3);
  cin >> a.at(0) >> a.at(1) >> a.at(2);
  sort(a.begin(), a.end());
  vector<char> b = {'a', 'b', 'c'};
  if (a == b) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}
