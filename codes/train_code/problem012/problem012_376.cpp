#include <bits/stdc++.h>
using namespace std;
#define ALL(x) (x).begin(),(x).end()
#define COUT(x) cout<<(x)<<"\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define REP(i, n) for(int i=0;i<n;i++)
#define YES(x) cout<<(x?"YES":"NO")<<"\n"
#define Yes(x) cout<<(x?"Yes":"No")<<"\n"
#define dump(x) cout<<#x<<" = "<<(x)<<"\n"
#define endl "\n"
using G = vector<vector<int>>;
using M = map<int,int>;
using P = pair<int,int>;
using PQ = priority_queue<int>;
using PQG = priority_queue<int,vector<int>,greater<int>>;
using V = vector<int>;
using ll = long long;
using edge = struct { int to; int cost; };
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

int main() {
  IOS;
  int n,h; cin >> n >> h;
  int mxa = 0;
  int a[n],b[n];
  REP(i,n) {
    cin >> a[i] >> b[i];
    chmax(mxa, a[i]);
  }

  vector<int> arrb;
  REP(i,n) {
    if (mxa < b[i]) arrb.push_back(b[i]);
  }
  sort(ALL(arrb));

  int ans = 0;
  while(h > 0) {
    if (!arrb.empty()) {
      int v = arrb.back();
      arrb.pop_back();
      h-=v;
      ans++;
    } else {
      ans += h/mxa;
      if (h%mxa) ans++;
      h = 0;
    }
  }

  COUT(ans);
  return 0;
}