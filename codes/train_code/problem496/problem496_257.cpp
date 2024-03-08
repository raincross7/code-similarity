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
  int n, k;
  cin >> n >> k;
  vi h(n);
  rep(i, 0, n)
    cin >> h[i];
  
  sort(h.begin(), h.end());
  reverse(h.begin(), h.end());
  
  ll ans = 0;
  
  rep(i, k, n){
    ans += h[i];
  }
  
  cout << ans << endl;
  
  return 0;
  
}