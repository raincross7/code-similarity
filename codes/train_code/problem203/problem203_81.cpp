#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int d, t, s;
  cin >> d >> t >> s;
  string ans;
  if((double)d/s <= t){
    ans = "Yes";
  }else{
    ans = "No";
  }
  cout << ans << endl;

}