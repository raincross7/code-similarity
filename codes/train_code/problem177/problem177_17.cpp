#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  string ans ="No";
  if (S[0]==S[1] && S[2]==S[3] && S[0]!=S[2]) {
    ans ="Yes";
  }
  if (S[0]==S[2] && S[1]==S[3] && S[1]!=S[2]) {
    ans ="Yes";
  }
  if (S[0]==S[3] && S[1]==S[2] && S[0]!=S[1]) {
    ans ="Yes";
  }
  cout << ans << endl;
}
