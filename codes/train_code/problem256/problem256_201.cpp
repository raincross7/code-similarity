#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
#define rep(i, s, n) for(int i = (int)(s); i < (int)(n); i++)

ll INF = 1ll << 60;

int main(){
  int k, x;
  cin >> k >> x;
  
  if(k*500 >= x){
    cout << "Yes" << endl;
  }
  else
    cout << "No" << endl;
  
  return 0;
  
}