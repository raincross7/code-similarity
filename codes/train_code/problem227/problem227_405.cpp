#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
  ll a,b;cin>>a>>b;
  cout << a / gcd(a,b) * b << endl;
}
