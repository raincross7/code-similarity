#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define all(x) (x).begin(),(x).end()
using ll = long long;
string char_to_string(char val) {
  return string(1, val);
}
int char_to_int(char val) {
  return val - '0';
}
template<class T> inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template<class T> inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

int main() {
  int A, B, K; cin >> A >> B >> K;
  vector<int> C;
  int i = 1;
  while(i <= min(A, B)) {
    if(A % i == 0 && B % i == 0) {
      C.push_back(i);
    }
    i++;
  }
  cout << C[C.size() - K] << endl;
}