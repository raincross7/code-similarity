#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f(ll n) {
  if(n % 2)
    return (n + 1) / 2 % 2;
  else
    return n / 2 % 2 ^ n;
}

int main() {
  ll a, b;
  cin >> a >> b;
  a--;
  cout << (f(a) ^ f(b)) << endl;
}
