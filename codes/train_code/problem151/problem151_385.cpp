#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  int d;
  cin >> d;
  if(d == 25) cout << "Christmas\n";
  else if(d == 24) cout << "Christmas Eve\n";
  else if(d == 23) cout << "Christmas Eve Eve\n";
  else cout << "Christmas Eve Eve Eve\n";
}
