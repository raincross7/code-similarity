#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
 int n, a;
  cin >> n >> a;
  if (n%500 <= a) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
 return 0;
}