#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(int)(n); i++)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const ll MOD = 1000000007;
const ll INF = 9999999999;
const int INFI = 2147483647;
template<class T> inline bool chmin(T& a, T b){if (a>b){a = b; return true;}return false;}
template<class T> inline bool chmax(T& a, T b){if (a<b){a = b; return true;}return false;}
template<class T> inline T powerM(T a,T b){if (b==0) return 1;
  T tmp = powerM(a,b/2); if (b%2==0) return tmp*tmp%MOD; else return tmp*tmp%MOD*a%MOD; }


int main() {
  int n,m,k; cin >>n >>m >>k;
  bool ok = false;
  for (int i=0; i<=n; i++){
    for (int j=0; j<=m; j++){
      int res = i * m;
      res += (n-i-i) * j;
      if (res == k) ok = true;
    }
  }
  cout <<(ok ? "Yes" : "No") <<endl;
}
