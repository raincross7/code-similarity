#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using ld = long double;
long double const pi = std::acos(-1.0L);
typedef pair<int,int> P;

int main() {
  ll h,w;
  cin >> h >> w;
  if(h==1||w==1){
    cout << 1 << endl;
  }
  else cout << (h*w+1)/2 << endl;
  return 0;
}