#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ld = long double;
const ll ATCODER_AMARI = 1000000007; //10^9 + 7
const ll INF = 10000000000000;

//階乗関数　ATCODER_AMARIに注意
ll factorial(ll k){
  ll sum = 1;
  for(int i = 1 ; i < k + 1; i++) {
    sum *= i;
    //sum = sum % ATCODER_AMARI;
  }
  return sum;
}

int main() {
  string s,t;
  cin >> s >> t;
  int a,b;
  cin >> a >> b;
  string u;
  cin >> u;

  if(s == u) {
    cout << a - 1 << ' ' << b << endl;
  }
  else {
    cout << a << ' ' << b - 1 << endl;
  }
}

