#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1000000007;
double pi = 3.14159265358979;

ll r(ll x, ll y) {
  if (y == 0) return 1;
  else if (y % 2 == 0) return r(x, y/2) * r(x, y/2) % mod;
  else return x * r(x, (y-1)/2) % mod * r(x, (y-1)/2) % mod;
}

int main() {
  int k,n;
  cin >> n >> k;
  cout << n - k + 1 <<endl;
}