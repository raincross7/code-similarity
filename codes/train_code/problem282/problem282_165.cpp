#include <bits/stdc++.h>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N, K;
  cin >> N >> K;
  vector<int> Snuke(N, 0);

  rep(i,K) {
    int d; cin >> d;
    rep(i,d) {
      int A; cin>>A;
      Snuke[A-1]++;
    }
  }

  int ans = 0;
  rep(i,N) {
    if(Snuke[i]==0) ++ans;
  }
  cout << ans << endl;
}
