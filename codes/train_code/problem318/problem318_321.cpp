#include <bits/stdc++.h>
#include <set>
#include <numeric>
#define rep(i,n) for (int i=0; i < (n); ++i)
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;
 
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }


// const double PI = acos(-1);
// int gcd(int x, int y) { return (x % y)? gcd(y, x % y): y; }
// int a[12][12];



void solve() {
  int a,b,c; cin >> a >> b >> c;

  int mx=max({a,b,c}),mn=min({a,b,c}),md=a+b+c-mn-mx;
  cout << mn+md << endl;
}

int main() {
  solve();
  return 0;
}

