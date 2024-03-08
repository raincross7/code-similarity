#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#define vi vector<int>
#define all(x) (x).begin(),(x).end()
#define INF (1<<30)-1
using ll = long long;
using namespace std;
template<class T> inline bool chmax(T &a, const T &b){ if(a<b) { a=b; return 1; } return 0; }
template<class T> inline bool chmin(T &a, const T &b){ if(b<a) { a=b; return 1; } return 0; }

int main(){
  cin.tie(0), ios::sync_with_stdio(false);
  vi rgb(3); rep(i,3) cin >> rgb[i];
  int n; cin >> n;
  int ans = 0;
  rep(i,3001){
    rep(j,3001){
      if(0 <= n-(i*rgb[0]+j*rgb[1]) && (n-(i*rgb[0]+j*rgb[1]))%rgb[2] == 0) ans++;
    }
  }
  cout << ans;
  cout << "\n";
  return 0;
}
