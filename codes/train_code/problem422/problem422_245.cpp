#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(){
  int n, a;
  cin >> n;
  cin >> a;

  if ((n % 500) <= a){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}