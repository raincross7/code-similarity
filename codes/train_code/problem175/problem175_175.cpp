#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using pint = pair<int,  int>;
using pll = pair<ll, ll>;
using edge = pair<int, ll>;
using Graph = vector<vector<int>>; 
using WeightedGraph = vector<vector<edge>>;
const ll INF = 1LL << 60;
const int INF32 = 1 << 29;
const ll MOD = 1000000007;

int main(){
  int n; cin >> n;
  ll ans = 0;
  ll tmp = INF;
  ll sum = 0;
  for(int i = 0; i < n; ++i){
    ll a, b;cin >> a >> b;
    sum += b;
    if(a>b){
      tmp = min(tmp, b);
    }
  }
  if(tmp == INF) ans = 0;
  else ans = sum - tmp;
  cout << ans << endl;
}
