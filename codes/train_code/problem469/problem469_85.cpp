#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i,n) for (ll i=0; i<n; ++i)
#define all(c) begin(c),end(c)
#define PI acos(-1)
#define oo LLONG_MAX
template<typename T1, typename T2>
bool chmax(T1 &a,T2 b){if(a<b){a=b;return true;}else return false;}
template<typename T1, typename T2>
bool chmin(T1 &a,T2 b){if(a>b){a=b;return true;}else return false;}
/*

2e5*2e5
*/
int main(){
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  ll N; cin >> N;
  vector<ll> A(N, 0);
  vector<ll> use(1e6+10, 0);
  rep(i, N) cin >> A[i];
  sort(all(A));
  rep(i, N){
    ll j = 1;
    if (use[A[i]]){
      use[A[i]]++;
      continue;
    }
    while (A[i] * j <= 1e6){
      use[A[i]*j]++;
      j++;
    }
  }
  ll ans = 0;
  rep(i, N){
   if (use[A[i]] == 1)
     ans++;
  }
  cout << ans << endl;
}
