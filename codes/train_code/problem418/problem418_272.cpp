#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define REP(i,n) for(ll i=0, i##_len=(n); i<i##_len; ++i)
#define all(x) (x).begin(),(x).end()
string char_to_string(char val) {
  return string(1, val);
}
int char_to_int(char val) {
  return val - '0';
}

int main() {
  int N; cin >> N;
  string S; cin >> S;
  int K; cin >> K;

  char tmp = S[K - 1];

  REP(i, N) {
    if(S.at(i) != tmp) S.at(i) = '*';
  }

  cout << S << endl;
}