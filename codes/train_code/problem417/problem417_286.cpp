#include <iostream>
#include <string>
#include <vector>

#define rep(i,n) for (int i = 0; i < (n); ++i)

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  string S;
  cin >> S;

  int count = 0;
  char before = S[0];
  rep(i, S.size()) {
    if (before != S[i]) {
      count++;
      before = S[i];
    }
  }

  cout << count << endl;
  
  return 0;
}
